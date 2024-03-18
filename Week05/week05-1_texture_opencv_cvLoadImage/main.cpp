#include <GL/glut.h>
#include <opencv/highgui.h>
void display(){
    glutSoildTeapot(0.3);
    glutSwapBuffers();
}
int main(int argc,char* argv[])
{
    IplIamge * img = cvLoadIamge("C:/mickey.jpg");
    cvShowImage("opencv",img);
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week05-1 texture opencv");
    glutDisplayFunc(display);
    glutMainLoop();
}
