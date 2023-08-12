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
#include<math.h>//sin cos egula use korbo tai niyechi
#include<stdio.h>

//background color
void init()
{
    glClearColor(0,0,0,0);//black color korbo background tai sob value 0 r=0,g=0,b=0,a=0
    glOrtho(-10,10,-5,+5,-5,+5);//left=-10,right=10,botto=-5,up=5,near=-5,far=5.....axis er value bujhay
}
//ki ki object akbo shetar jonno
void points()
{
    glBegin(GL_POINTS);//points niyechi jeno onekgula poin draw korte pari ekta chaile point use korbo
    glVertex2d(5.0,-3.0);//X AXIS ,Y AXIS
    glVertex2d(5.0,3.0);
    glVertex2d(-5.0,3.0);
    glVertex2d(-5.0,-3.0);
    glEnd();
}
void lines()
{
    glBegin(GL_LINES);
    glVertex2d(7,-1);//2D NIYE KAJ KORCHI TAI 2d
    glVertex2d(0,-1);

    glVertex2d(0,-1);
    glVertex2d(0,1);

    glVertex2d(0,1);
    glVertex2d(-7,1);
    glEnd();

}
void triangle()
{
    glPushMatrix();
    glScaled(0.5,0.5,1);
    glTranslated(-6,-3.5,0);//mulbindu theke kothay transfer korbo etay jog korbo tai z axis er value 0 nite pari
    glBegin(GL_LINE_LOOP);
    glVertex2d(4,0);
    glVertex2d(0,2);//X AXIS ,Y AXIS
    glVertex2d(0,0);
    glEnd();
    glPopMatrix();
}
void rectangle()
{
    //stack
    glPushMatrix();//read kore
    glScaled(0.5,0.5,1);//X,Y,Z kototuku choto korbo...z=1 nibo cause 0 dile object nai hoye jabe mul er jonno..z nai tai...kono kichu change korte na chaile oitar value always 1 hobe
    glBegin(GL_LINE_LOOP);//4ta hole quads
    glVertex2d(5,-3);
    glVertex2d(5,3);
    glVertex2d(-5,3);
    glVertex2d(-5,-3);
    glEnd();
    glPopMatrix();
}
void Polygon()
{
    glColor3f(0,1,1);
    glBegin(GL_POLYGON);
    glColor3f(0.67,0.84,0.90);
    glVertex2d(0,3);
    glColor3f(0,0.80,0.81);
    glVertex2d(-2,1);
    glColor3f(0.87,1,1);
    glVertex2d(-2,-1);
    glColor3f(0,0.80,0.81);
    glVertex2d(0,-3);
    glColor3f(0.67,0.84,0.90);
    glVertex2d(2,-1);
    glColor3f(0,0.80,0.81);
    glVertex2d(2,1);
    glEnd();

}
void circle(float r1,float r2)
{
    int i=0;
    float angle=0.0;
    glBegin(GL_POLYGON);
    glColor3f(0,0.80,0.81);
    for(i=0; i<=2000; i++)
    {
        angle =(360*i/100);
        glVertex2d(r1*cos(angle),r2*sin(angle));
    }
    glEnd();
}

void  bresenham()
{
    float x1=-7, y1=-7, x2 =7,y2=7,dx,dy,a,b,p;
    dx=(x2-x1);
    dy=(y2-y1);
    a= 2*dy;
    b= 2*dy-2*dx;
    p= a-dx;

    printf("dx:%f,dy:%f,a:%f,b:%f,p:%f\n",dx,dy,a,b,p);


        if(p>=0)
        {
            p = p+b;
             while(x1 <= x2)
    {
            x1=x1+0.1;
            y1= y1+0.1;
            glBegin(GL_POINTS);//points niyechi jeno onekgula point draw korte pari ekta chaile point use korbo
            glVertex2d(x1,y1);//X AXIS ,Y AXIS
            glEnd();
        }

    }
    else
    {


        p = p+a;
        while(y1 <= y2)
        {


            x1=x1+0.1;
            y1= y1;
            glBegin(GL_POINTS);//points niyechi jeno onekgula point draw korte pari ekta chaile point use korbo
            glVertex2d(x1,y1);//X AXIS ,Y AXIS
            glEnd();
        }



}
}
void dda()
{
    float x1=-7,y1 =-4,x2=7,y2=4,m,c,dx=0.5;   //duita point starting & end ,c=constant,choto value er variable dx
    m = (y2-y1) / (x2 -x1); //line er jonno ..m=0.57
    c = y1 -(m* x1);
    float change;
    printf("m:%f,c:%f\n",m,c);
    if(m<=1)
    {
        change= m*dx;
        while(x1 <= x2)
        {
            x1 =x1+dx;
            y1 =y1+change;
            glBegin(GL_POINTS);//points niyechi jeno onekgula point draw korte pari ekta chaile point use korbo
            glVertex2d(x1,y1);//X AXIS ,Y AXIS
            glEnd();
        }

    }
    else
    {
        change= m/dx;
        while(y1<=y2)
            y1=y1+dx;
        x1=x1+ (change);
        glBegin(GL_POINTS);//points niyechi jeno onekgula poin draw korte pari ekta chaile point use korbo
        glVertex2d(x1,y1);//X AXIS ,Y AXIS
        glEnd();

    }

}

void directLine()
{
    float x1=-7,y1 =-4,x2=7,y2=4,m,c;  //duita point starting & end ,c=constant
    m = (y2-y1) / (x2 -x1); //line er jonno ..m=0.57
    c = y1 -(m* x1);
    printf("m:%f,c:%f\n",m,c);

    if (m<=1)
    {
        while(x1<=x2) //start point thake end pont porjonto point gulor loop cholbe
        {
            x1 = x1 +0.1;
            y1 = (m*x1) +c;
            glBegin(GL_POINTS);//points niyechi jeno onekgula poin draw korte pari ekta chaile point use korbo
            glVertex2d(x1,y1);//X AXIS ,Y AXIS

            glEnd();
        }
    }
    else
    {
        while (y1<=y2)
        {
            y1 = y1+0.1;//x er value kom dhorle beshi point hobe jodi 1 dhori er cheye kom ashbe
            x1 =(y1- c) / m;
            glBegin(GL_POINTS);//points niyechi jeno onekgula poin draw korte pari ekta chaile point use korbo
            glVertex2d(x1,y1);//X AXIS ,Y AXIS
            glEnd();
        }
    }
}
void myDisplay()
{
    //display te color anar jonno enable korte hbe garbage clear korte hobe shetar jonno glClear function use korbo
    glClear(GL_COLOR_BUFFER_BIT);
    //points();
    // lines();
    //triangle();
    //rectangle();
    //Polygon();
    // circle(4,2);
    //dda();
    //directLine();
    bresenham();
    glFlush();//OBJECT TAKE VISUALIZE KORAR JONNO LIGHT ER JONNO
    //glutSwapBuffers(); //duita buffer use korle tara jeno ekta arekta sathe swap korte pari.dui dik theke jeno object dekha jay.buffer kichuta array er moto kaj kore
}
int main()
{
    //glutInit(&argc, argv);//parameter er kaj nai tai
    glutInitWindowSize(800,800);//window size output er
    glutInitWindowPosition(50,-20);//x exis=50,y exis=-20
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE) ;//

    glutCreateWindow("GLUT Shapes");//WINDOW TE KI CREATE KORTE CHAI
    init();
    glutDisplayFunc(myDisplay);//upore display er jonno j function call korechi ta dite hobe .myDisplay charaw any name use korte parbo
    glutMainLoop();//arekta display ashe j sheta beshi time thakar jonno.main function take ekta oop er moddhe cholar jonno

    return 0;
}

