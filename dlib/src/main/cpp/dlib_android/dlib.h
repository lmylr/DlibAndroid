#include <string>
#include <vector>
#include <iostream>
#include <ctime>

#include <dlib/image_io.h>
#include <dlib/image_processing.h>
#include <dlib/image_processing/frontal_face_detector.h>

using namespace dlib;

#ifndef DLIBANDROID_DLIB_H
#define DLIBANDROID_DLIB_H

class Dlib {
public:
    void detect(int *src, int width, int height, int *rect, int *points);

private:
    frontal_face_detector detector = get_frontal_face_detector();
    shape_predictor model;
    array2d<unsigned char> sampling(int *src, int width, int height);
};

#endif //DLIBANDROID_DLIB_H