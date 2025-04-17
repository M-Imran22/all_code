import cv2 as cv
import numpy as np

blank = np.zeros((500,500,3), dtype='uint8')
cv.imshow('Blank', blank)

# blank[200:300,  300:400] = 255,0,0
# cv.imshow('Blue',blank)

#draw ractangle 

# cv.rectangle(blank,(0,0),(500,100),(0,255,0),thickness=3)
# cv.imshow('Rectangle', blank)

#draw circle
# cv.circle(blank,(150,350),(50),(200,100,150),thickness=-1)
# cv.imshow('Circle', blank)

#text on image
cv.putText(blank,"This is me",(200,100),cv.FONT_HERSHEY_TRIPLEX,1.0,(100,255,230),1)
cv.imshow('text',blank)

cv.waitKey(0)