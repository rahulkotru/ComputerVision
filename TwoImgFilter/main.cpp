#include<iostream>
#include<opencv2/highgui.hpp>
#include<opencv2/imgcodecs.hpp>
#include<opencv2/imgproc.hpp>

using namespace std;
using namespace cv;

int main(){
    string path="D:/28_GitHub/ComputerVision/TwoImgFilter/asset/test.jpg";
    Mat img=imread(path);
    Mat imgGray;
    cvtColor(img,imgGray,COLOR_BGR2GRAY);
    resize(img,img,Size(480,640));
    //resizeWindow("Test Image",300,400);
    namedWindow("Test Image",WINDOW_AUTOSIZE);
    imshow("Test Image",img);
    //
    waitKey(); 
    /*imshow("Imgage",imgGray);*/
    /*namedWindow("Test Image");
    waitKey(1000); 
    Mat destImg;
    GaussianBlur(img,imgGray,Size(7,7),5,0);
    namedWindow("Gaussian Test Image");
    //imshow("Gaussian",imgGray);
    waitKey(1000);

    Canny(imgGray,img,25,75);
    namedWindow("Canny Test Image");
    //imshow("Gaussian",img);
    waitKey();*/
    /*destroyAllWindows();*/
    return 0;
}