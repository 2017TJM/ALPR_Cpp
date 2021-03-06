//
// Created by ghiles on 4/16/17.
//

#ifndef ALPR_CPP_CORRECTION_H
#define ALPR_CPP_CORRECTION_H

#include <opencv2/opencv.hpp>
#include "wavelet.h"
#include "noise.h"
#include "../Utils/stats.h"
#include "../Models/Plaque.h"

using namespace cv;

void correct_plates(vector<Mat> &plates);

void correct_plates(vector<Plaque> &plates);

void col_correction_by_projections_in_v(Mat &plate);

void col_correction_by_projections_in_v(Plaque &plate);

void row_correction_by_projections_in_v(Mat &plate);

void row_correction_by_projections_in_v(Plaque &plaque);

#endif //ALPR_CPP_CORRECTION_H
