#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc.hpp>

using namespace std;
using namespace cv;

double threshold_value = 26;
cv::Mat erode_dilate_kernel_size = cv::getStructuringElement(cv::MORPH_CROSS, cv::Size(3, 3));
int erode_dilate_iterations = 3;

Scalar RED(0, 0, 255);

Mat grayGBlur(Mat image) {
    cvtColor(image, image, COLOR_BGR2GRAY);
    GaussianBlur(image, image, Size(13, 13), 0);
    return image;
}
pair<int, int> centroidOfMask(Mat mask) {
    Moments M = moments(mask);
    if(M.m00 == 0) {
        pair<int, int> error;
        error.first = -1;
        error.second = -1;
        return error;
    }
    pair<int, int> result;
    result.first = M.m10/M.m00;
    result.second = M.m01/M.m00;
    return result;
}

int main() {
    VideoCapture video_capture(0);
    if(!video_capture.isOpened()) {
        cout << "Can't Start the Camera" << endl;
        return 0;
    }
    cout << "Press Q to Click the Photograph of the Background" << endl;
    Mat background;
    while(waitKey(1) != 113) {
        video_capture >> background;
        imshow("Click Background", background);
    }
    destroyWindow("Click Background");
    imshow("Background", background);
    cout << "Background Captured" << endl;
    Mat blur_gray_background = grayGBlur(background);
    pair<int, int> centroid;
    while(waitKey(1) != 113) {
        Mat frame, blur_gray_frame, mask_1, mask_2, mask, foreground;
        video_capture >> frame;
        blur_gray_frame = grayGBlur(frame);
        subtract(blur_gray_frame, blur_gray_background, mask_1);
        subtract(blur_gray_background, blur_gray_frame, mask_2);
        add(mask_1, mask_2, mask);                                     // Here by adding the 2 masks I'm not just cancelling like M1 = x-y, M2 = y-x, so M1+M2 = 0, because the subtract function works differently rather than just subtracting and putting the absolute value. And by adding masks some information was retained that was not obtained in the individual masks.
        threshold(mask, mask, threshold_value, 255, 0);
        erode(mask, mask, erode_dilate_kernel_size, Point(-1, -1), erode_dilate_iterations);
        dilate(mask, mask, erode_dilate_kernel_size, Point(-1, -1), erode_dilate_iterations);
        bitwise_and(frame, frame, foreground, mask);
        centroid = centroidOfMask(mask);
        if(centroid.first != -1)
            circle(frame, Point(centroid.first, centroid.second), 2, RED, -1);
        imshow("Camera", frame);
        imshow("Mask", mask);
        imshow("Foreground", foreground);
    }
    
    destroyAllWindows();
    return 0;
}