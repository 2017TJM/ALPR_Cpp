//
// Created by ghiles on 4/9/17.
//

#ifndef ALPR_CPP_PLATE_CHOOSER_H
#define ALPR_CPP_PLATE_CHOOSER_H

#include <opencv2/opencv.hpp>
#include "svm.h"
#include "../Models/Plaque.h"
#include "../OCR/OCR.h"

using namespace std;
using namespace cv;
using namespace cv::ml;

int choose_plate(vector<Mat> candidate_plates, Mat &chosen_one);

int choose_plate(vector<Plaque> candidate_plates, Plaque &chosen_one);

int choose_lowest(vector<Mat> candidate_plates, Mat &chosen_one);

void choose_highest_average_brightness(vector<Mat> candidate_plates, Mat &chosen_one);

int choose_highest_average_brightness_in_v(vector<Mat> candidate_plates, Mat &chosen_one);

int choose_using_svm(vector<Mat> candidate_plates, Mat &chosen_one);

int choose_using_svm(vector<Plaque> candidate_plates, Plaque &chosen_one);

int choose_using_ocr(vector<Mat> candidate_plates, Mat &chosen_one);

void filter_plates_by_ratio(vector<Mat> &candidate_plates);

void filter_plates_by_ratio(vector<Plaque> &candidate_plates);

#endif //ALPR_CPP_PLATE_CHOOSER_H
