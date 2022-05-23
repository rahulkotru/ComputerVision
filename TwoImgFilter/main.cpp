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
    
    resize(img,img,Size(480,640));
    cvtColor(img,imgGray,COLOR_BGR2GRAY);
    namedWindow("Test Image",WINDOW_AUTOSIZE);
    imshow("Test Image",img);
    imshow("GrayScale",imgGray);
     
    Mat destImg;
    GaussianBlur(img,destImg,Size(7,7),5,0);
    imshow("Gaussian",destImg);
    
    Mat cannyImg;
    Canny(imgGray,cannyImg,25,75);
    imshow("Canny Edge",cannyImg);
    //imshow("Gaussian",img);
    waitKey();*/
    /*destroyAllWindows();*/
    return 0;
}