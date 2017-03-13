#include "Viewer.h"
Viewer::Viewer(cv::String title) :
	mTitle(title)
{
	capture = cv::VideoCapture(0);
	capture.isOpened();
}
void Viewer::Run()
{
	cv::namedWindow(mTitle, CV_WINDOW_NORMAL);

	for (;;)
	{
		int key = cv::waitKey(33);
		if (key == 27)
		{
			break;
		}
		capture >> image;
		cv::imshow(mTitle, image);
	}
	cv::destroyAllWindows();
}