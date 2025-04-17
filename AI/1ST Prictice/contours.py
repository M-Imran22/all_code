import cv2 as cv
import numpy as np


img = cv.imread('images/cat4.jpg')
cv.imshow('Cat', img)

blank = np.zeros(img.shape, dtype='uint8')
cv.imshow('Blank', blank)

gray = cv.cvtColor(img, cv.COLOR_BGR2GRAY)
cv.imshow('Gray', gray)

canny = cv.Canny(img, 125,125)
cv.imshow('Canny Edges', canny)

rat, thresh = cv.threshold(gray, 125,255,cv.THRESH_BINARY)
cv.imshow('Thresh', thresh)

contours, hierarchies = cv.findContours(canny, cv.RETR_LIST, cv.CHAIN_APPROX_NONE)
print(f'{len(contours)} contour(s) found!')

cv.drawContours(blank, contours, -1, (125,100,125), 1)
cv.imshow('Drawn on blank img', blank)

cv.waitKey(0)