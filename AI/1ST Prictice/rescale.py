import cv2 as cv

image = cv.imread('images/cat3.jpg')
cv.imshow('cat',image)

def rescaleFrame(frame,scale = 0.5):
    width = int(frame.shape[1]*scale)
    height = int(frame.shape[0]*scale)
    dimensions = (width,height)
    
    return cv.resize(frame,dimensions,interpolation = cv.INTER_AREA)


resized_image = rescaleFrame(image)
cv.imshow('image',resized_image)

# reading video
capture = cv.VideoCapture('Videos/cat.mp4')

while True:
    isTrue, frame = capture.read()
    frame_resized = rescaleFrame(frame)

    cv.imshow('Video',frame)    
    cv.imshow('Video Resized',frame_resized) 

    if cv.waitKey(20) & 0xFF==ord('d'):
        break

capture.release()
cv.destroyAllWindows()   