#include<windows.h>
#ifdef APPLE
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
#include <math.h>
#include<stdio.h>
float cx=0;
void init()
{
    glClearColor(0, 0, 0, 0); //R, G, B, alpha
    glOrtho(-10, +10, -5, +5, -5, +5);
}
void carbody()
{
    glColor3d(0.35,0.80,0.90);
    glBegin(GL_POLYGON);
    glColor3f(3,6,0.92);
    glVertex2d(3, 2);
    glVertex2d(7, 2);
    glVertex2d(7, -1);
    glVertex2d(-7, -1);
    glVertex2d(-7, 2);
    glVertex2d(-3, 2);
    glVertex2d(-3, 4);
    glVertex2d(3, 4);

    glEnd();

}
void lines()
{
    glColor3f(1, 6, 0);
    glBegin(GL_LINES);
    glVertex2d(3, -3);
    glVertex2d(-3, 3);

    glVertex2d(0, 0);
    glVertex2d(3, 3);

    glEnd();
}

void circle(float r1, float r2)
{
    int i = 0;
    float angle = 0.0;
    glColor3f(1, 0, 0);


    glBegin(GL_POLYGON);

    for(i = 0; i <= 500; i++)
    {
        angle = (360 * i) / 500;
        glVertex2d(r1*cos(angle), r2*sin(angle));

    }

    glEnd();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    carbody();
    glClear(GL_COLOR_BUFFER_BIT);

    cx += 0.00001;
    if(cx >=13.5)
        cx = -13.5;
    glPushMatrix();
    glTranslated(cx, 0, 0);
    glPushMatrix();
    glScaled(0.5, 0.5, 1);
    carbody();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-2, -0.7, 0);
    glScaled(0.5, 0.5, 1);
    circle(1, 1);
    glPopMatrix();
    glPopMatrix();

    glPushMatrix();
    glTranslated(2, -0.7, 0);
    glScaled(0.5, 0.5, 1);
    circle(1, 1);
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-2, -0.7, 0);
    glScaled(0.11,0.11,1);
    lines();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();

    glPushMatrix();
    glTranslated(2, -0.7, 0);
    glScaled(0.11,0.11,1);
    lines();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();


    glutPostRedisplay();
    //rectangle();
    glFlush();
}



int main (int argc,char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize (800, 800);
    //glutInitWindowSize (1000, 1000);
    glutInitWindowPosition (50, -20);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);

    glutCreateWindow("GLUT Shapes");

    init();
    glutDisplayFunc(display);
    //glutKeyboardFunc(my_keyboard);

    glutMainLoop();
    return 0;   /* ANSI C requires main to return int. */
}
