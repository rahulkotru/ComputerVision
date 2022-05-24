#include <iostream>
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>


class image{
    public:
    cv::Mat img;

    auto readImage(std::string address){
        img = cv::imread(address);
    }
};
