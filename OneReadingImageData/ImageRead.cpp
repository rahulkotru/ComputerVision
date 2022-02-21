#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>

using namespace cv;
using namespace std;
int main()
{
string path="D:/28_GitHub/ComputerVision/OneReadingImageData/Resources/Test.png";
Mat img=imread(path);
imshow("Image",img);
waitKey(250);
cout<<"Displaying Video Capture"<<endl;
string path2="D:/28_GitHub/ComputerVision/OneReadingImageData/Resources/p.mp4";
VideoCapture vid(path2);
Mat image;
/*while(true){
    vid.read(image);
    imshow("Video",image);
    waitKey(10);
}
*/
cout<<"Webcam video feed"<<endl;
VideoCapture webcam(0);
Mat cam;
while(true){
    webcam.read(cam);
    imshow("Webcam Feed",cam);
    waitKey(1);
    destroyAllWindows();
}

return 0;
}