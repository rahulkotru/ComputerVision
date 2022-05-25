#ifndef IMAGE_HEAD
#define IMAGE_HEAD
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
class image{
    public:
    cv::Mat img;
    image();
    void readImage(std::string address);
    void showImage();
    void Filter();
};
#endif