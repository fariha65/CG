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

float cx =0, cy=0,angle=0;

void init ()
{
    glClearColor (0,0,0,0);
    glOrtho (-10,+10,-10,+10,-5,+5);//depend
}



void lines ()
{
    glBegin (GL_LINES);
    glVertex2d (2,2);



    glVertex2d (-2,-2);





    glVertex2d (-2,2);


    glVertex2d (2,-2);

    glEnd ();

}






void circle(float r1,float r2)//float 1 ta diye circle r 2 ta parameter diye oval,elips
{
    int i=0;
    float angle =0.0;
    glColor3f(1,1,1);
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






void myDisplay ()
{
    glClear (GL_COLOR_BUFFER_BIT);


    glTranslated(cx,cy,0);

    glScaled(0.8,0.8,1);
    glRotated(angle,0,0,1);


    glPushMatrix();
    glScaled(0.8,0.8,1);

    glRotated(angle,0,0,1);

    glTranslated(2,2,0);

    circle(1,1);
    glPopMatrix();



    glPushMatrix();

    glScaled(0.8,0.8,1);
    glRotated(angle,0,0,1);
    glTranslated(-2,2,0);
    circle(1,1);
    glPopMatrix();


    glPushMatrix();
    glScaled(0.8,0.8,1);
    glRotated(angle,0,0,1);
    glTranslated(-2,-2,0);


    circle(1,1);
    glPopMatrix();


    glPushMatrix();
    glScaled(0.8,0.8,1);
    glRotated(angle,0,0,1);
    glTranslated(2,-2,0);

    circle(1,1);
    glPopMatrix();


    glEnd();

    lines();




    glFlush ();
}

void rotateC()
{
    angle=angle+0.00005;
    cx=cx+0.0001;
    glutPostRedisplay();
}



/*void MoveForword()
{


    cx +=0.01;

    glutPostRedisplay();
}
void moveBackword()
{


    cx -= 0.01;

    glutPostRedisplay();
}


void Stop()
{
    NULL ;
    glutPostRedisplay();

}

void moveUp()
{
    cy+=0.01;
    glutPostRedisplay();
}


void moveDown()
{
    cy-=0.01;
    glutPostRedisplay();
}
*/
void normalKey(unsigned char key,int x, int y)
{
    switch(key)
    {
    case 'a':
        glutIdleFunc(rotateC);
        break;

    case 'b':
        glutIdleFunc(NULL);
        glutPostRedisplay();

        break;

    default:
        break;

    }
}


/*void specialKey(int key,int x, int y)
{
    switch(key)
    {
    case GLUT_KEY_RIGHT:
        glutIdleFunc(MoveForword);*/
/*  angle = angle +5;
cx +=0.1;
if(cx>=13.5)
  cx=-13.5;
  glutPostRedisplay();*/
/*break;

case GLUT_KEY_LEFT:
glutIdleFunc(moveBackword);
break;

case GLUT_KEY_DOWN:
glutIdleFunc(moveDown);
break;

case GLUT_KEY_UP:
glutIdleFunc(moveUp);
break;


default:
break;

}

}*/
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
    // glutSpecialFunc(specialKey);
    glutKeyboardFunc(normalKey);
    glutMainLoop ();
    return 0;
}







