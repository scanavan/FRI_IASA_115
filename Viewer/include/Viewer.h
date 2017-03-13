#ifndef VIEWER_H
#define VIEWER_H
#include <opencv2/opencv.hpp>

class Viewer
{
public:
	Viewer(cv::String title);
	void Run();
private:
	cv::String mTitle;
	cv::VideoCapture capture;
	cv::Mat image;
};
#endif