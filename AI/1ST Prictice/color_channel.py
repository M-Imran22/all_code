import cv2 as cv
import numpy as np 

img = cv.imread("images/cat4.jpg")
cv.imshow("img", img)

blank = np.zeros(img.shape[:2], dtype="uint8")

r,g,b, = cv.split(img)


blue = cv.merge([b,blank, blank])
green = cv.merge([blank, g, blank])
red = cv.merge([blank, blank, r])

cv.imshow("R", red)
cv.imshow("G", green)
cv.imshow("B", blue)

print(img.shape)
print(red.shape)
print(green.shape)
print(blue.shape)

Merged = cv.merge([b,g,r])
cv.imshow("Merged Imaged", Merged)

cv.waitKey(0)