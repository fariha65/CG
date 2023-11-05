#include<windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include<math.h>
#include<stdio.h>
using namespace std;
float angle=0.0;


void init(){
    glClearColor(0, 0, 0, 0);
    glOrtho(-100, +100, -100, +100, -1, +2);
}
//take tow parametemer console console width, console height
//3by 3 matrix nie kaj korbo and reshape er modde. matrix mode 2 vabe use hoy
//1) gl projection-console er parameter chamnge korte and gl mode
//view- object er drawing e use korte hole
/*
new matrix niw kaj korte hole idntity matrix nie kaj korte hoy
matrix mode changle korle identtity nie akj korbo
*/
 void reshape(int w, int h){
     glMatrixMode(GL_PROJECTION);
     glLoadIdentity();//gl load identity- load a identity matrix
     gluPerspective(45.0,(double)w/(double)h ,1.0 ,200.0);/*yaxis
theke angle,object dekte chaile objet ki rokom hobe,widh heigth er
aspect ratio kemon hobe,object z axis er kase ashle object kedelte
parbo kina*/

 }

void myDisplay(){
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);//object ke draw korte  hole
    glLoadIdentity();
    glTranslated(0,0,-20);
    glRotated(angle,1,1,0);
//front
     glPushMatrix();
         glColor3f(1,0,0);
         glBegin(GL_QUADS);
            glVertex3d(3,3,3);
            glVertex3d(-3,3,3);
            glVertex3d(-3,-3,3);
            glVertex3d(3,-3,3);
         glEnd();
     glPopMatrix();

//Back
    glPushMatrix();
         glColor3f(0,1,0);
         glBegin(GL_QUADS);
            glVertex3d(3,3,-3);
            glVertex3d(-3,3,-3);
            glVertex3d(-3,-3,-3);
            glVertex3d(3,-3,-3);
         glEnd();
     glPopMatrix();

 //Left
  glPushMatrix();
         glColor3f(0,1,1);
         glBegin(GL_QUADS);
            glVertex3d(-3,3,3);
            glVertex3d(-3,-3,3);
            glVertex3d(-3,-3,-3);
            glVertex3d(-3,3,-3);
         glEnd();
     glPopMatrix();

 //Right
  glPushMatrix();
         glColor3f(1,1,0);
         glBegin(GL_QUADS);
            glVertex3d(3,3,3);
            glVertex3d(3,-3,3);
            glVertex3d(3,-3,-3);
            glVertex3d(3,3,-3);
         glEnd();
     glPopMatrix();

 //Top
  glPushMatrix();
         glColor3f(0,0,1);
         glBegin(GL_QUADS);
            glVertex3d(3,3,-3);
            glVertex3d(3,3,3);
            glVertex3d(-3,3,3);
            glVertex3d(-3,3,-3);
         glEnd();
     glPopMatrix();

  //Bottom
  glPushMatrix();
         glColor3f(1,1,1);
         glBegin(GL_QUADS);
            glVertex3d(-3,-3,-3);
            glVertex3d(3,-3,-3);
            glVertex3d(3,-3,3);
            glVertex3d(-3,-3,3);
         glEnd();
     glPopMatrix();

    glutSwapBuffers();

}
void rotateShape(){
    angle+=0.1;
    glutPostRedisplay();

}
void mouse(int button, int state, int x, int y){//state holo mouse
//chare disi naki dhore raksi,
  switch(button){
  case GLUT_LEFT_BUTTON:
      if(state==GLUT_DOWN){
            glutIdleFunc(rotateShape);

      }
      if( state == GLUT_UP){
        glutIdleFunc(NULL);
      }
      break;

  case GLUT_RIGHT_BUTTON:
        if(state==GLUT_DOWN){
                glutIdleFunc(NULL);

      }
      break;

  default:
      break;


  }

}




int main()
{

    glutInitWindowSize(800, 800);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE| GLUT_DEPTH);//double
//3d and depth for z axis
    glutCreateWindow("3D");
    glEnable(GL_DEPTH_TEST);//For enable depth
    glutReshapeFunc(reshape);//Program define func. we declare a new
//function reshape
    glutDisplayFunc(myDisplay);
    glutMouseFunc(mouse);
    glutMainLoop();
    return 0;
}
