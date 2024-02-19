#include <GL/glut.h>///使用GLUT外掛

void display(){
    glutSolidTeapot(0.3);///自己寫
    glutSwapBuffers();///自己寫
}
int main(int argc, char *argv[])///我們的MAIN函式
{
    glutInit(&argc, argv);///初始化GLUT
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("GLUT Shapes");///建視窗

    glutDisplayFunc(display);///設定要畫圖的display程式

    glutMainLoop();///主要迴圈
}
