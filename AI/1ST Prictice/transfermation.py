import cv2 as cv
import numpy as np

img = cv.imread('images/tower-of-london.jpg')
cv.imshow('London',img)

def translate(img,x,y):
    transMat = np.float32([[1,0,x],[0,1,y]])
    dimensions = (img.shape[1], img.shape[0])
    return cv.warpAffine(img,transMat,dimensions)

Translate = translate(img,-50,50)
cv.imshow("Translate", Translate) 

cv.waitKey(0)