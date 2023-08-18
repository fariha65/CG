/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */
#include<windows.h>
#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
#include <math.h>
#include<stdio.h>

float cx =0;

void init ()
{
    glClearColor (0,0,0,0);
    glOrtho (-10,+10,-10,+10,-5,+5);//depend
}

void points ()
{
    glBegin (GL_POINTS);

    glVertex2d (5.0,-3.0);
    glVertex2d (5.0,3.0);
    glVertex2d (-5.0,3.0);
    glVertex2d (-5.0,-3.0);

    glEnd ();
}

void lines ()
{
    glBegin (GL_LINES);
    glVertex2d (7,-1);
    glVertex2d (0,-1);

    glVertex2d (0,-1);
    glVertex2d (0,1);

    glVertex2d (0,1);
    glVertex2d (-7,1);

    glEnd ();

}
//TRIANGLE COLOR
void triangle ()
{
    glPushMatrix();
    glScaled(0.5,0.5,1);
    glTranslated(-6,-3.5,0);
    glColor3f(0.85,0.43,0.83);
    glBegin (GL_LINE_LOOP);
    glVertex2d (4,0);

    glVertex2d (0,2);

    glVertex2d (0,0);

    glEnd ();
    glPushMatrix();

}
void gltriangle()
{
    glBegin (GL_TRIANGLES);
    glVertex2d (0,1);

    glVertex2d (-5,-3);

    glVertex2d (5,-3);
    glEnd();

}


//RECTANGLE COLOR
void rectangle ()
{
    //STACK
    //glPushMatrix();//READ KORE
    // glScaled(0.5,0.5,1);//OBJ choto kore . eta choto rakhte 0-1 er moddhy
    // glColor3f(0.85,0.43,0.83);
    //glBegin(GL_LINE_LOOP);
    glBegin (GL_QUADS);
    glVertex2d (5,  3);

    glVertex2d (5, -3);

    glVertex2d (-5, -3);

    glVertex2d (-5, 3);


    glEnd();

    //glPopMatrix();

}
void glrectangle ()
{
    //STACK
    glPushMatrix();//READ KORE
    glScaled(0.5,0.5,1);//OBJ choto kore . eta choto rakhte 0-1 er moddhy
    glColor3f(0.85,0.43,0.83);
    glBegin(GL_LINE_LOOP);
    // glBegin (GL_QUADS);
    glVertex2d (5,  3);

    glVertex2d (5, -3);

    glVertex2d (-5, -3);

    glVertex2d (-5, 3);


    glEnd();

    glPopMatrix();

}
void polygon()
{
    //POLYGON COLOR
    glColor3f(0.39 ,0.58,0.92);//purotar colour chng hbe
    glBegin(GL_POLYGON);
    glColor3f(0.39,0.58,0.92);//single vertex er color chng
    glVertex2d (0,  3);
    glColor3f(0.85,0.43,0.83);
    glVertex2d (-2, 1);
    glColor3f(0.39,0.58,0.92);
    glVertex2d (-2, -1);
    glColor3f(1.0,0.05,0.05);
    glVertex2d (0, -3);
    glColor3f(0.39,0.58,0.92);
    glVertex2d (2,  -1);
    glColor3f(0.85,0.43,0.83);

    glVertex2d (2, 1);


    glEnd();
}
void circle(float r1,float r2)//float 1 ta diye circle r 2 ta parameter diye oval,elips
{
    int i=0;
    float angle =0.0;
    glColor3f(0.54,0.29,0.22);
    // glScaled(0.5,-0.9,1);
    //glTranslated(2,3,1);
    glBegin (GL_POLYGON);
    for(i=0; i<=10000; i++)
    {
        angle =(360*i)/100;
        glVertex2d(r1*cos(angle),r2*sin(angle));//x=r1cos y=r2 sin
    }



    glEnd ();

}
void carBody()
{
    glColor3f(0.94,0.50,0.50);
    glBegin(GL_POLYGON);
    glVertex2d(4,1);
    glVertex2d(7,1);
    glVertex2d(7,-1);
    glVertex2d(-7,-1);
    glVertex2d(-7,1);
    glVertex2d(-4,1);
    glVertex2d(-4,3);
    glVertex2d(4,3);
    glEnd();
}

void myDisplay ()
{
    glClear (GL_COLOR_BUFFER_BIT);

    cx +=0.1;
    if(cx>=13.5)
        cx=-13.5;
    glPushMatrix();
    glTranslated(cx,0,0);
    glPushMatrix();
    glScaled(0.5,0.5,1);
    carBody();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-2,-0.7,0);
    glScaled(0.5,0.5,1);
    circle(1,1);
    glPopMatrix();


    glPushMatrix();
    glTranslated(2,-0.7,0);
    glScaled(0.5,0.5,1);
    circle(1,1);
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
    glutPostRedisplay();


    glFlush ();
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
    glutMainLoop ();
    return 0;
}







