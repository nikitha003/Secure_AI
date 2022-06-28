//To test openCV
//
//#include</usr/local/include/opencv4/opencv2/highgui/highgui.hpp>
//
#include<opencv2/highgui.hpp>
#include<iostream>

int main(int argc, char** argv){

	cv::Mat image;
	image = cv::imread("mario_PNG125.png", cv::IMREAD_COLOR);

	if(!image.data){
		std::cout << "Image not found or unable to open" << std::endl;
	}

	cv::namedWindow("OpenCV Test", cv::WINDOW_AUTOSIZE);
	cv::imshow("Mario: " , image);

	cv::waitKey(0);

	return 0;
}
