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


void points()
{
    //shuru er jonno
    glBegin(GL_POINTS);
//x exis ,y exis
    glVertex2d(5.0,-3.0);
    glVertex2d(5.0,3.0);
    glVertex2d(-5.0,3.0);
    glVertex2d(-5.0,-3.0);
//end func
    glEnd();
}
void lines()
{
    glBegin(GL_LINES);
    glVertex2d(7,-1);
    glVertex2d(0,-1);

    glVertex2d(0,-1);
    glVertex2d(0,1);

    glVertex2d(0,1);
    glVertex2d(-7,1);
    glEnd();

}
void triangle(){
    glBegin(GL_LINE_LOOP);
    glVertex2d(0,1);
    glVertex2d(-5,-3);
    glVertex2d(5,-3);

 glEnd();
}


void gltriangle()
{
    glBegin (GL_TRIANGLES);
    glVertex2d (0,1);

    glVertex2d (-5,-3);

    glVertex2d (5,-3);
    glEnd();

}


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
void Rectangle(){
     glBegin(GL_LINE_LOOP);
    glVertex2d(4,2);
    glVertex2d(4,-2);
    glVertex2d(-4,-2);
    glVertex2d(-4,2);


 glEnd();
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



    cx +=0.01;
    if(cx>=13.5)
        cx=-13.5;

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
    glutMainLoop ();


    return 0;
}
