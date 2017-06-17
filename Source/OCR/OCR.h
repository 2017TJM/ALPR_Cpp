//
// Created by Nabil on 31/01/2017.
//

#ifndef OPENCV_TEST_OCR_H
#define OPENCV_TEST_OCR_H

#include <cvaux.h>

#include "../Models/Plaque.h"
#include "../Models/CharSegment.h"
#include "../ML/HOT.h"
#include "../Config.h"

using namespace std;
using namespace cv;

class OCR{
    public:
        static const char strCharacters[];
        string svmTarbiaFile;
        int tailleSegment;
        bool mrabi;

        static const int THRESH_LOW = 160;
        static const int THRESH_NORMAL = 180;
        static const int THRESH_HEIGH = 200;
        int thresh = THRESH_NORMAL;

        OCR();
        OCR(string tarbiaFile);
        string run(Plaque *plaque);

        Mat preTraiterSegment(Mat &in);

        void train(Mat trainData, Mat trainClasses, int nlayers);


        bool DEBUG;
        bool segmentsSauvgarde;
        string nomFichierOriginal;
        float OCRminH=15;
    private:
    Config config;
    Mat hogFeatures(Mat &in, HOGDescriptor hog);
    Mat hotFeatures(Mat &input, HOT hot);
};

#endif //OPENCV_TEST_OCR_H
