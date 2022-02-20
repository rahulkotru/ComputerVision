#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>

using namespace cv;
using namespace std;
void main()
{
string path="Resources/Test.png";
string path2="Resources/p.mp4";
Mat img=imread(path);
imshow("Image",img);
waitKey(10);
cout<<"Displaying Video Capture"<<endl;
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
}

}