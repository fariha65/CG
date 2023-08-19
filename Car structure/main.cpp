#include<windows.h>
#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
#include <math.h>


void init ()
{
    glClearColor (0,0,0,0);
    glOrtho (-10,+10,-10,+10,-5,+5);//depend
}

void carStructure()
{
    glColor3f(1,0.41,0.70);
    glBegin(GL_POLYGON);

    glColor3f(1,0.41,0.70);

    glVertex2d(3,1);
    glVertex2d(9,1);
    glVertex2d(9,-2);
    glVertex2d(-9,-2);
    glVertex2d(-9,1);

    glColor3f(1,1,0);
    glVertex2d(-3,1);
    glVertex2d(-3,3);
    glVertex2d(3,3);
    glEnd();
}

void circle(float r1,float r2)
{
    int i=0;
    float angle =0.0;
    glColor3f(1,1,1);
    glBegin (GL_POLYGON);
    for(i=0; i<=10000; i++)
    {
        angle =(360*i)/100;
        glVertex2d(r1*cos(angle),r2*sin(angle));
    }



    glEnd ();
}

    void lines()
    {
        glColor3f(0,0,0);
        glBegin (GL_LINES);
        glVertex2d (3,-2);
        glVertex2d (-3,2);

         glVertex2d (0,0);
        glVertex2d (3,3);




        glEnd ();
    }




void myDisplay ()
{
    glClear (GL_COLOR_BUFFER_BIT);



    glPushMatrix();
    glTranslated(1,1,0);
    glScaled(0.6,0.6,1);
    carStructure();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-2.5,-0.5,0);
    glScaled(1,1,1);
    circle(1,1);
    glPopMatrix();


    glPushMatrix();
    glTranslated(3.5,-0.5,0);
    glScaled(1,1,1);
    circle(1,1);
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();

    glPushMatrix();
    glTranslated(3.5,-0.5,0);
    glScaled(0.26,0.21,1);
    lines();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();

     glPushMatrix();
    glTranslated(-2.5,-0.5,0);
    glScaled(0.26,0.21,1);
    lines();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();




    glFlush ();
}
int main ()
{
    //glutInit(&argc, argv);
    glutInitWindowSize (800,800);
    glutInitWindowPosition (10,10);
    glutInitDisplayMode (GLUT_RGB | GLUT_SINGLE );

    glutCreateWindow ("Class 2");

    init ();
    glutDisplayFunc (myDisplay);
    glutMainLoop ();

    glFlush ();


    return 0;
}
