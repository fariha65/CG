
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
    glOrtho (-30,+30,-30,+30,-5,+5);//depend
}


void roadside1()
{

    glBegin(GL_POLYGON);
    glColor3f(0,0.54,0);
    glVertex2d(30,16);
    glVertex2d(30,30);
     glVertex2d(-30,30);
     glVertex2d(-30,16);



    glEnd();

}
void roadside1_border()
{

    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2d(30,15);
    glVertex2d(30,16);
     glVertex2d(-30,16);
     glVertex2d(-30,15);



    glEnd();

}

void roadside2()
{

    glBegin(GL_POLYGON);
    glColor3f(0,0.54,0);
    glVertex2d(30,-23);
    glVertex2d(30,-30);
     glVertex2d(-30,-30);
     glVertex2d(-30,-23);



    glEnd();

}
//..

void roadside2_border()
{

    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2d(30,-22);
    glVertex2d(30,-23);
     glVertex2d(-30,-23);
     glVertex2d(-30,-22);



    glEnd();

}


void road()
{
    glColor3f(0.41,0.41,0.41);
    glBegin(GL_POLYGON);

    glVertex2d(30,15);
    glVertex2d(-30,15);
    glVertex2d(-30,-22);
    glVertex2d(30,-22);



    glEnd();

}
//........left side

void lines1()
{
    glColor3f(1,1,1);
    glBegin (GL_POLYGON);
    glVertex2d (30,-2);
    glVertex2d (4,-2);
    glVertex2d (4,-3);
    glVertex2d (30,-3);

    glEnd ();
}



void lines2()
{
    glColor3f(1,1,1);
    glBegin (GL_POLYGON);
    glVertex2d (-30,-2);
    glVertex2d (-6,-2);
    glVertex2d (-6,-3);
    glVertex2d (-30,-3);

    glEnd ();
}

void lines_up1()
{
    glColor3f(1,1,1);
    glBegin (GL_POLYGON);
    glVertex2d (27,9);
    glVertex2d (23,9);
    glVertex2d (23,8);
    glVertex2d (27,8);

    glEnd ();
}

void lines_up2()
{
    glColor3f(1,1,1);
    glBegin (GL_POLYGON);
    glVertex2d (16,9);
    glVertex2d (12,9);
    glVertex2d (12,8);
    glVertex2d (16,8);

    glEnd ();
}


void lines_up3()
{
    glColor3f(1,1,1);
    glBegin (GL_POLYGON);
    glVertex2d (-27,9);
    glVertex2d (-23,9);
    glVertex2d (-23,8);
    glVertex2d (-27,8);

    glEnd ();
}

void lines_up4()
{
    glColor3f(1,1,1);
    glBegin (GL_POLYGON);
    glVertex2d (-16,9);
    glVertex2d (-12,9);
    glVertex2d (-12,8);
    glVertex2d (-16,8);

    glEnd ();
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

void car1()
{
glColor3f(1,0,1);
    glBegin (GL_POLYGON);
    glVertex2d (11,8);
    glVertex2d (11,10);
    glVertex2d (8,10);
    glVertex2d (8,8);
     glVertex2d (6,8);
     glVertex2d (6,4);
    glVertex2d (13,4);
    glVertex2d (13,8);



    glEnd ();
}

//............right side

void lines_down1()
{
    glColor3f(1,1,1);
    glBegin (GL_POLYGON);
    glVertex2d (27,-9);
    glVertex2d (23,-9);
    glVertex2d (23,-8);
    glVertex2d (27,-8);

    glEnd ();
}

void lines_down2()
{
    glColor3f(1,1,1);
    glBegin (GL_POLYGON);
    glVertex2d (16,-9);
    glVertex2d (12,-9);
    glVertex2d (12,-8);
    glVertex2d (16,-8);

    glEnd ();
}

void lines_down3()
{
    glColor3f(1,1,1);
    glBegin (GL_POLYGON);
    glVertex2d (-27,-9);
    glVertex2d (-23,-9);
    glVertex2d (-23,-8);
    glVertex2d (-27,-8);

    glEnd ();
}

void lines_down4()
{
    glColor3f(1,1,1);
    glBegin (GL_POLYGON);
    glVertex2d (-16,-9);
    glVertex2d (-12,-9);
    glVertex2d (-12,-8);
    glVertex2d (-16,-8);

    glEnd ();
}




void myDisplay ()
{
    glClear (GL_COLOR_BUFFER_BIT);




roadside1();
roadside1_border();
roadside2();
roadside2_border();
road();
lines1();
lines2();
 lines_up1();
  lines_up2();
   lines_up3();
    lines_up4();
    lines_down1();
    lines_down2();
    lines_down3();
    lines_down4();
    car1();







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






