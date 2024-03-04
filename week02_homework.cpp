#include <GL/glut.h> ///貼上上周的10行程式碼
#include <math.h>
///貼上剛剛的week02_glut_color_teapot
void display()
{
    glBegin(GL_POLYGON); ///開始畫多邊形 ///上
        glVertex2f((195-200)/200.0,-(23-200)/200.0);
        glVertex2f((135-200)/200.0,-(134-200)/200.0);
        glVertex2f((255-200)/200.0,-(135-200)/200.0);
    glEnd(); ///結束畫

    glBegin(GL_POLYGON); ///開始畫多邊形 ///左
        glVertex2f((135-200)/200.0,-(134-200)/200.0);
        glVertex2f((14-200)/200.0,-(159-200)/200.0);
        glVertex2f((98-200)/200.0,-(251-200)/200.0);
    glEnd(); ///結束畫
    glutSwapBuffers();

    glBegin(GL_POLYGON); ///開始畫多邊形 ///右
        glVertex2f((292-200)/200.0,-(252-200)/200.0);
        glVertex2f((377-200)/200.0,-(160-200)/200.0);
        glVertex2f((257-200)/200.0,-(137-200)/200.0);
    glEnd(); ///結束畫
    glutSwapBuffers();

    glBegin(GL_POLYGON); ///開始畫多邊形 ///左下
        glVertex2f((98-200)/200.0,-(251-200)/200.0);
        glVertex2f((83-200)/200.0,-(379-200)/200.0);
        glVertex2f((195-200)/200.0,-(324-200)/200.0);
    glEnd(); ///結束畫
    glutSwapBuffers();

    glBegin(GL_POLYGON); ///開始畫多邊形 ///右下
        glVertex2f((195-200)/200.0,-(324-200)/200.0);
        glVertex2f((310-200)/200.0,-(379-200)/200.0);
        glVertex2f((292-200)/200.0,-(252-200)/200.0);
    glEnd(); ///結束畫
    glutSwapBuffers();

///顏色
    glColor3f(253/255.0, 245/255.0 , 75/255.0); ///新增顏色


    ///glColor3f(251/255.0, 233/255.0 , 219/255.0); ///新增第二個顏色


    glutSwapBuffers();


///圓形
    glBegin(GL_POLYGON); ///開始畫多邊形
    for(float a=0; a<3.1415*2; a+=0.1 ){
        glVertex2f(0.52*cos(a)-0.02, 0.52*sin(a)-0.10);
    }
    glEnd(); ///結束畫


    ///眼睛
    glBegin(GL_POLYGON); ///開始畫多邊形
    for(float a=0; a<3.1415*2; a+=0.1 ){
        glVertex2f(0.1*cos(a)-0.05, 0.1*sin(a));
        glColor3f(0/255.0, 0/255.0 , 0/255.0);
    }
    glEnd(); ///結束畫
}
/*void display()
{
    myCircle(0.5, 0.5, 0.3);
    myCircle(-0.5, 0.5, 0.3);
    myCircle(0, -0.1, 0.6);
    glutSwapBuffers();

}*/

    /*///顏色
    glColor3f(253/255.0, 245/255.0 , 75/255.0); ///新增顏色


    ///glColor3f(251/255.0, 233/255.0 , 219/255.0); ///新增第二個顏色


    glutSwapBuffers();*/
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week02_glut_homework");
    glutDisplayFunc(display);

    glutMainLoop();
}
