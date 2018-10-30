#include <string>
#include <vector>
#include <iostream>
#include <ctime>
#include <GLES2/gl2.h>

#include <dlib/image_io.h>
#include <dlib/image_processing.h>
#include <dlib/image_processing/frontal_face_detector.h>

using namespace dlib;

#ifndef DLIBANDROID_DLIB_H
#define DLIBANDROID_DLIB_H

class Dlib {
public:
    Dlib(std::string filename);

    ~Dlib();

    void detect(int *src, int width, int height, int *rect, int *points);

    void detectTexture(int *texture, int width, int height, int *rect, int *points);

private:
    frontal_face_detector detector;
    shape_predictor model;
    int *sample = NULL;
    int textureBufferSize = 0;
    char *textureBuffer = NULL;

    array2d<unsigned char> sampling(int *src, int width, int height, int *sample);
};

#endif //DLIBANDROID_DLIB_H
