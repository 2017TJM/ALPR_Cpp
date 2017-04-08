//
// Created by ghiles on 4/1/17.
//

#ifndef ALPR_CPP_LOCATION_H
#define ALPR_CPP_LOCATION_H

#include <opencv2/opencv.hpp>
#include "wavelet.h"
#include "noise.h"
#include "transitions.h"
#include "exact_location.h"
#include "../utils/opencv.h"

using namespace cv;

void localize_license_plate(Mat src, Mat& dst);

#endif //ALPR_CPP_LOCATION_H
