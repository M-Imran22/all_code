import cv2 as cv
import numpy as np

blank = np.zeros((400,400), dtype="uint8")

rectangle = cv.rectangle(blank.copy(),(30,30),(370,370),200,-1)
circle = cv.circle(blank.copy(),(200,200),200,200,-1)

cv.imshow("Rectangle", rectangle)
cv.imshow("Circle", circle)

bitwise_and = cv.bitwise_and(rectangle,circle)
cv.imshow("Bitwise And", bitwise_and)

cv.waitKey(0)