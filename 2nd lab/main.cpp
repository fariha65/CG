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

//background colour er jonno
void init()
{
    glClearColor(0, 0, 0, 0);//black color er jonno r=0,g=0,b=0,alpha er kaj nei tai a=0
    //program defined func
    glOrtho(-10, +10,-5,+5,-5,+5);     //GL LEFT=10 , right =+10 , botom =-5 ,top=+5, near =-5, far=5
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
void triangle()
{
    glBegin(GL_LINE_LOOP);
    glVertex2d(0,5);
    glVertex2d(5,-2);
    glVertex2d(-5,-2);

    glEnd();
}
void Rectangle()
{
    glBegin(GL_LINE_LOOP);
    glVertex2d(1,-1);
    glVertex2d(1,1);
    glVertex2d(-1,1);
    glVertex2d(-1,-1);


    glEnd();
}

//KI KI OBJ THAKBE  DRAW Korar jonno
void myDisplay()
{
//garbage colour clerar kre colour near jonno enable korte
    glClear(GL_COLOR_BUFFER_BIT);
//points draw
//points();
//lines();
triangle();
    //Rectangle();
//BACKGROUND display show er jonno 2d te
    glFlush();
//3d er jonno
//glutSwapBuffers();//duita dik thake obj dekhtre pari .buffer kichuta array er moto
}


int main()
{
    //glutInit(&argc, argv);//perameter er kaj nei tai
    glutInitWindowSize(800,800);//window size output er
    glutInitWindowPosition(50,-20);//x exix=50,y =-20or chng
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);//colour er jonno 1st perameter =display colour mood, 2nd= GLUT_DOUBLE 3d or2d er jonno(GLUT_SINGLE),3D OBJ HLE DEPT HOCCHE  GLUT_DEPTH

    glutCreateWindow("GLUT Shapes");//WINDOW nam ki create krte chacche
    init();
    //program define func

    glutDisplayFunc(myDisplay);//perameter hishebe function name use kre
    //display esthai er jonno
    glutMainLoop();//main func k bar bar cl krbe


    return 0;
}
