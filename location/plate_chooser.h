//
// Created by ghiles on 4/9/17.
//

#ifndef ALPR_CPP_PLATE_CHOOSER_H
#define ALPR_CPP_PLATE_CHOOSER_H

#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

void choose_plate(vector<Mat> candidate_plates, Mat &chosen_one);

#endif //ALPR_CPP_PLATE_CHOOSER_H
