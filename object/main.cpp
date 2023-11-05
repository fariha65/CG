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
    glColor3f(0.77,0.88,1);
    glVertex2d(30,20);
    glVertex2d(30,30);
    glVertex2d(-30,30);
    glVertex2d(-30,20);




    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0,0.54,0);
    glVertex2d(30,16);
    glVertex2d(30,20);
    glVertex2d(-30,20);
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

void house()
{
    glColor3f(0.45,0.1,0.79);
    glBegin(GL_POLYGON);

    //glColor3f(1,0.41,0.70);

    glVertex2d(0,7);
    glVertex2d(-5,4);
    glVertex2d(-4,4);
    glVertex2d(-4,-2);
    glVertex2d(4,-2);

    // glColor3f(1,1,0);
    glVertex2d(4,4);
    glVertex2d(5,4);

    // glVertex2d(3,3);
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
    glVertex2d (-7.9,15);
    glVertex2d (-7.7,15);
    glVertex2d (-7.7,-22);
    glVertex2d (-7.9,-22);

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
    glVertex2d (4,13);
    glVertex2d (-6,13);
    glVertex2d (-6,10);
    glVertex2d (4,10);

    glEnd ();

}

void boundary_limit6()
{
    glColor3f(0.93,0.93,0);
    glBegin (GL_POLYGON);
    glVertex2d (4,6);
    glVertex2d (-6,6);
    glVertex2d (-6,3);
    glVertex2d (4,3);

    glEnd ();

}


void boundary_limit7()
{
    glColor3f(0.93,0.93,0);
    glBegin (GL_POLYGON);
    glVertex2d (4,-1);
    glVertex2d (-6,-1);
    glVertex2d (-6,-4);
    glVertex2d (4,-4);

    glEnd ();

}

void boundary_limit8()
{
    glColor3f(0.93,0.93,0);
    glBegin (GL_POLYGON);
    glVertex2d (4,-8);
    glVertex2d (-6,-8);
    glVertex2d (-6,-11);
    glVertex2d (4,-11);

    glEnd ();

}

void boundary_limit9()
{
    glColor3f(0.93,0.93,0);
    glBegin (GL_POLYGON);
    glVertex2d (4,-15);
    glVertex2d (-6,-15);
    glVertex2d (-6,-18);
    glVertex2d (4,-18);

    glEnd ();

}

//right stright line
void lines_st2()
{
    glColor3f(1,1,1);
    glBegin (GL_POLYGON);
    glVertex2d (5.5,15);
    glVertex2d (5.3,15);
    glVertex2d (5.3,-22);
    glVertex2d (5.5,-22);

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
//traffic light stand box
void box()
{
    glColor3f(0,0,0);
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
    glVertex2d (-4.2,-23);
    glVertex2d (-3.5,-23);
    glVertex2d (-3.5,-4);
    glVertex2d (-4.2,-4);




    glEnd ();
}
//traffic light circle base
void light_base(float r1,float r2)
{
    int i=0;
    float angle =0.0;
    glColor3f(1,1,1);
    glBegin (GL_POINTS);
    for(i=0; i<=10000; i++)
    {
        angle =(360*i)/100;
        glVertex2d(r1*cos(angle),r2*sin(angle));
    }

    glEnd ();
}

//traffic light
void light(float r1,float r2)
{
    int i=0;
    float angle =0.0;
    //glColor3f(1,1,1);
    glBegin (GL_POLYGON);
    for(i=0; i<=10000; i++)
    {
        angle =(360*i)/100;
        glVertex2d(r1*cos(angle),r2*sin(angle));
    }

    glEnd ();
}

void redLight_left()
{
    glPushMatrix();
    glTranslated(-6.1,-3.8,0);
    glScaled(0.4,0.7,1);
    glColor3f(1,0,0);
    light (1,1);
    glPopMatrix();
}

void yellowLight_left()
{
    glPushMatrix();
    glTranslated(-6.1,-5.8,0);
    glScaled(0.4,0.7,1);
    glColor3f(1,1,0);
    light (1,1);
    glPopMatrix();
}

void greenLight_left()
{
    glPushMatrix();
    glTranslated(-6.1,-7.8,0);
    glScaled(0.4,0.7,1);
    glColor3f(0,1,0);
    light (1,1);
    glPopMatrix();
}



//traffic light structure
void lamp()
{



    glColor3f(0,0,0);
    glBegin (GL_POLYGON);
    glVertex2d (-2,4);
    glVertex2d (-3,5.5);
    glVertex2d (-5,5);
    glVertex2d (-5,-3);
    glVertex2d (-2,-5);
    glEnd ();


    glColor3f(0,0,0);
    glBegin (GL_POLYGON);
    glVertex2d (-1.5,3);
    glVertex2d (-5.5,3);
    glVertex2d (-5.5,3.5);
    glVertex2d (-1.5,3.5);

    glEnd ();

    glColor3f(0,0,0);
    glBegin (GL_POLYGON);
    glVertex2d (-1.5,3);
    glVertex2d (-5.5,3);
    glVertex2d (-5.5,3.5);
    glVertex2d (-1.5,3.5);

    glEnd ();

    glColor3f(0,0,0);
    glBegin (GL_POLYGON);
    glVertex2d (-1.5,1);
    glVertex2d (-5.5,1);
    glVertex2d (-5.5,1.5);
    glVertex2d (-1.5,1.5);

    glEnd ();

    glColor3f(0,0,0);
    glBegin (GL_POLYGON);
    glVertex2d (-1.5,-1);
    glVertex2d (-5.5,-1);
    glVertex2d (-5.5,-1.5);
    glVertex2d (-1.5,-1.5);

    glEnd ();



// 1st light
    glPushMatrix();
    glTranslated(-3.9,3.8,0);
    glScaled(0.4,0.7,1);
    light_base(1,1);
    glPopMatrix();
//2nd light
    glPushMatrix();
    glTranslated(-3.9,0.8,0);
    glScaled(0.4,0.7,1);
    light_base(1,1);
    glPopMatrix();
//3rd light
    glPushMatrix();
    glTranslated(-3.9,-1.8,0);
    glScaled(0.4,0.7,1);
    light_base(1,1);
    glPopMatrix();


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
    //lamp();
    //boundary_limit1();
    // boundary_limit2();
    // boundary_limit3();
    boundary_limit9();
    boundary_limit5();
    boundary_limit6();
    boundary_limit7();
    boundary_limit8();
//traffic signal base box  right


    glPushMatrix();
    glTranslated(-4,-24,0);
    glScaled(0.8,0.5,1);
    box();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-3,-6.5,0);
    glScaled(0.8,0.7,1);
    lamp();
    glPopMatrix();

    t_line1();

    //traffic signal base box  left
    glPushMatrix();
    glTranslated(3,16.5,0);
    glScaled(0.8,0.5,1);
    box();
    glPopMatrix();

    glPushMatrix();
    glTranslated(7.5,24.5,0);
    glScaled(0.8,0.7,1);
    lamp();
    glPopMatrix();



    glPushMatrix();
    glTranslated(6,30.5,0);
    glScaled(0.8,0.6,1);
    t_line1();
    glPopMatrix();



    ///traffic light red
    /*glPushMatrix();
    glTranslated(-6.1,-3.8,0);
    glScaled(0.4,0.7,1);
     glColor3f(1,0,0);
    light (1,1);
    glPopMatrix();*/
    //redLight_left();
    yellowLight_left();
    greenLight_left();

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


//house
    glPushMatrix();
    glTranslated(-26,21,0);

    glScaled(0.7,0.7,1);
    house();
    glPopMatrix();






    glutPostRedisplay();



    glFlush ();
}



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




void normalKey(unsigned char key,int x,int y)
{

    switch(key)
    {
    case 'a':
        glutIdleFunc(redLight_left);
        break;
    case 'b':
        //glutIdleFunc(NULL);
        break;
    }
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
