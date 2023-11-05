
#include<windows.h>
#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
#include <math.h>
#include<stdio.h>


float cx =0, cy=0, angle=0;

void init ()
{
    glClearColor (0,0,0,0);
    glOrtho (-10,+10,-10,+10,-5,+5);//depend
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
    glColor3f(1,0,1);
    glBegin (GL_LINES);
    glVertex2d (2,2);
    glVertex2d (-2,-2);
    glVertex2d (2,-2);
    glVertex2d (-2,2);

    glEnd ();
}




void myDisplay ()
{
    glClear (GL_COLOR_BUFFER_BIT);
    // angle=angle+5;
    // cx +=0.01;




    glPushMatrix();
    glTranslated(cx,cy,0);

    glScaled(0.26,0.21,1);
    glRotated(angle,0,0,1);
    lines();
    glPushMatrix();
    glTranslated(2,2,0);
    glScaled(0.5,0.5,0);
    circle(1,1);
    glPopMatrix();


    glPushMatrix();
    glTranslated(-2,-2,0);
    glScaled(0.5,0.5,0);
    circle(1,1);
    glPopMatrix();


    glPushMatrix();
    glTranslated(-2,2,0);
    glScaled(0.5,0.5,0);
    circle(1,1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(2,-2,0);
    glScaled(0.5,0.5,0);
    circle(1,1);
    glPopMatrix();

    glPopMatrix();



    glutPostRedisplay();



    glFlush ();
}
void rotateC()
{
    angle=angle-5;
   cx=cx+0.0001;

    glutPostRedisplay();
}

void normalKey(unsigned char key,int x,int y)
{

    switch(key)
    {
    case 'a':
        glutIdleFunc(rotateC);
        break;
    case 'b':
        glutIdleFunc(NULL);
        break;
    }
}


void Forword()
{
    cx+=0.01;
    glutPostRedisplay();
}


void Backword()
{
    cx-=0.01;
    glutPostRedisplay();
}



void moveup()
{
    cy+=0.01;
    glutPostRedisplay();
}


void movedown()
{
    cy-=0.01;
    glutPostRedisplay();
}
void specialkey(int key,int x,int y)
{
    switch(key)
    {
    case GLUT_KEY_RIGHT:
        glutIdleFunc(Forword);
        break;


    case GLUT_KEY_LEFT:
        glutIdleFunc(Backword);
        break;


    case GLUT_KEY_UP:
        glutIdleFunc(moveup);
        break;


    case GLUT_KEY_DOWN:
        glutIdleFunc(movedown);
        break;

    }

}


int main ()
{
    int width =glutGet(GLUT_SCREEN_WIDTH);
    int hight =glutGet(GLUT_SCREEN_HEIGHT);
    glutInitWindowSize(width,hight);
    glutInitWindowPosition(0,0);
    glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);

    //glutInit(&argc, argv);

    glutCreateWindow ("GLUT Shapes");

    init ();
    glutDisplayFunc (myDisplay);
     glutKeyboardFunc(normalKey);
    glutSpecialFunc(specialkey);

    glutMainLoop ();
    return 0;
}






