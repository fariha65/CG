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


void init ()
{
    glClearColor (0,0,0,0);
    glOrtho (-5,+5,-10,+10,-1,+1);//depend
}

void points ()
{
    glBegin (GL_POINTS);

    glVertex2d (2,4);
    glVertex2d (-2,4);
    glVertex2d (2,-4);
    glVertex2d (-2,-4);

    glEnd ();
}

void lines ()
{
    glBegin (GL_LINES);
    glVertex2d (3,-5);
    glVertex2d (0,-2);

    glVertex2d (0,-2);
    glVertex2d (0,2);

    glVertex2d (0,2);
    glVertex2d (-4,2);

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
//RECTANGLE COLOR
void rectangle ()
{
    //STACK
    glPushMatrix();//READ KORE
 glScaled(0.5,0.5,1);//OBJ choto kore . eta choto rakhte 0-1 er moddhy
    glColor3f(0.85,0.43,0.83);
    glBegin(GL_LINE_LOOP);
   // glBegin (GL_QUADS);
    glVertex2d (5,  3);

    glVertex2d (5 , -3);

    glVertex2d (-5, -3);

    glVertex2d (-5, 3);


    glEnd();

       glPopMatrix();

}
void polygon()
{
    //POLYGON COLOR
//glColor3f(0.39,0.58,0.92);//purotar colour chng hbe
    glBegin(GL_POLYGON);
    glColor3f(0.39,0.58,0.92);//single vertex er color chng
    glVertex2d (0,  3);
    glColor3f(0.85,0.43,0.83);
    glVertex2d (-2 , 1);
    glColor3f(0.39,0.58,0.92);
    glVertex2d (-2, -1);
    glColor3f(1.0,0.05,0.05);
    glVertex2d (0, -3);
    glColor3f(0.39,0.58,0.92);
    glVertex2d (2,  -1);
    glColor3f(0.85,0.43,0.83);

    glVertex2d (2 , 1);


    glEnd();
}
void circle(float r1,float r2)//float 1 ta diye circle r 2 ta parameter diye oval,elips
{
    int i=0;
    float angle =0.0;
   glColor3f(0.85,0.43,0.83);
   glBegin (GL_POLYGON);
   for(i=0;i<=10000;i++){
angle =(360*i)/100;
glVertex2d(r1*cos(angle),r2*sin(angle));//x=r1cos y=r2 sin
   }



    glEnd ();

}

void myDisplay ()
{
    glClear (GL_COLOR_BUFFER_BIT);


 rectangle ();
     triangle();
    //lines();
    //points();
    //glutSwapBuffers();
    //polygon();
     //circle(2,6);

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






    /*glutReshapeFunc(resize);
    glutDisplayFunc(display);
    glutKeyboardFunc(key);
    glutIdleFunc(idle);

    glClearColor(1,1,1,1);
    glEnable(GL_CULL_FACE);
    glCullFace(GL_BACK);

    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);

    glEnable(GL_LIGHT0);
    glEnable(GL_NORMALIZE);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);

    glLightfv(GL_LIGHT0, GL_AMBIENT,  light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE,  light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    glMaterialfv(GL_FRONT, GL_AMBIENT,   mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE,   mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR,  mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);

    glutMainLoop();*/

    return 0;
}
