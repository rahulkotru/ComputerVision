#pragma once
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
class image{
    cv::Mat img;
    void readImage(std::string address);
    void showImage();
};