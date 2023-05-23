#!/usr/bin/env python3

import cv2

blur_kernel_size = (13, 13)
erode_dilate_kernel_size = (13, 13)
erode_dilate_iterations = 3
threshold_value = 26

RED = (0, 0, 255)

def grayGBlur(image):
    return cv2.GaussianBlur(cv2.cvtColor(image, cv2.COLOR_BGR2GRAY), blur_kernel_size, 0)
def centroidOfMask(mask):
    M = cv2.moments(mask)
    try:
        return (int(M["m10"]/M["m00"]), int(M["m01"]/M["m00"]))
    except:
        return -1

if __name__ == "__main__":
    video_capture = cv2.VideoCapture(0)
    if not video_capture.isOpened():
        print("Can't Start the Camera")
        exit(0)
    print("Press Q to Click the Photograph of the Background")
    while cv2.waitKey(1) != 113:
        ret, background = video_capture.read()
        if not ret:
            break
        cv2.imshow("Click Background", background)
    cv2.destroyWindow("Click Background")
    cv2.imshow("Background", background)
    print("Background Captured")
    blur_gray_background = grayGBlur(background)
    while cv2.waitKey(1) != 113:
        ret, frame = video_capture.read()
        if not ret:
            break
        blur_gray_frame = grayGBlur(frame)
        mask_1 = cv2.subtract(blur_gray_frame, blur_gray_background)
        mask_2 = cv2.subtract(blur_gray_background, blur_gray_frame)
        mask = cv2.add(mask_1, mask_2)                                  # Here by adding the 2 masks I'm not just cancelling like M1 = x-y, M2 = y-x, so M1+M2 = 0, because the subtract function works differently rather than just subtracting and putting the absolute value. And by adding masks some information was retained that was not obtained in the individual masks.
        ret, mask = cv2.threshold(mask, threshold_value, 255, cv2.THRESH_BINARY)
        mask = cv2.erode(mask, erode_dilate_kernel_size, iterations=erode_dilate_iterations)
        mask = cv2.dilate(mask, erode_dilate_kernel_size, iterations=erode_dilate_iterations)
        foreground = cv2.bitwise_and(frame, frame, mask=mask)
        centroid = centroidOfMask(mask)
        if centroid != -1:
            cv2.circle(frame, centroid, 2, RED, -1)
        cv2.imshow("Camera", frame)
        cv2.imshow("Mask", mask)
        cv2.imshow("Foreground", foreground)
    cv2.destroyAllWindows()