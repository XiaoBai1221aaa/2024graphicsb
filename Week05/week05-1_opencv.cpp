#include <opencv/highgui.h>
int main()
{///�j�gpl, Intel
    IplImage * img = cvLoadImage("c:/mickey.jpg");
    ///�A�j�g��Iamge
    cvShowImage("img", img);
    cvWaitKey(0);
}
