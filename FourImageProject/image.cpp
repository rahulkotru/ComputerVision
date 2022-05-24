#include <iostream>
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>


class image{
    public:
    cv::Mat img;

    void readImage(std::string address){
        img = cv::imread(address);
    }
    void showImage(){
        cv::resize(img,img,cv::Size(640,480));
        cv::namedWindow("Image Object",cv::WINDOW_AUTOSIZE);
        cv::imshow("Image Window", img);
        cv::waitKey();
    }
};
