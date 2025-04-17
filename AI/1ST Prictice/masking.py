import cv2 as cv
import numpy as np

img = cv.imread('images/cat4.jpg')
cv.imshow("cat",img)

black = np.zeros(img.shape[:2],dtype='uint8')

mask = cv.circle(black,(img.shape[1]//2,img.shape[0]//2), 150, 255,-1)
cv.imshow('mask', mask)

masked = cv.bitwise_and(img,img, mask=mask)
cv.imshow('masked', masked)

cv.waitKey(0)