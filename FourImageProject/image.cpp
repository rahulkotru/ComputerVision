#include <iostream>
#include "image.h"



    image::image()
    {
        std::cout<<"Create new Image object"<<std::endl;
    }
    
    void image::readImage(std::string address)
    {
        img = cv::imread(address);
        std::cout<<"Create new Image object"<<std::endl;
    }
    void image::showImage()
    {
        cv::resize(img, img, cv::Size(480,640));
        cv::namedWindow("Image Object", cv::WINDOW_AUTOSIZE);
        cv::imshow("Image Object", img);
        cv::waitKey();
    }


