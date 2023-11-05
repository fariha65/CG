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
#ifdef APPLE
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
float angle=0;
void reShape(int width, int height){
    glViewport(0,0,width,height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    gluPerspective(45.0,(double)width/(double)height,1.0,200.0);
}

void display(){
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    glTranslated(0,-1.5,-20);
    glRotated(angle,1,1,0);
  //..........................................................boat
  //...........................................front

    glPushMatrix();
        glColor3f(0.85,0.64,0.125);
        glBegin(GL_POLYGON);
            glVertex3f(-3,0,3);
            glVertex3f(3,0,3);
            glVertex3f(5,3,3);
            glVertex3f(-5,3,3);
        glEnd();
    glPopMatrix();
    //....................................back
    glPushMatrix();
        glColor3f(0.85,0.64,0.125);
        glBegin(GL_POLYGON);
            glVertex3f(-3,0,-3);
            glVertex3f(3,0,-3);
            glVertex3f(5,3,-3);
            glVertex3f(-5,3,-3);
        glEnd();
    glPopMatrix();
    //............................left
    glPushMatrix();
        glColor3f(1,0,0);
        glBegin(GL_POLYGON);
            glVertex3f(-4,3,3);
            glVertex3f(-4,3,-3);
            glVertex3f(-3,0,-3);
            glVertex3f(-3,0,3);
        glEnd();
    glPopMatrix();
    //.................................right
     glPushMatrix();
        glColor3f(1,0,0);
        glBegin(GL_POLYGON);
            glVertex3f(3,0,3);
            glVertex3f(3,0,-3);
            glVertex3f(4,3,-3);
            glVertex3f(4,3,3);
        glEnd();
    glPopMatrix();
    //....................................down
     glPushMatrix();
        glColor3f(1,0,0);
        glBegin(GL_POLYGON);
            glVertex3f(-3,0,3);
            glVertex3f(3,0,3);
            glVertex3f(3,0,-3);
            glVertex3f(-3,0,-3);
        glEnd();
    glPopMatrix();
    //.....................................up
     glPushMatrix();
        glColor3f(1,0.713,0.756);
        glBegin(GL_POLYGON);
            glVertex3f(-3.62,2,3);
            glVertex3f(3.62,2,3);
            glVertex3f(3.62,2,-3);
            glVertex3f(-3.62,2,-3);
        glEnd();
    glPopMatrix();

//..................................chauni
//...............................front
 glPushMatrix();
        glColor3f(0.18,0.54,0.33);
        glBegin(GL_POLYGON);
            glVertex3f(-3,2,2.8);
            glVertex3f(3,2,2.8);
            glVertex3f(1,4,2.8);
            glVertex3f(-1,4,2.8);
        glEnd();
    glPopMatrix();
    //..............................back
    glPushMatrix();
        glColor3f(0.18,0.54,0.33);
        glBegin(GL_POLYGON);
            glVertex3f(-3,2,-2.8);
            glVertex3f(3,2,-2.8);
            glVertex3f(1,4,-2.8);
            glVertex3f(-1,4,-2.8);
        glEnd();
    glPopMatrix();
    //...................................up
    glPushMatrix();
        glColor3f(0.18,0.54,0.33);
        glBegin(GL_POLYGON);
            glVertex3f(-1,4,2.8);
            glVertex3f(1,4,2.8);
            glVertex3f(1,4,-2.8);
            glVertex3f(-1,4,-2.8);
        glEnd();
    glPopMatrix();
    //..........................left
    glPushMatrix();
        glColor3f(0.18,0.54,0.33);
        glBegin(GL_POLYGON);
            glVertex3f(-3,2,2.8);
            glVertex3f(-3,2,-2.8);
            glVertex3f(-1,4,-2.8);
            glVertex3f(-1,4,2.8);
        glEnd();
    glPopMatrix();
    //.............................right

glPushMatrix();
        glColor3f(0.18,0.54,0.33);
        glBegin(GL_POLYGON);
            glVertex3f(1,4,2.8);
            glVertex3f(1,4,-2.8);
            glVertex3f(3,2,-2.8);
            glVertex3f(3,2,2.8);
        glEnd();
    glPopMatrix();



    glutSwapBuffers();
}
void rotateShape(){
 angle=angle+0.05;
 glutPostRedisplay();
}
void mouse(int button,int state,  int x, int y){
    switch(button){
    case GLUT_RIGHT_BUTTON:
    if(state==GLUT_DOWN){
     glutIdleFunc(rotateShape);
    }
    break;
case GLUT_LEFT_BUTTON:
    if(state==GLUT_DOWN){
     glutIdleFunc(NULL);
     glutPostRedisplay();
    }
    break;
default:
    break;
    }

}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(1100,1100);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("3D Shapes");
    glEnable(GL_DEPTH_TEST);
    glutReshapeFunc(reShape);
    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutMainLoop();

    return 0;
}
