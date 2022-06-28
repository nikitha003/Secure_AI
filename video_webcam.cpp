//This program captures the video from webcam and displays the video
//
#include<iostream>
#include<opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main(){

	VideoCapture cap("example_video1.mp4");
	if(!cap.isOpened()){
		cout<<"Error opening the webcam" << endl;
		return -1;
	}

	while(1){
		Mat frame;
		cap >> frame;
		if(frame.empty())
			break;
		imshow("Frame", frame);
		//waitKey(1000);
		char c = (char)waitKey(1000);
		if(c == 27)
			break;


	}
	cap.release();
	destroyAllWindows();
	return 0;

}
