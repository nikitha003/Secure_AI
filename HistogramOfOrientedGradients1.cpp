#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main (int argc, const char * argv[])
{
    Mat img = imread(argv[1]);
    if( img.empty())
        return -1;

    HOGDescriptor hog;
    hog.setSVMDetector( HOGDescriptor::getDefaultPeopleDetector() );

    vector<Rect> rects;
    copyMakeBorder( img,img,50,50,50,50,0);
    hog.detectMultiScale(img, rects, 0, Size(8,8), Size(32,32), 1.05, 2);

    size_t i;

    for (i=0; i<rects.size(); i++)
    {
        rectangle( img, rects[i], cv::Scalar(0,255,0), 2);
    }

    imshow("result", img);
    waitKey();

    return 0;
}
