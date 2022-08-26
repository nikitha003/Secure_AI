//This program will detect people in a frame and will put a bounding box around them.
//This program can read both images and videos depending on the command prompt arguments.
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main (int argc, const char * argv[])
{
    char debug = 1; //No debug if debug is 0

    cout << "The input file is: " << argv[1] << endl;
    String input_file = argv[1];

    VideoCapture cap(input_file); //For capturing video if the input is a video file

    Mat img = imread(input_file); //Storing the image in a matrix datadype MAT
    if( img.empty())
        return -1;

    //Printing the matrix just to see what it contains.
    if(debug == 1)
	    cout << "The matrix of the image is: " << img << endl;

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
