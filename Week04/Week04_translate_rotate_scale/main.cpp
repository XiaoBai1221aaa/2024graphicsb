///貼上10行GLUT程式碼
#include<GL/glut.h>
float teapotX=0.5,teapotY=0;
float angle=0;
float s=0.3;///一開始是原本1倍的大小
void display()
{
    glClearColor(1,1,0.9,1);///R,G,B,A
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    ///清背景
    glColor3f(0,1,0);///3f就是R,G,B
    glPushMatrix();
        glTranslatef(teapotX,teapotY,0);
        glRotatef(angle++,0,0,1);
        glScalef(s,s,s);
        glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers();
}
void motion(int x,int y)
{
    s = 1 + (x-150)/150.0;///會變大變小的變數0~1 1~2
    display();
}
int main(int argc,char*argv[])
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week04 mouse glScalef");
    glutIdleFunc(display);
    glutDisplayFunc(display);
    glutMotionFunc(motion);
    glutMainLoop();
}
