//rr

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
/*
#include<windows.h>
#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include<stdio.h>
#include<math.h>
#define PI 3.1416


void init()
{
    glClearColor(0.34f,0.34f,0.34f,0.0f);
    glOrtho(-10,+10,-10,+10,-10,+10);

}

void circle(float radiusX,float radiusY)
{
    int i=0;
    float angle= 0;

    glBegin(GL_LINE_LOOP);
    for(i=0;i<100;i++)
    {
        angle=2*PI*i/100;
        glVertex2d(radiusX*cos(angle),radiusY*sin(angle));
        //printf("Angle : %f , X-Axis : %f , Y-Axis : %f\n",angle,radiusX*cos(angle),radiusY*sin(angle));

    }
    glEnd();

}




void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);



             //.................................... bg
        glPushMatrix();
        glTranslated(0,0.4,0);
        glColor3f(0.0,0.0,0.0);
        glScaled(4,1.8,1);

        glBegin(GL_QUADS);

        glVertex2d(3,2);
        glVertex2d(-3,2);
        glVertex2d(-3,-2);
        glVertex2d(3,-2);



        glEnd();
        glPopMatrix();
        //....................................bg end
        //..................................jebra cross start

        glPushMatrix();
        glTranslated(0,0,0);
        glColor3f(1,1,1);
        glScaled(0.5,0.3,1);

        glBegin(GL_QUADS);

        glVertex2d(3,1);
        glVertex2d(-3,1);
        glVertex2d(-3,-1);
        glVertex2d(3,-1);



        glEnd();
        glPopMatrix();


        glPushMatrix();
        glTranslated(0,1,0);
        glColor3f(1,1,1);
        glScaled(0.5,0.3,1);

        glBegin(GL_QUADS);

        glVertex2d(3,1);
        glVertex2d(-3,1);
        glVertex2d(-3,-1);
        glVertex2d(3,-1);



        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslated(0,2,0);
        glColor3f(1,1,1);
        glScaled(0.5,0.3,1);

        glBegin(GL_QUADS);

        glVertex2d(3,1);
        glVertex2d(-3,1);
        glVertex2d(-3,-1);
        glVertex2d(3,-1);



        glEnd();
        glPopMatrix();


        glPushMatrix();
        glTranslated(0,3,0);
        glColor3f(1,1,1);
        glScaled(0.5,0.3,1);

        glBegin(GL_QUADS);

        glVertex2d(3,1);
        glVertex2d(-3,1);
        glVertex2d(-3,-1);
        glVertex2d(3,-1);



        glEnd();
        glPopMatrix();
        //.....................................border

         glPushMatrix();
        glTranslated(0,3.9,0);
        glColor3f(1,1,1);
        glScaled(4,0.1,1);

        glBegin(GL_QUADS);

        glVertex2d(3,1);
        glVertex2d(-3,1);
        glVertex2d(-3,-1);
        glVertex2d(3,-1);



        glEnd();
        glPopMatrix();
        //............................................down border
         glPushMatrix();
        glTranslated(0,-3.2,0);
        glColor3f(1,1,1);
        glScaled(4,0.1,1);

        glBegin(GL_QUADS);

        glVertex2d(3,1);
        glVertex2d(-3,1);
        glVertex2d(-3,-1);
        glVertex2d(3,-1);



        glEnd();
        glPopMatrix();


//..................................................end


        glPushMatrix();
        glTranslated(0,-1,0);
        glColor3f(1,1,1);
        glScaled(0.5,0.3,1);

        glBegin(GL_QUADS);

        glVertex2d(3,1);
        glVertex2d(-3,1);
        glVertex2d(-3,-1);
        glVertex2d(3,-1);



        glEnd();
        glPopMatrix();
        glPushMatrix();
        glTranslated(0,-2,0);
        glColor3f(1,1,1);
        glScaled(0.5,0.3,1);

        glBegin(GL_QUADS);

        glVertex2d(3,1);
        glVertex2d(-3,1);
        glVertex2d(-3,-1);
        glVertex2d(3,-1);



        glEnd();
        glPopMatrix();
        //................................
        glPushMatrix();
        glTranslated(3,0,0);
        glColor3f(1,1,1);
        glScaled(0.3,0.3,1);

        glBegin(GL_QUADS);

        glVertex2d(3,1);
        glVertex2d(-3,1);
        glVertex2d(-3,-1);
        glVertex2d(3,-1);



        glEnd();
        glPopMatrix();
        //..................... line with cercale
        glPushMatrix();
        glTranslated(6,0,0);
        glColor3f(1,1,1);
        glScaled(0.4,0.3,1);

        glBegin(GL_QUADS);

        glVertex2d(3,1);
        glVertex2d(-3,1);
        glVertex2d(-3,-1);
        glVertex2d(3,-1);



        glEnd();
        glPopMatrix();
        //......................
        glPushMatrix();
        glTranslated(8.9,0,0);
        glColor3f(1,1,1);
        glScaled(0.3,0.3,1);

        glBegin(GL_QUADS);

        glVertex2d(3,1);
        glVertex2d(-3,1);
        glVertex2d(-3,-1);
        glVertex2d(3,-1);



        glEnd();
        glPopMatrix();

        //..............................leftside line
          glPushMatrix();
        glTranslated(-3,0,0);
        glColor3f(1,1,1);
        glScaled(0.3,0.3,1);

        glBegin(GL_QUADS);

        glVertex2d(3,1);
        glVertex2d(-3,1);
        glVertex2d(-3,-1);
        glVertex2d(3,-1);



        glEnd();
        glPopMatrix();
        //..................... line with cercale
        glPushMatrix();
        glTranslated(-6,0,0);
        glColor3f(1,1,1);
        glScaled(0.4,0.3,1);

        glBegin(GL_QUADS);

        glVertex2d(3,1);
        glVertex2d(-3,1);
        glVertex2d(-3,-1);
        glVertex2d(3,-1);



        glEnd();
        glPopMatrix();
        //......................
        glPushMatrix();
        glTranslated(-8.9,0,0);
        glColor3f(1,1,1);
        glScaled(0.3,0.3,1);

        glBegin(GL_QUADS);

        glVertex2d(3,1);
        glVertex2d(-3,1);
        glVertex2d(-3,-1);
        glVertex2d(3,-1);



        glEnd();
        glPopMatrix();
        //........................................circle


 glPushMatrix();
        glTranslated(-6,0,0);
        circle(1.2,2);
        glPopMatrix();
        glEnd();

glPushMatrix();
        glTranslated(6,0,0);
        circle(1.2,2);
        glPopMatrix();
        glEnd();






    glFlush();
    //glutSwapBuffers();

}






int main()
{

    glutInitWindowSize(1100,700);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);

    glutCreateWindow("after mid");

    init();
    glutDisplayFunc(myDisplay);

    glutMainLoop();

    return 0;
}
*/




//house
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
/*
#include<windows.h>
#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>

void init()
{
    glClearColor(0.0f,0.0f,0.0f,0.0f);
    glOrtho(-5,+5,-10,+10,-5,+5);

}

void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);

        glPushMatrix();
        glTranslated(0,7,0);
        glBegin(GL_POLYGON);
        //ghor er uporer part


        glVertex2d(1,0);
        glVertex2d(1,-1);
        glVertex2d(-1,-1);
        glVertex2d(-1,0);

        glEnd();
        glPopMatrix();


        //ghor er 2ndpart

        glPushMatrix();
        glTranslated(0,6,0);
        glBegin(GL_POLYGON);


        glColor3f(0.22,0.38,0.80);
        glVertex2d(1,0);
        glColor3f(0.6,0.19,0.80);
        glVertex2d(1,-3);
        glColor3f(0.6,0.19,0.80);
        glVertex2d(-1,-3);
        glColor3f(0.6,0.19,0.80);
        glVertex2d(-1,0);

        glEnd();
        glPopMatrix();

         glPushMatrix();
        glTranslated(0,4,0);
        glBegin(GL_POLYGON);
        //ghor er 3rd part

        glColor3f(0.74,0.74,0.74);
        glVertex2d(1,0);
        glVertex2d(1,-1);
        glVertex2d(-1,-1);
        glVertex2d(-1,0);

        glEnd();
        glPopMatrix();

        //ghor er 4thpart

        glPushMatrix();
        glTranslated(0,3,0);
        glBegin(GL_POLYGON);


        glColor3f(0.22,0.38,0.80);
        glVertex2d(1,0);
        glColor3f(0.6,0.19,0.80);
        glVertex2d(1,-3);
        glColor3f(0.6,0.19,0.80);
        glVertex2d(-1,-3);
        glColor3f(0.6,0.19,0.80);
        glVertex2d(-1,0);

        glEnd();
        glPopMatrix();


        //ghor er janala

        glPushMatrix();
        glTranslated(-0.5,2,0);
        glBegin(GL_POLYGON);

        glColor3f(1,1,1);
        glVertex2d(0.1,0.2);
        //glColor3f(0.93,0.22,0.54);
        glVertex2d(-0.1,0.2);
        //glColor3f(1,0.75,0.14);
        glVertex2d(-0.1,-0.2);
        //glColor3f(0.18,0.54,0.38);
        glVertex2d(0.1,-0.2);


        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslated(0.5,2,0);
        glBegin(GL_POLYGON);

        //ghor er janala

        glColor3f(1,1,1);
        glVertex2d(0.1,0.2);
        glVertex2d(-0.1,0.2);
        glVertex2d(-0.1,-0.2);
        glVertex2d(0.1,-0.2);


        glEnd();
        glPopMatrix();


        //ghor er dorja

        glPushMatrix();
        glTranslated(0,1,0);
        glBegin(GL_POLYGON);

        glColor3f(1,1,1);
        glVertex2d(0.2,0.85);

        glVertex2d(-0.2,0.85);
        glColor3f(1,0.75,0.14);
        glVertex2d(-0.2,-0.85);

        glVertex2d(0.2,-0.85);




        glEnd();

         glPopMatrix();

         glPushMatrix();
        glTranslated(0,0.5,0);
        glBegin(GL_POLYGON);
        //ghor er 3rd part

        glColor3f(0.74,0.74,0.74);
        glVertex2d(1,0);
        glVertex2d(1,-1);
        glVertex2d(-1,-1);
        glVertex2d(-1,0);

        glEnd();
        glPopMatrix();

         //ghor er 2ndpart

        glPushMatrix();
        glTranslated(0,0.01,0);
        glBegin(GL_POLYGON);


        glColor3f(0.22,0.38,0.80);
        glVertex2d(1,0);
        glColor3f(0.6,0.19,0.80);
        glVertex2d(1,-3);
        glColor3f(0.6,0.19,0.80);
        glVertex2d(-1,-3);
        glColor3f(0.6,0.19,0.80);
        glVertex2d(-1,0);

        glEnd();
        glPopMatrix();


         //ghor er janala

        glPushMatrix();
        glTranslated(-0.50,-1,0);
        glBegin(GL_POLYGON);

        glColor3f(1,1,1);
        glVertex2d(0.1,0.2);

        glVertex2d(-0.1,0.2);

        glVertex2d(-0.1,-0.2);

        glVertex2d(0.1,-0.2);


        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslated(0.50,-1,0);
        glBegin(GL_POLYGON);

        //ghor er janala

        glColor3f(1,1,1);
        glVertex2d(0.1,0.2);
        glVertex2d(-0.1,0.2);
        glVertex2d(-0.1,-0.2);
        glVertex2d(0.1,-0.2);


        glEnd();
        glPopMatrix();


       //ghor er dorja

        glPushMatrix();
        glTranslated(0.0,-2,0);
        glBegin(GL_POLYGON);

        glColor3f(1,1,1);
        glVertex2d(0.2,0.85);

        glVertex2d(-0.2,0.85);
        glColor3f(1,0.75,0.14);
        glVertex2d(-0.2,-0.85);

        glVertex2d(0.2,-0.85);




        glEnd();


        glPopMatrix();

         glPushMatrix();
        glTranslated(0.0,-2.85,0);
        glBegin(GL_POLYGON);
        //ghor er 3rd part

        glColor3f(0.74,0.74,0.74);
        glVertex2d(1,0);
        glVertex2d(1,-1);
        glVertex2d(-1,-1);
        glVertex2d(-1,0);

        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslated(0,-3.55,0);
        glBegin(GL_POLYGON);


        glColor3f(0.22,0.38,0.80);
        glVertex2d(1,0);
        glColor3f(0.6,0.19,0.80);
        glVertex2d(1,-3);
        glColor3f(0.6,0.19,0.80);
        glVertex2d(-1,-3);
        glColor3f(0.6,0.19,0.80);
        glVertex2d(-1,0);

        glEnd();


        glPopMatrix();

        glPushMatrix();
        glTranslated(0.0,-5.70,0);
        glBegin(GL_POLYGON);

        glColor3f(1,1,1);
        glVertex2d(0.4,0.85);

        glVertex2d(-0.4,0.85);
        glColor3f(1,0.75,0.14);
        glVertex2d(-0.4,-0.85);

        glVertex2d(0.4,-0.85);




        glEnd();




glFlush();

}


int main()
{

    glutInitWindowSize(1200,800);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);

    glutCreateWindow("First Lab");

    init();
    glutDisplayFunc(myDisplay);
    glutMainLoop();

    return 0;
}*/
