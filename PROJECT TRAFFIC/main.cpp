#include<windows.h>
#ifdef APPLE
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
//midline
void lines1()
{
    glColor3f(1,1,1);
    glBegin (GL_POLYGON);
    glVertex2d (30,0);
    glVertex2d (6,0);
    glVertex2d (6,-1);
    glVertex2d (30,-1);
    glEnd();

}



void lines2()
{
    glColor3f(1,1,1);
    glBegin (GL_POLYGON);
    glVertex2d (-30,0);
    glVertex2d (-9,0);
    glVertex2d (-9,-1);
    glVertex2d (-30,-1);

    glEnd ();

}


void lines_st1()
{
    glColor3f(1,1,1);
    glBegin (GL_POLYGON);
    glVertex2d (-1.9,15);
    glVertex2d (-1.7,15);
    glVertex2d (-1.7,-22);
    glVertex2d (-1.9,-22);

    glEnd ();

}

//left x(-,+)axis line

void boundary_limit1()
{
    glColor3f(0.93,0.93,0);
    glBegin (GL_POLYGON);
    glVertex2d (-3,13);
    glVertex2d (-9,13);
    glVertex2d (-9,11);
    glVertex2d (-3,11);

    glEnd ();

}

void boundary_limit2()
{
    glColor3f(0.93,0.93,0);
    glBegin (GL_POLYGON);
    glVertex2d (-3,10);
    glVertex2d (-9,10);
    glVertex2d (-9,8);
    glVertex2d (-3,8);

    glEnd ();

}


void boundary_limit3()
{
    glColor3f(0.93,0.93,0);
    glBegin (GL_POLYGON);
    glVertex2d (-3,7);
    glVertex2d (-9,7);
    glVertex2d (-9,5);
    glVertex2d (-3,5);

    glEnd ();

}

void boundary_limit4()
{
    glColor3f(0.93,0.93,0);
    glBegin (GL_POLYGON);
    glVertex2d (-3,4);
    glVertex2d (-9,4);
    glVertex2d (-9,2);
    glVertex2d (-3,2);

    glEnd ();

}



//right boundary

void boundary_limit5()
{
    glColor3f(0.93,0.93,0);
    glBegin (GL_POLYGON);
    glVertex2d (0,13);
    glVertex2d (6,13);
    glVertex2d (6,11);
    glVertex2d (0,11);

    glEnd ();

}

void boundary_limit6()
{
    glColor3f(0.93,0.93,0);
    glBegin (GL_POLYGON);
    glVertex2d (0,10);
    glVertex2d (6,10);
    glVertex2d (6,8);
    glVertex2d (0,8);

    glEnd ();

}


void boundary_limit7()
{
    glColor3f(0.93,0.93,0);
    glBegin (GL_POLYGON);
    glVertex2d (0,7);
    glVertex2d (6,7);
    glVertex2d (6,5);
    glVertex2d (0,5);

    glEnd ();

}

void boundary_limit8()
{
    glColor3f(0.93,0.93,0);
    glBegin (GL_POLYGON);
    glVertex2d (0,4);
    glVertex2d (6,4);
    glVertex2d (6,2);
    glVertex2d (0,2);

    glEnd ();

}

//right stright line
void lines_st2()
{
    glColor3f(1,1,1);
    glBegin (GL_POLYGON);
    glVertex2d (-1.5,15);
    glVertex2d (-1.3,15);
    glVertex2d (-1.3,-22);
    glVertex2d (-1.5,-22);

    glEnd ();

}
//left side
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
void car2()
{
    glColor3f(1,0.27,0);
    glBegin (GL_POLYGON);
    glVertex2d (-8,-6);
    glVertex2d (-6,-6);
    glVertex2d (-6,-10);
    glVertex2d (-13,-10);
    glVertex2d (-13,-6);
    glVertex2d (-11,-6);
    glVertex2d (-11,-4);
    glVertex2d (-8,-4);



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
void lines()
{
    glColor3f(0.12,0.12,0.12);
    glBegin (GL_LINES);
    glVertex2d (3,-2);
    glVertex2d (-3,2);

    glVertex2d (0,0);
    glVertex2d (3,3);




    glEnd ();
}

void box()
{
    glColor3f(0,1,1);
    glBegin (GL_POLYGON);
    // glVertex2d (1,1);
    glVertex2d (2,3);
    glVertex2d (-1,3);
    glVertex2d (-2,1);
    glVertex2d (-2,-2);
    glVertex2d (1,-2);

    glVertex2d (2,1);



    glEnd ();
}
//traffic lamp
void t_line1()
{
    glColor3f(0,0,0);
    glBegin (GL_POLYGON);
    glVertex2d (4.2,-23);
    glVertex2d (3.5,-23);
    glVertex2d (3.5,-4);
    glVertex2d (4.2,-4);




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
    lines_st1();
    lines_st2();
    boundary_limit1();
    boundary_limit2();
    boundary_limit3();
    boundary_limit4();
    boundary_limit5();
    boundary_limit6();
    boundary_limit7();
    boundary_limit8();
//traffic signal base box
   glPushMatrix();
    glTranslated(4,-24,0);
    glScaled(0.8,0.5,1);
    box();
    glPopMatrix();

    t_line1();

//car structures
    glPushMatrix();
    glTranslated(cx,0,0);
    glPushMatrix();
    glScaled(1.30,1.30,1);
    car1();
    glPopMatrix();

    glPushMatrix();
    glTranslated(10,5,0);
    glRotated(angle,0,0,-1);
    glScaled(0.9,0.9,1);
    circle(1,1);
    glPushMatrix();
    glScaled(0.25,0.25,1);
    lines();
    glPopMatrix();

    glPopMatrix();
    glPushMatrix();
    glTranslated(15,5,0);
    glRotated(angle,0,0,-1);
    glScaled(0.9,0.9,1);
    circle(1,1);
    glPushMatrix();
    glScaled(0.25,0.25,1);
    lines();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();

    glPushMatrix();
    glTranslated(cx,0,0);
    glPushMatrix();
    glScaled(1.30,1.30,1);
    car2();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-15,-13,0);
    glRotated(angle,0,0,-1);
    glScaled(0.9,0.9,1);
    circle(1,1);
    glPushMatrix();
    glScaled(0.25,0.25,1);
    lines();
    glPopMatrix();

    glPopMatrix();
    glPushMatrix();
    glTranslated(-10,-13,0);
    glRotated(angle,0,0,-1);
    glScaled(0.9,0.9,1);
    circle(1,1);
    glPushMatrix();
    glScaled(0.25,0.25,1);
    lines();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();







    glutPostRedisplay();



    glFlush ();
}
/*void rotateC()
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
*/


void Forword()
{
    angle=angle+3;
    cx+=0.1;
    if(cx>=50)
        cx=-50;
    glutPostRedisplay();
}


void Backword()
{
    angle = angle -3;
    cx -= 0.1;
    if(cx<=-50)
        cx=50;
    glutPostRedisplay();
}



void moveup()
{

    glutPostRedisplay();
}


void movedown()
{

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
//    glutKeyboardFunc(normalKey);
    glutSpecialFunc(specialkey);

    glutMainLoop ();
    return 0;
}
