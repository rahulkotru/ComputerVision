#include<iostream>
#include<opencv2/highgui.hpp>
#include<opencv2/imgcodecs.hpp>
#include<opencv2/imgproc.hpp>

using namespace std;
using namespace cv;
    int main(){
        Mat img=imread("D:/28_GitHub/ComputerVision/TwoImgFilter/asset/test.jpg");
        if (img.empty()){
            cout<<"Empty file"<<endl;
        }
        Mat kernelOne=(Mat_<double>(3,3)<< 0,0,0,0,1,0,0,0,0);
        Mat identity;
        filter2D(img,identity,-1,kernelOne,Point(-1,-1),0,4);
        resizeWindow("Convolutional Kernel",Size(480,640));
        imshow("Convolutional Kernel",img);
        waitKey();
    }