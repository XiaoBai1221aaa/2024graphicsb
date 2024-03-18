#include <opencv/highgui.h>
int main()
{///大寫pl, Intel
    IplImage * img = cvLoadImage("c:/mickey.jpg");
    ///再大寫的Iamge
    cvShowImage("img", img);
    cvWaitKey(0);
}
