#include<windows.h>
#ifdef APPLE
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
#include <math.h>
#include<stdio.h>

float stop1 = 0.0;
bool movingUp = false;//CAR2 STOP
float stop2 = 0.0;
bool movingDown = false;

float cx =0,dx =0, cy=0, angle=0,angle1=0;
float r = 0, g = 0, b = 0;
float p=0,q=0,k=0;
float g1=0,g2=0,g3=0;
float r1=0,g0=0,b1=0;
float p1=0,q1=0,k1=0;
float g4=0,g5=0,g6=0;


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

    glBegin(GL_POLYGON);
    glColor3f(0.80,0.79,0.79);
    glVertex2d(30,16);
    glVertex2d(30,13);
    glVertex2d(-30,13);
    glVertex2d(-30,16);




    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.698,0.133,0.133);
    glVertex2d(30,13);
    glVertex2d(30,11);
    glVertex2d(-30,11);
    glVertex2d(-30,13);




    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2d(-29,12.1);
    glVertex2d(-30.5,12.1);
    glVertex2d(-30.5,12.98);
    glVertex2d(-29,12.98);




    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2d(-26,12.1);
    glVertex2d(-27.5,12.1);
    glVertex2d(-27.5,12.98);
    glVertex2d(-26,12.98);




    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2d(-23,12.1);
    glVertex2d(-24.5,12.1);
    glVertex2d(-24.5,12.98);
    glVertex2d(-23,12.98);




    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2d(-20,12.1);
    glVertex2d(-21.5,12.1);
    glVertex2d(-21.5,12.98);
    glVertex2d(-20,12.98);




    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2d(-17,12.1);
    glVertex2d(-18.5,12.1);
    glVertex2d(-18.5,12.98);
    glVertex2d(-17,12.98);




    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2d(-14,12.1);
    glVertex2d(-15.5,12.1);
    glVertex2d(-15.5,12.98);
    glVertex2d(-14,12.98);




    glEnd();

      glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2d(-11,12.1);
    glVertex2d(-12.5,12.1);
    glVertex2d(-12.5,12.98);
    glVertex2d(-11,12.98);




    glEnd();


      glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2d(-8,12.1);
    glVertex2d(-9.5,12.1);
    glVertex2d(-9.5,12.98);
    glVertex2d(-8,12.98);




    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2d(-5,12.1);
    glVertex2d(-6.5,12.1);
    glVertex2d(-6.5,12.98);
    glVertex2d(-5,12.98);




    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2d(-2,12.1);
    glVertex2d(-3.5,12.1);
    glVertex2d(-3.5,12.98);
    glVertex2d(-2,12.98);




    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2d(0,12.1);
    glVertex2d(1.5,12.1);
    glVertex2d(1.5,12.98);
    glVertex2d(0,12.98);




    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2d(3,12.1);
    glVertex2d(4.5,12.1);
    glVertex2d(4.5,12.98);
    glVertex2d(3,12.98);




    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2d(6,12.1);
    glVertex2d(7.5,12.1);
    glVertex2d(7.5,12.98);
    glVertex2d(6,12.98);




    glEnd();


glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2d(9,12.1);
    glVertex2d(10.5,12.1);
    glVertex2d(10.5,12.98);
    glVertex2d(9,12.98);




    glEnd();

glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2d(12,12.1);
    glVertex2d(13.5,12.1);
    glVertex2d(13.5,12.98);
    glVertex2d(12,12.98);




    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2d(15,12.1);
    glVertex2d(16.5,12.1);
    glVertex2d(16.5,12.98);
    glVertex2d(15,12.98);




    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2d(18,12.1);
    glVertex2d(19.5,12.1);
    glVertex2d(19.5,12.98);
    glVertex2d(18,12.98);




    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2d(21,12.1);
    glVertex2d(22.5,12.1);
    glVertex2d(22.5,12.98);
    glVertex2d(21,12.98);




    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2d(24,12.1);
    glVertex2d(25.5,12.1);
    glVertex2d(25.5,12.98);
    glVertex2d(24,12.98);




    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2d(27,12.1);
    glVertex2d(28.5,12.1);
    glVertex2d(28.5,12.98);
    glVertex2d(27,12.98);




    glEnd();



glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2d(27,12.1);
    glVertex2d(28.5,12.1);
    glVertex2d(28.5,12.98);
    glVertex2d(27,12.98);




    glEnd();
    //lane line

     glBegin(GL_POLYGON);
    glColor3f(0.51,0.54,0.54);
    glVertex2d(-25,16);
    glVertex2d(-25.1,16);
    glVertex2d(-25.1,13);
    glVertex2d(-25,13);



    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.51,0.54,0.54);
    glVertex2d(-20,16);
    glVertex2d(-20.1,16);
    glVertex2d(-20.1,13);
    glVertex2d(-20,13);



    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.51,0.54,0.54);
    glVertex2d(-15,16);
    glVertex2d(-15.1,16);
    glVertex2d(-15.1,13);
    glVertex2d(-15,13);



    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.51,0.54,0.54);
    glVertex2d(-10,16);
    glVertex2d(-10.1,16);
    glVertex2d(-10.1,13);
    glVertex2d(-10,13);



    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(0.51,0.54,0.54);
    glVertex2d(-5,16);
    glVertex2d(-5.1,16);
    glVertex2d(-5.1,13);
    glVertex2d(-5,13);



    glEnd();


     glBegin(GL_POLYGON);
    glColor3f(0.51,0.54,0.54);
    glVertex2d(0,16);
    glVertex2d(0.1,16);
    glVertex2d(0.1,13);
    glVertex2d(0,13);



    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.51,0.54,0.54);
    glVertex2d(5,16);
    glVertex2d(5.1,16);
    glVertex2d(5.1,13);
    glVertex2d(5,13);



    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.51,0.54,0.54);
    glVertex2d(10,16);
    glVertex2d(10.1,16);
    glVertex2d(10.1,13);
    glVertex2d(10,13);



    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.51,0.54,0.54);
    glVertex2d(15,16);
    glVertex2d(15.1,16);
    glVertex2d(15.1,13);
    glVertex2d(15,13);



    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.51,0.54,0.54);
    glVertex2d(20,16);
    glVertex2d(20.1,16);
    glVertex2d(20.1,13);
    glVertex2d(20,13);



    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.51,0.54,0.54);
    glVertex2d(25,16);
    glVertex2d(25.1,16);
    glVertex2d(25.1,13);
    glVertex2d(25,13);



    glEnd();




}



void roadside1_border()
{

    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2d(30,10);
    glVertex2d(30,12);
    glVertex2d(-30,12);
    glVertex2d(-30,10);



    glEnd();

}


void house1()
{

    glBegin(GL_POLYGON);
     glColor3f(0.309,0.580,0.80);

    glVertex2d(5,4);
    glVertex2d(5,5);
    glVertex2d(-5,5);
    glVertex2d(-5,4);
    // glVertex2d(3,3);
    glEnd();

    glBegin(GL_POLYGON);

     glColor3f(0.309,0.580,0.80);
    glVertex2d(4.5,4);
    glVertex2d(-4.5,4);
    glVertex2d(-4.5,-1);
    glVertex2d(4.5,-1);
    // glVertex2d(3,3);
    glEnd();
}
/*void tree()
{
glBegin(GL_POLYGON);
    glColor3f(0,0.39,0);

    glVertex2d(4,0);
    glVertex2d(2,6);
    glVertex2d(-5,0);
   // glVertex2d(-5,4);
    // glVertex2d(3,3);
    glEnd();




}*/
void house2()
{

    glBegin(GL_POLYGON);
     glColor3f(0.309,0.580,0.80);
    glVertex2d(8,4.5);
    glVertex2d(6,8.58);
    glVertex2d(-6,8.58);
    glVertex2d(-8,4.5);
    // glVertex2d(3,3);
    glEnd();

    glBegin(GL_POLYGON);

      glColor3f(0.309,0.580,0.80);
    glVertex2d(8,4);
    glVertex2d(8,4.5);
    glVertex2d(-8,4.5);
    glVertex2d(-8,4);
    // glVertex2d(3,3);
    glEnd();

    glBegin(GL_POLYGON);

      glColor3f(0.309,0.580,0.80);
    glVertex2d(7,4);
    glVertex2d(-7,4);
    glVertex2d(-7,-3);
    glVertex2d(7,-3);
    // glVertex2d(3,3);
    glEnd();

    glBegin(GL_POLYGON);

      glColor3f(0.309,0.580,0.80);
    glVertex2d(7.5,-4);
    glVertex2d(7.5,-3);
    glVertex2d(-7.5,-3);
    glVertex2d(-7.5,-4);
    // glVertex2d(3,3);
    glEnd();



}

void house3()
{
    glBegin(GL_POLYGON);
    glColor3f(0.309,0.580,0.80);

    glVertex2d(4,4);
    glVertex2d(-4,4);
    glVertex2d(-4,-2);
    glVertex2d(4,-2);
    // glVertex2d(3,3);
    glEnd();
}

void house4()
{
    glBegin(GL_POLYGON);
     glColor3f(0.309,0.580,0.80);
    glVertex2d(2,4);
    glVertex2d(0,6);
    glVertex2d(-2,4);
    glVertex2d(-2,-4);
     glVertex2d(2,-4);


    // glVertex2d(3,3);
    glEnd();
}

void en_line()
{


    glBegin(GL_POLYGON);
    glColor3f(0.54,0.35,0.168);
    glVertex2d(30,16.5);
    glVertex2d(30,17);
    glVertex2d(-30,17);
    glVertex2d(-30,16.5);

glEnd();

glBegin(GL_POLYGON);
     glColor3f(0.54,0.35,0.168);
    glVertex2d(30,20);
    glVertex2d(30,19.5);
    glVertex2d(-30,19.5);
    glVertex2d(-30,20);

glEnd();




}

void enclosure()
{
    glBegin(GL_POLYGON);
    glColor3f(0.80,0.52,0.24);
    glVertex2d(1.5,3);
    glVertex2d(1,5);
    glVertex2d(0.5,3);
    glVertex2d(0.5,-2);
    glVertex2d(1.5,-2);

    glEnd();


}

void bench()
{

    glBegin(GL_POLYGON);
    glColor3f(0,0,0);
    glVertex2d(2.5,7);
    glVertex2d(2,7);
    glVertex2d(2,-3);
    glVertex2d(2.5,-3.5);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0,0,0);
    glVertex2d(-2,7);
    glVertex2d(-2.5,7);
    glVertex2d(-2.5,-3.5);
    glVertex2d(-2,-3);

    glEnd();
///seat
    glBegin(GL_POLYGON);
    glColor3f(0.63,0.709,0.80);
    glVertex2d(5,5);
    glVertex2d(5,6);
    glVertex2d(-5,6);
    glVertex2d(-5,5);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.63,0.709,0.80);
    glVertex2d(5,3.5);
    glVertex2d(5,4.5);
    glVertex2d(-5,4.5);
    glVertex2d(-5,3.5);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.63,0.709,0.80);
    glVertex2d(5,2);
    glVertex2d(5,3);
    glVertex2d(-5,3);
    glVertex2d(-5,2);

    glEnd();


glBegin(GL_POLYGON);
    glColor3f(0.63,0.709,0.80);
    glVertex2d(5.5,0.5);
    glVertex2d(5,1.5);
    glVertex2d(-5,1.5);
    glVertex2d(-5.5,0.5);

    glEnd();

    glBegin(GL_POLYGON);
     glColor3f(0.63,0.709,0.80);
    glVertex2d(5.5,-1);
    glVertex2d(5.5,0.5);
    glVertex2d(-5.5,0.5);
    glVertex2d(-5.5,-1);

    glEnd();







}
void LampPost(){
    glColor3f(0.54,0.27,0.07);
    glBegin(GL_QUADS);
     glVertex2f(10.2, 20.0);
    glVertex2f(11.0, 20.0);
    glVertex2f(11.0, 40.0);
    glVertex2f(10.2, 40.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.96,0.87,0.70);
     glVertex2f(9.0, 40.0);
     glColor3f(1.0,0.72,0.05);
    glVertex2f(12.5, 40.0);
    glColor3f(0.96,0.87,0.70);
    glVertex2f(13.5, 48.0);
    glColor3f(1.0,0.72,0.05);
    glVertex2f(8.0, 48.0);
    glEnd();
    glColor3f(0.0,0.0,0.0);
    glLineWidth(0.5);
    glBegin(GL_LINE_LOOP);
     glVertex2f(9.0, 40.0);
    glVertex2f(12.5, 40.0);
    glVertex2f(13.5, 48.0);
    glVertex2f(8.0, 48.0);
    glEnd();
    glColor3f(0.80,0.52,0.24);
    glBegin(GL_TRIANGLES);
    glVertex2f(13.5, 48.0);
    glVertex2f(10.75, 52.0);
    glVertex2f(8.0, 48.0);
    glEnd();
    glColor3f(0.0,0.0,0.0);
    glLineWidth(0.5);
    glBegin(GL_LINE_LOOP);
    glVertex2f(13.5, 48.0);
    glVertex2f(10.75, 52.0);
    glVertex2f(8.0, 48.0);
    glEnd();
}
void shed()
{

    glBegin(GL_POLYGON);
    glColor3f(0.41,0.35,0.80);
    glVertex2d(7,7);
    glVertex2d(2,11);
    glVertex2d(-2,11);
    glVertex2d(-7,7);



    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.28,0.23,0.54);
    glVertex2d(7,7);
    glVertex2d(-7,7);
    glVertex2d(-7,7.3);
    glVertex2d(7,7.3);



    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(0,0,0);
    glVertex2d(5,7);
    glVertex2d(5.5,7);
    glVertex2d(5.5,0);
    glVertex2d(5,0);



    glEnd();


      glBegin(GL_POLYGON);
    glColor3f(0,0,0);
    glVertex2d(-5,7);
    glVertex2d(-5.5,7);
    glVertex2d(-5.5,0);
    glVertex2d(-5,0);



    glEnd();



}

/*void booth()
{

   glBegin(GL_POLYGON);
    glColor3f(1,0,0);
    glVertex2d(6,8);
    glVertex2d(-6,8);
    glVertex2d(-6,-4);
    glVertex2d(6,-4);



    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2d(4,6);
    glVertex2d(-4,6);
    glVertex2d(-4,-2);
    glVertex2d(4,-2);



    glEnd();
     glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2d(3,5);
    glVertex2d(-3,5);
    glVertex2d(-3,-1);
    glVertex2d(3,-1);



    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(1,0,0);
    glVertex2d(0.2,5);
    glVertex2d(0,5);
    glVertex2d(0,-1);
    glVertex2d(0.2,-1);



    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1,0,0);
    glVertex2d(3,3);
    glVertex2d(3,3.5);
    glVertex2d(-3,3.5);
    glVertex2d(-3,3);



    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1,0,0);
    glVertex2d(3,1);
    glVertex2d(3,1.5);
    glVertex2d(-3,1.5);
    glVertex2d(-3,1);



    glEnd();
}*/



void roadside2()
{

    glBegin(GL_POLYGON);
    glColor3f(0,0.54,0);
    glVertex2d(30,-23);
    glVertex2d(30,-30);
    glVertex2d(-30,-30);
    glVertex2d(-30,-23);



    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(0.80,0.79,0.79);
    glVertex2d(30,-23);
    glVertex2d(30,-16);
    glVertex2d(-30,-16);
    glVertex2d(-30,-23);



    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(0.51,0.54,0.54);
    glVertex2d(-25,-23);
    glVertex2d(-25.1,-23);
    glVertex2d(-25.1,-16);
    glVertex2d(-25,-16);



    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.51,0.54,0.54);
    glVertex2d(-20,-23);
    glVertex2d(-20.1,-23);
    glVertex2d(-20.1,-16);
    glVertex2d(-20,-16);



    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.51,0.54,0.54);
    glVertex2d(-15,-23);
    glVertex2d(-15.1,-23);
    glVertex2d(-15.1,-16);
    glVertex2d(-15,-16);



    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.51,0.54,0.54);
    glVertex2d(-10,-23);
    glVertex2d(-10.1,-23);
    glVertex2d(-10.1,-16);
    glVertex2d(-10,-16);



    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(0.51,0.54,0.54);
    glVertex2d(-5,-23);
    glVertex2d(-5.1,-23);
    glVertex2d(-5.1,-16);
    glVertex2d(-5,-16);



    glEnd();


     glBegin(GL_POLYGON);
    glColor3f(0.51,0.54,0.54);
    glVertex2d(0,-23);
    glVertex2d(0.1,-23);
    glVertex2d(0.1,-16);
    glVertex2d(0,-16);



    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.51,0.54,0.54);
    glVertex2d(5,-23);
    glVertex2d(5.1,-23);
    glVertex2d(5.1,-16);
    glVertex2d(5,-16);



    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.51,0.54,0.54);
    glVertex2d(10,-23);
    glVertex2d(10.1,-23);
    glVertex2d(10.1,-16);
    glVertex2d(10,-16);



    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.51,0.54,0.54);
    glVertex2d(15,-23);
    glVertex2d(15.1,-23);
    glVertex2d(15.1,-16);
    glVertex2d(15,-16);



    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.51,0.54,0.54);
    glVertex2d(20,-23);
    glVertex2d(20.1,-23);
    glVertex2d(20.1,-16);
    glVertex2d(20,-16);



    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.51,0.54,0.54);
    glVertex2d(25,-23);
    glVertex2d(25.1,-23);
    glVertex2d(25.1,-16);
    glVertex2d(25,-16);



    glEnd();




}


//..

void roadside2_border()
{

    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2d(30,-15);
    glVertex2d(30,-16);
    glVertex2d(-30,-16);
    glVertex2d(-30,-15);



    glEnd();

}


void road()
{
    glColor3f(0.41,0.41,0.41);
    glBegin(GL_POLYGON);

    glVertex2d(30,11);
    glVertex2d(-30,11);
    glVertex2d(-30,-15);
    glVertex2d(30,-15);



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
    glVertex2d (-7.9,12);
    glVertex2d (-7.7,12);
    glVertex2d (-7.7,-16);
    glVertex2d (-7.9,-16);

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
    glVertex2d (-6,11);
    glVertex2d (4,11);

    glEnd ();

}

void boundary_limit6()
{
    glColor3f(0.93,0.93,0);
    glBegin (GL_POLYGON);
    glVertex2d (4,9);
    glVertex2d (-6,9);
    glVertex2d (-6,7);
    glVertex2d (4,7);

    glEnd ();

}
void boundary_limit7()
{
    glColor3f(0.93,0.93,0);
    glBegin (GL_POLYGON);
    glVertex2d (4,5);
    glVertex2d (-6,5);
    glVertex2d (-6,3);
    glVertex2d (4,3);

    glEnd ();

}

void boundary_limit8()
{
    glColor3f(0.93,0.93,0);
    glBegin (GL_POLYGON);
    glVertex2d (4,1);
    glVertex2d (-6,1);
    glVertex2d (-6,-1);
    glVertex2d (4,-1);

    glEnd ();

}

void boundary_limit9()
{
    glColor3f(0.93,0.93,0);
    glBegin (GL_POLYGON);
    glVertex2d (4,-3);
    glVertex2d (-6,-3);
    glVertex2d (-6,-5);
    glVertex2d (4,-5);

    glEnd ();

}

void boundary_limit10()
{
    glColor3f(0.93,0.93,0);
    glBegin (GL_POLYGON);
    glVertex2d (4,-7);
    glVertex2d (-6,-7);
    glVertex2d (-6,-9);
    glVertex2d (4,-9);

    glEnd ();

}
void boundary_limit11()
{
    glColor3f(0.93,0.93,0);
    glBegin (GL_POLYGON);
    glVertex2d (4,-11);
    glVertex2d (-6,-11);
    glVertex2d (-6,-13);
    glVertex2d (4,-13);

    glEnd ();

}
void boundary_limit12()
{
    glColor3f(0.93,0.93,0);
    glBegin (GL_POLYGON);
    glVertex2d (4,-15);
    glVertex2d (-6,-15);
    glVertex2d (-6,-17);
    glVertex2d (4,-17);

    glEnd ();

}
void boundary_limit13()
{
    glColor3f(0.93,0.93,0);
    glBegin (GL_POLYGON);
    glVertex2d (4,-19);
    glVertex2d (-6,-19);
    glVertex2d (-6,-21);
    glVertex2d (4,-21);

    glEnd ();

}

//right stright line
void lines_st2()
{
    glColor3f(1,1,1);
    glBegin (GL_POLYGON);
    glVertex2d (5.5,12);
    glVertex2d (5.3,12);
    glVertex2d (5.3,-16);
    glVertex2d (5.5,-16);

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
    //glColor3f(1,1,1);
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
    glColor3f(1,0.75,0.14);
    glBegin (GL_POLYGON);

    glVertex2d (24,11);
    glVertex2d (22,14);
     glVertex2d (14,14);
     glVertex2d (12,11);
     glVertex2d (10,11);
    glVertex2d (10,6);
    glVertex2d (26,6);
     glVertex2d (26,11);

    glEnd ();
//car boarder
 glColor3f(0,0,0);
    glBegin (GL_POLYGON);

     glVertex2d (26.5,6);
    glVertex2d (9.5,6);
    glVertex2d (9.5,5);
     glVertex2d (26.5,5);

    glEnd ();
//window
    glColor3f(0.878,0.93,0.93);
    glBegin (GL_POLYGON);
    glVertex2d (18,13.5);
glVertex2d (14,13.5);
     glVertex2d (13,11);
     glVertex2d (18,11);



    glEnd ();

    //window2
    glColor3f(0.878,0.93,0.93);
    glBegin (GL_POLYGON);
    glVertex2d (22,13.5);
glVertex2d (19,13.5);
     glVertex2d (19,11);
     glVertex2d (23.5,11);



    glEnd ();

//line

glColor3f(0,0,0);
    glBegin (GL_LINES);
    glVertex2d (13.5,10);
glVertex2d (14.5,10);
     glVertex2d (22,10);
     glVertex2d (23,10);

glVertex2d (18.5,10);
     glVertex2d (18.5,7);

    glEnd ();




}
void car2()
{
    glColor3f(1,0,0);


   glBegin (GL_POLYGON);
    glVertex2d (-9,-6);
    glVertex2d (-11,-4);
    glVertex2d (-14,-4);
    glVertex2d (-16,-6);
    glVertex2d (-18,-6);
    glVertex2d (-18,-9);
    glVertex2d (-7,-9);
    glVertex2d (-7,-6);



    glEnd ();

    //window
    glColor3f(0.878,0.93,0.93);
    glBegin (GL_POLYGON);

 glVertex2d (-13,-4.3);
 glVertex2d (-14,-4.3);

glVertex2d (-15.9,-6);
 glVertex2d (-13,-6);
 glEnd();

  //window2
    glColor3f(0.878,0.93,0.93);
    glBegin (GL_POLYGON);

 glVertex2d (-11,-4.3);
 glVertex2d (-12.5,-4.3);

glVertex2d (-12.5,-6);
 glVertex2d (-9.3,-6);






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
    //glColor3f(0.12,0.12,0.12);
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

///traffic light left

void redLight_left()
{
    glPushMatrix();
    glTranslated(-6.1,-3.8,0);
    glScaled(0.4,0.7,1);
    glColor3f(r,g,b);
    light (1,1);
    glPopMatrix();

}

void yellowLight_left()
{
    glPushMatrix();
    glTranslated(-6.1,-5.8,0);
    glScaled(0.4,0.7,1);
    glColor3f(p,q,k);
    light (1,1);
    glPopMatrix();
}

void greenLight_left()
{
    glPushMatrix();
    glTranslated(-6.1,-7.8,0);
    glScaled(0.4,0.7,1);
    glColor3f(g1,g2,g3);
    light (1,1);
    glPopMatrix();
}

///traffic light right
void redLight_right()
{
    glPushMatrix();
    glTranslated(5.3,26.6,0);
    glScaled(0.4,0.6,1);
    glColor3f(r1,g0,b1);
    light (1,1);
    glPopMatrix();

}

void yellowLight_right()
{
    glPushMatrix();
    glTranslated(5.3,24.6,0);
    glScaled(0.4,0.7,1);
    glColor3f(p1,q1,k1);
    light (1,1);
    glPopMatrix();
}

void greenLight_right()
{
    glPushMatrix();
    glTranslated(5.3,22.6,0);
    glScaled(0.4,0.7,1);
    glColor3f(g4,g5,g6);
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


    /*
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
        glPopMatrix();*/


}

void telephoneBooth()  {

    //  telephone booth
     glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(7.0, 5.0);
    glVertex2f(7.0, 30.0);
    glVertex2f(28.0, 30.0);
    glVertex2f(28.0, 5.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    // the window
    glBegin(GL_QUADS);
    glVertex2f(10.0, 16.0);
    glVertex2f(10.0, 28.0);
    glVertex2f(25.0, 28.0);
    glVertex2f(25.0, 16.0);
    glEnd();


    glColor3f(1.0, 1.0, 1.0); //the door

    glBegin(GL_QUADS);
    glVertex2f(10.0, 7.0);
    glVertex2f(10.0, 17.0);
    glVertex2f(25.0, 17.0);
    glVertex2f(25.0, 7.0);
    glEnd();
    glColor3f(1.0, 0.0, 0.0);
    glLineWidth(3.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(10.0, 7.0);
    glVertex2f(10.0, 17.0);
    glVertex2f(25.0, 17.0);
    glVertex2f(25.0, 7.0);
    glEnd();
    glColor3f(1.0, 0.0, 0.0);
    glLineWidth(3.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(15.0, 7.0);
    glVertex2f(15.0, 17.0);
    glEnd();
    glColor3f(1.0, 0.0, 0.0);
    glLineWidth(3.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(20.0, 7.0);
    glVertex2f(20.0, 17.0);
    glEnd();
    glColor3f(1.0, 0.0, 0.0);
    glLineWidth(3.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(10.0, 10.0);
    glVertex2f(25.0, 10.0);
    glEnd();
    glColor3f(1.0, 0.0, 0.0);
    glLineWidth(3.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(10.0, 13.5);
    glVertex2f(25.0, 13.5);
    glEnd();
    // window border
    glColor3f(1.0, 0.0, 0.0);
    glLineWidth(3.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(10.0, 17.0);
    glVertex2f(10.0, 28.0);
    glVertex2f(25.0, 28.0);
    glVertex2f(25.0, 17.0);
    glEnd();
     glColor3f(1.0, 0.0, 0.0);
    glLineWidth(3.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(10.0, 19.5);
    glVertex2f(25.0, 19.5);
    glEnd();
    glColor3f(1.0, 0.0, 0.0);
    glLineWidth(3.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(10.0, 22.0);
    glVertex2f(25.0,22.0);
    glEnd();
    glColor3f(1.0, 0.0, 0.0);
    glLineWidth(3.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(10.0, 25.0);
    glVertex2f(25.0,25.0);
    glEnd();
    glColor3f(1.0, 0.0, 0.0);
    glLineWidth(3.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(15.0, 17.0);
    glVertex2f(15.0,28.0);
    glEnd();
     glColor3f(1.0, 0.0, 0.0);
    glLineWidth(3.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(20.0, 17.0);
    glVertex2f(20.0,28.0);
    glEnd();

    glColor3f(1.0, 0.0, 0.0); // the roof
    glBegin(GL_TRIANGLES);
    glVertex2f(5.0, 30.0);
    glVertex2f(30.0, 30.0);
    glVertex2f(17.5, 35.0);
    glEnd();
       // bottom box
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(5.0, 5.0);
    glVertex2f(30.0, 5.0);
    glVertex2f(30.0, 2.0);
    glVertex2f(5.0, 2.0);
    glEnd();




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
    //boundary_limit5();
    boundary_limit6();
    boundary_limit7();
    boundary_limit8();
    boundary_limit10();
    boundary_limit11();
    //boundary_limit12();
    //boundary_limit13();



///car structures
    glPushMatrix();
    glTranslated(cx,0,0);
    glPushMatrix();
    glScaled(0.7,0.9,1);
    car1();
    glPopMatrix();



    glPushMatrix();
    glTranslated(10,5,0);
    glRotated(angle,0,0,-1);
    glScaled(0.9,0.9,1);

    glColor3f(0,0,0);
    circle(1.5,1.5);
    glPushMatrix();
    glScaled(0.3,0.3,1);
     glColor3f(1,1,1);
    lines();
    glPopMatrix();

    glPopMatrix();
    glPushMatrix();
    glTranslated(15,5,0);
    glRotated(angle,0,0,-1);
    glScaled(0.9,0.9,1);
     glColor3f(0,0,0);
    circle(1.5,1.5);
    glPushMatrix();
    glScaled(0.3,0.3,1);
     glColor3f(1,1,1);
    lines();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
///car2
    glPushMatrix();
    glTranslated(dx,2,0);
    glPushMatrix();
    glScaled(1.2,1.3,1);
    car2();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-19,-12,0);
    glRotated(angle1,0,0,-1);
    glScaled(0.9,0.9,1);
    glColor3f(0,0,0);
    circle(1.5,1.5);
    glPushMatrix();
    glScaled(0.3,0.3,1);
    glColor3f(1,1,1);
    lines();
    glPopMatrix();

    glPopMatrix();
    glPushMatrix();
    glTranslated(-12,-12,0);
    glRotated(angle1,0,0,-1);
    glScaled(0.9,0.9,1);
    glColor3f(0,0,0);
    circle(1.5,1.5);
    glPushMatrix();
    glScaled(0.3,0.3,1);
    glColor3f(1,1,1);
    lines();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();




///house1
    glPushMatrix();
    glTranslated(-30.5,21,0);

    glScaled(0.9,1.5,1);
    house1();
    glPopMatrix();

//booth();
    ///house2
    glPushMatrix();
    glTranslated(-23.9,22,0);

    glScaled(0.35,0.5,1);
    house2();
    glPopMatrix();
///house3
glPushMatrix();
    glTranslated(-20,23,0);

    glScaled(0.35,1.5,1);
    house3();
    glPopMatrix();
///house4
glPushMatrix();
    glTranslated(-17.5,24,0);

    glScaled(0.5,1,1);
    house4();
    glPopMatrix();


    ///house5
    glPushMatrix();
    glTranslated(-16.9,22,0);

    glScaled(0.35,0.5,1);
    house2();
    glPopMatrix();
///house6
glPushMatrix();
    glTranslated(-12,23,0);

    glScaled(0.35,1.5,1);
    house3();
    glPopMatrix();
///house7
glPushMatrix();
    glTranslated(-9.5,24,0);

    glScaled(0.5,1,1);
    house4();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-20,23,0);

    glScaled(0.35,1.5,1);
    house3();
    glPopMatrix();
///house8
glPushMatrix();
    glTranslated(-9.8,24,0);

    glScaled(0.5,1,1);
    house4();
    glPopMatrix();


    ///house9
    glPushMatrix();
    glTranslated(-8,21,0);

    glScaled(0.2,0.3,1);
    house2();
    glPopMatrix();

    ///house10
    glPushMatrix();
    glTranslated(-6.9,22,0);

    glScaled(0.35,0.5,1);
    house2();
    glPopMatrix();
///house11
glPushMatrix();
    glTranslated(-3,20,0);

    glScaled(0.3,0.5,1);
    house3();
    glPopMatrix();
///house12
glPushMatrix();
    glTranslated(-1,24,0);

    glScaled(0.5,1,1);
    house4();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-1,23,0);

    glScaled(0.35,1.5,1);
    house3();
    glPopMatrix();
///house13
glPushMatrix();
    glTranslated(1,24,0);

    glScaled(0.5,1,1);
    house4();
    glPopMatrix();

    ///house14
    glPushMatrix();
    glTranslated(3.5,21,0);

    glScaled(0.9,0.8,1);
    house1();
    glPopMatrix();

    ///house15
    glPushMatrix();
    glTranslated(5,22,0);

    glScaled(0.35,0.5,1);
    house2();
    glPopMatrix();
///house16
glPushMatrix();
    glTranslated(7,23,0);

    glScaled(0.2,1.5,1);
    house3();
    glPopMatrix();
///house17
glPushMatrix();
    glTranslated(8.5,24,0);

    glScaled(0.5,1,1);
    house4();
    glPopMatrix();


    ///house18
    glPushMatrix();
    glTranslated(10,22,0);

    glScaled(0.35,0.5,1);
    house2();
    glPopMatrix();
///house19
glPushMatrix();
    glTranslated(12,23,0);

    glScaled(0.35,0.5,1);
    house3();
    glPopMatrix();
///house20
glPushMatrix();
    glTranslated(14,24,0);

    glScaled(0.5,1,1);
    house4();
    glPopMatrix();

    glPushMatrix();
    glTranslated(14,23,0);

    glScaled(0.35,1.5,1);
    house3();
    glPopMatrix();
///house21
glPushMatrix();
    glTranslated(16,24,0);

    glScaled(0.5,1,1);
    house4();
    glPopMatrix();


    ///house22
    glPushMatrix();
    glTranslated(18,21,0);

    glScaled(0.2,0.3,1);
    house2();
    glPopMatrix();

    ///house23
    glPushMatrix();
    glTranslated(20,22,0);

    glScaled(0.35,0.5,1);
    house2();
    glPopMatrix();
///house24
glPushMatrix();
    glTranslated(22,23,0);

    glScaled(0.35,1.5,1);
    house3();
    glPopMatrix();
///house25
glPushMatrix();
    glTranslated(24,24,0);

    glScaled(0.5,1,1);
    house4();
    glPopMatrix();

    glPushMatrix();
    glTranslated(25,23,0);

    glScaled(0.35,1.5,1);
    house3();
    glPopMatrix();
///house26
glPushMatrix();
    glTranslated(26,24,0);

    glScaled(0.5,1,1);
    house4();
    glPopMatrix();
    ///house27
glPushMatrix();
    glTranslated(29,24,0);

    glScaled(0.5,0.7,1);
    house4();
    glPopMatrix();

    glPushMatrix();
    glTranslated(29,21,0);

    glScaled(0.35,0.5,1);
    house3();
    glPopMatrix();

///enclosure (fariha)
en_line();
glPushMatrix();
    glTranslated(-29,17.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-27,17.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-25,17.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-23,17.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

     glPushMatrix();
    glTranslated(-21,17.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

     glPushMatrix();
    glTranslated(-19,17.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-17,17.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-15,17.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();


    glPushMatrix();
    glTranslated(-13,17.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-11,17.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-9,17.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

     glPushMatrix();
    glTranslated(-7,17.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

     glPushMatrix();
    glTranslated(-5,17.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-3,17.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-1,17.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

    glPushMatrix();
    glTranslated(1,17.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

    glPushMatrix();
    glTranslated(3,17.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

    glPushMatrix();
    glTranslated(5,17.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

    glPushMatrix();
    glTranslated(7,17.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

    glPushMatrix();
    glTranslated(9,17.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

     glPushMatrix();
    glTranslated(11,17.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

    glPushMatrix();
    glTranslated(13,17.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

glPushMatrix();
    glTranslated(15,17.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

    glPushMatrix();
    glTranslated(17,17.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

    glPushMatrix();
    glTranslated(19,17.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

  glPushMatrix();
    glTranslated(21,17.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

 glPushMatrix();
    glTranslated(23,17.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();


 glPushMatrix();
    glTranslated(25,17.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

    glPushMatrix();
    glTranslated(27,17.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

    glPushMatrix();
    glTranslated(29,17.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();


///encloser left (fariha)


glPushMatrix();
    glTranslated(-29,-21.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-27,-21.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-25,-21.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-23,-21.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

     glPushMatrix();
    glTranslated(-21,-21.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

     glPushMatrix();
    glTranslated(-19,-21.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-17,-21.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-15,-21.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();


    glPushMatrix();
    glTranslated(-13,-21.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-11,-21.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-9,-21.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

     glPushMatrix();
    glTranslated(-7,-21.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

     glPushMatrix();
    glTranslated(-5,-21.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-3,-21.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-1,-21.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

    glPushMatrix();
    glTranslated(1,-21.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

    glPushMatrix();
    glTranslated(3,-21.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

    glPushMatrix();
    glTranslated(5,-21.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

    glPushMatrix();
    glTranslated(7,-21.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

    glPushMatrix();
    glTranslated(9,-21.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

     glPushMatrix();
    glTranslated(11,-21.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

    glPushMatrix();
    glTranslated(13,-21.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

glPushMatrix();
    glTranslated(15,-21.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

    glPushMatrix();
    glTranslated(17,-21.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

    glPushMatrix();
    glTranslated(19,-21.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

  glPushMatrix();
    glTranslated(21,-21.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

 glPushMatrix();
    glTranslated(23,-21.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();


 glPushMatrix();
    glTranslated(25,-21.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

    glPushMatrix();
    glTranslated(27,-21.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

    glPushMatrix();
    glTranslated(29,-21.5,0);

    glScaled(0.8,0.8,1);
     enclosure();
    glPopMatrix();

glPushMatrix();
    glTranslated(-36,-39,0);

    glScaled(2.6,1,1);
    en_line();
    glPopMatrix();


///traffic signal base box  right(fariha)


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

    ///traffic signal base box  left (fariha)
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



    ///traffic light LEFT (fariha)
    glPushMatrix();
    glColor3f(r,g,b);
    redLight_left();
    glPopMatrix();

    glPushMatrix();
    glColor3f(p,q,k);
    yellowLight_left();
    glPopMatrix();

    glPushMatrix();
    glColor3f(g1,g2,g3);
    greenLight_left();
    glPopMatrix();
///Traffic light right (fariha)
    glPushMatrix();
    glColor3f(r1,g0,b1);
    redLight_right();
    glPopMatrix();

    glPushMatrix();
    glColor3f(p1,q1,k1);
    yellowLight_right();
    glPopMatrix();

    glPushMatrix();
    glColor3f(g4,g5,g6);
    greenLight_right();
    glPopMatrix();


  ///w8 sheed(fariha)
  glPushMatrix();
    glTranslated(-4,15,0);

    glScaled(0.7,1.3,1);
   shed();
    glPopMatrix();



///beanch(fariha)
glPushMatrix();
    glTranslated(-4,16,0);

    glScaled(0.55,0.57,1);
    bench();
    glPopMatrix();
///lampost (fariha)
glPushMatrix();
    glTranslated(-24,3.5,0);

    glScaled(0.32,0.5,1);
LampPost();
    glPopMatrix();


    ///telephonebooth (fariha)
    glPushMatrix();
    glTranslated(16.7,13.5,0);

    glScaled(0.2,0.42,1);
 telephoneBooth();
    glPopMatrix();





    glutPostRedisplay();



    glFlush ();
}
///emu
void Forword()
{
    printf("%f\n", dx);
    angle1=angle1+3.5;
    dx+=1.2;
    if(dx>=50)
        dx=-50;
    glutPostRedisplay();
}




///emu
//CAR1 STOP
void moveup()
{
    /*
        if (movingUp) {
            if (cx >= stop1) {

                cx = stop1;
                movingUp = false;
            }
            else {
                cx += 0.3;
            }
        }
    */
    if(dx>0.1 && dx<16.0)
    {
        printf("%f %f\n", stop1, dx);
        //glutIdleFunc(NULL);

        dx = -0.1;
        glutIdleFunc(NULL);
    }
    else
    {
        dx+=1.2;
        angle1=angle1+3.5;
    }
    if(dx>=50)
        dx=-50;

    glutPostRedisplay();
}




void Backword()
{
    angle = angle -4.5;
    cx -= 0.2;
    if(cx<=-50)
        cx=50;
    glutPostRedisplay();
}

///emu
void movedown()
{

    /*if (movingDown) {
        if (dx >= stop2) {
            dx = stop2;
            movingDown = false;
        } else {
            dx += 0.3;
        }
    }
    */


    if(cx<-2.5 && cx>-16.0)
    {
        printf("%f %f\n", stop2, cx);
        //glutIdleFunc(NULL);
        cx = -2.5;

        glutIdleFunc(NULL);
    }
    else
    {
        cx-= 0.2;
        angle = angle -4.5;
    }
    if(cx<=-50)
        cx=50;
    glutPostRedisplay();
}



///fariha
void normalKey(unsigned char key,int x,int y)
{

    switch(key)
    {
        ///press a for red light & red car stop
    case 'a':
        //glutIdleFunc(redLight_left);
        r = 1;
        g= 0;
        b= 0;
        glutPostRedisplay();
        movingUp = true;
        glutIdleFunc(moveup);

        break;
    ///press A FOR red light off
    case 'A':
        r = 0;
        g= 0;
        b= 0;
        glutPostRedisplay();
        break;

    ///yellow on
    case 'b':
        p = 1;
        q = 1;
        k = 0;
        glutPostRedisplay();
        //glutIdleFunc(NULL);
        break;
    ///yellow off
    case 'B':
        p = 0;
        q = 0;
        k = 0;
        glutPostRedisplay();
        //glutIdleFunc(NULL);
        break;
    ///Press c for green light & car moving
    case 'c':
        g1=0;
        g2=1;
        g3=0;
        glutPostRedisplay();
        glutIdleFunc(Forword);
        //glutIdleFunc(NULL);
        break;
    ///green off
    case 'C':
        g1=0;
        g2=0;
        g3=0;
        glutPostRedisplay();
        //glutIdleFunc(NULL);
        break;
///right traffic light for yellow car
///press d for red light
    case 'd':
        //glutIdleFunc(redLight_left);
        r1 = 1;
        g0= 0;
        b1= 0;
        glutPostRedisplay();
        movingDown = true;
        glutIdleFunc(movedown);
        break;
        ///red light off
    case 'D':
        r1 = 0;
        g0= 0;
        b1= 0;
        glutPostRedisplay();
        break;
        ///yellow light on
    case 'e':
        p1 = 1;
        q1 = 1;
        k1 = 0;
        glutPostRedisplay();
        //glutIdleFunc(NULL);
        break;
        ///yellow light off
    case 'E':
        p1 = 0;
        q1 = 0;
        k1 = 0;
        glutPostRedisplay();
        //glutIdleFunc(NULL);
        break;
        ///press f for green light & yellow car moving
    case 'f':
        g4=0;
        g5=1;
        g6=0;
        glutPostRedisplay();
        glutIdleFunc(Backword);
        //glutIdleFunc(NULL);
        break;
///green light off
    case 'F':
        g4=0;
        g5=0;
        g6=0;
        glutPostRedisplay();

        //glutIdleFunc(NULL);
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

    glutCreateWindow ("Traffic Control System");

    init ();
    glutDisplayFunc (myDisplay);
    glutKeyboardFunc(normalKey);
    // glutSpecialFunc(specialkey);

    glutMainLoop ();
    return 0;
}
