#include <iostream>  
#include <opencv2/core/core.hpp>  
#include <opencv2/highgui/highgui.hpp>  
 
using namespace cv;
 
int main()
{
	// ����һ��ͼƬ��poyanghu��Сͼ��    
	Mat img = imread("E:\\vs2017_code\\Testopencv\\Me.JPG");
	// ����һ����Ϊ "ͼƬ"����    
	namedWindow("ͼƬ");
	// �ڴ�������ʾͼƬ   
	imshow("ͼƬ", img);
	// �ȴ�6000 ms�󴰿��Զ��ر�    
	waitKey(0);
	return 0;
}