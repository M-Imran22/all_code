import cv2 as cv

img = cv.imread('images/me.jpg')
cv.imshow('Me', img)

# gray = cv.cvtColor(img,cv.COLOR_BGR2GRAY)
# cv.imshow('Gray', gray)

#Blur
blur = cv.GaussianBlur(img,(5,5),cv.BORDER_DEFAULT)
cv.imshow("Blur",blur)

# #Canny Edges
canny = cv.Canny(img,125,125)
cv.imshow('Canny edges',canny)

#resizing
# resized = cv.resize(img,(500,500),interpolation=cv.INTER_CUBIC)
# cv.imshow('Resized', resized)

cv.waitKey(0)