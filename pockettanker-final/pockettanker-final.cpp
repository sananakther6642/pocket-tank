#include<windows.h>
#include<GL/glut.h>
#include <GL/glu.h>
#include<math.h>
#include <stdlib.h>
#include<stdio.h>
#define PI 3.1416

int x = 0, y = 0;
float armAngle = 0;
const int ARM_LENGTH = 80;



GLint i, j, k;
GLfloat sun_spin = 0, sun_x = 0, sun_y = 0;
GLfloat ax = 0, bx = 0, cx = 0, dx = 0, str = 500.0, mn = 500.0;
GLfloat sr = 0.0, sg = 0.749, sb = 1.0;
GLfloat spin = 0.0;
GLfloat mo = 0.1;
GLfloat vertices[][3] = { {-1.0,-1.0,-1.0},{1.0,-1.0,-1.0},
    {1.0,1.0,-1.0}, {-1.0,1.0,-1.0}, {-1.0,-1.0,1.0},
    {1.0,-1.0,1.0}, {1.0,1.0,1.0}, {-1.0,1.0,1.0} };

void init(void)
{
    glClearColor(.40, .110, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 1000.0, 0.0, 500.0);
}


///============================================================================================================///
void box(GLdouble rad)
{
    GLint points = 50;
    GLdouble delTheta = (2.0 * PI) / (GLdouble)points;
    GLdouble theta = 0.0;

    glBegin(GL_POLYGON);
    {
        for (i = 0; i <= 50; i++, theta += delTheta)
        {
            glVertex2f(rad * cos(theta), rad * sin(theta));
        }
    }
    glEnd();
}

///*** Circle_Model***///
void circle(GLdouble rad)
{
    GLint points = 50;
    GLdouble delTheta = (2.0 * PI) / (GLdouble)points;
    GLdouble theta = 0.0;

    glBegin(GL_POLYGON);
    {
        for (i = 0; i <= 50; i++, theta += delTheta)
        {
            glVertex2f(rad * cos(theta), rad * sin(theta));
        }
    }
    glEnd();
}
///*** Cloud_Model***///



void cloud_model_one() {

    glColor3f(1.25, 0.924, 0.930);

    ///Top_Left

    glPushMatrix();
    glTranslatef(320, 210, 0);
    circle(15);
    glPopMatrix();

    ///Top

    glPushMatrix();
    glTranslatef(340, 225, 0);
    circle(16);
    glPopMatrix();

    ///Right

    glPushMatrix();
    glTranslatef(360, 210, 0);
    circle(16);
    glPopMatrix();


    ///middle_Fill
    glPushMatrix();
    glTranslatef(355, 210, 0);
    circle(16);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(350, 210, 0);
    circle(16);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(345, 204, 0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(340, 204, 0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(335, 204, 0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(330, 204, 0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(325, 204, 0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(320, 204, 0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(315, 204, 0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(310, 204, 0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(305, 204, 0);
    circle(10);
    glPopMatrix();

    ///****Fill End****

}

void cloud_model_Two() {
    glColor3f(1.25, 0.924, 0.930);

    ///Left_Part
    glPushMatrix();
    glTranslatef(305, 205, 0);
    circle(10);
    glPopMatrix();

    ///Top

    glPushMatrix();
    glTranslatef(320, 210, 0);
    circle(15);
    glPopMatrix();

    ///Right_Part
    glPushMatrix();
    glTranslatef(334, 207, 0);
    circle(10);
    glPopMatrix();

    ///Bottom_Part
    glPushMatrix();
    glTranslatef(320, 207, 0);
    circle(10);
    glPopMatrix();



}

void cloud_model_Three() {
    glColor3f(1.25, 0.924, 0.930);

    ///Left_Part
    glPushMatrix();
    glTranslatef(300, 200, 0);
    circle(15);
    glPopMatrix();

    ///Top_Left

    glPushMatrix();
    glTranslatef(320, 210, 0);
    circle(15);
    glPopMatrix();

    ///Top
    glPushMatrix();
    glTranslatef(340, 220, 0);
    circle(16);
    glPopMatrix();

    ///Top_Right
    glPushMatrix();
    glTranslatef(360, 210, 0);
    circle(15);
    glPopMatrix();

    ///Right_Part
    glPushMatrix();
    glTranslatef(380, 200, 0);
    circle(15);
    glPopMatrix();

    ///Bottom_Right
    glPushMatrix();
    glTranslatef(360, 190, 0);
    circle(20);
    glPopMatrix();

    ///Bottom_Left
    glPushMatrix();
    glTranslatef(320, 190, 0);
    circle(20);
    glPopMatrix();

    ///Bottom
    glPushMatrix();
    glTranslatef(340, 190, 0);
    circle(20);
    glPopMatrix();




    ///****Fill End****

}
void tank() {

    /*glBegin(GL_POLYGON);

    glVertex3f(125, 123,1);
    glVertex3f(133, 145,1);
    glVertex3f(141, 123,1);
    glVertex3f(121, 123,1);


    glEnd();*/
    
        glVertex2f(ARM_LENGTH * cos(armAngle) + (54 + x), ARM_LENGTH * sin(armAngle) + 25 + y);
    //else
      //  glVertex2f(-1 * ARM_LENGTH * cos(armAngle) + (54 + x), -1 * ARM_LENGTH * sin(armAngle) + 25 + y);


    glRectf(20, 70, 90, 90);
    glRectf(30, 80, 80, 110);
  
    glRectf(150, 90, 50, 100);
    





}
void updateAngle(int mouseX, int mouseY)
{
    if (mouseY < (15 + y))
        armAngle = atan(((15 + y) - mouseY) / (float)((54 + x) - mouseX));
}



void obst() {
    glColor3f(1, 1, 0);
    glBegin(GL_POLYGON);
    glVertex2i(150, 550);
    glVertex2i(200, 550);
    glVertex2i(200, 700);
    glVertex2i(150, 700);
    glEnd();

}

///*** Field_Model ***///
void field() {
    ///Field

    glBegin(GL_POLYGON);
    glColor3f(0.533, 1.293, 0.0);
    glVertex2i(0, 50);
    glVertex2i(0, 70);
    glVertex2i(1000, 70);
    glVertex2i(1000, 50);


    glEnd();


    ///Field_Shadow
    glBegin(GL_POLYGON);
    glColor3f(0.1, 1.293, 0.0);
    glVertex2i(0, 0);
    glVertex2i(0, 50);
    glVertex2i(1000, 50);
    glVertex2i(1000, 0);

    glEnd();


}

void cloud_one() {
    glPushMatrix();
    glTranslatef(cx, -40, 0);
    cloud_model_one();
    glPopMatrix();

}

///*** Cloud_Two_Model_one ***///
    
void cloud_two() {
    glPushMatrix();
    glTranslatef(bx + 100, 150, 0);
    cloud_model_one();

    glPopMatrix();
    obst();

}

///*** Cloud_Three_Model_Two ***///

void cloud_three() {
    glPushMatrix();
    glTranslatef(ax - 80, 80, 0);
    cloud_model_Two();
    glPopMatrix();

}
///*** Cloud_Four_Model_Two ***///

void cloud_four() {
    glPushMatrix();
    glTranslatef(dx + 300, 125, 0);
    cloud_model_Two();
    glPopMatrix();

}
///*** Cloud_Five_Model_Three ***///
void cloud_five() {

    glPushMatrix();
    glTranslatef(ax + -300, 170, 0);
    cloud_model_Three();
    glPopMatrix();
}
///*** Cloud_Six_Model_Three ***///
void cloud_six() {

    glPushMatrix();
    glTranslatef(cx + -500, 20, 0);
    cloud_model_Three();
    glPopMatrix();
}


///Object_End
///=========================================================================================================///


///========================///
///*** Display Function ***///
///========================///

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.0, 0.0, 1.0);      
        
        cloud_three();
        cloud_four();
        cloud_one();
   

       cloud_two();
        cloud_five();
        cloud_six();

        tank();
        obst();
        field();


       
    glFlush();


}



///========================///
///*** Speed & Movement ***///
///========================///

/// 

void move_right() {

 
  
    spin = spin + .1;
    ax = ax + .10;
    bx = bx + .10;
    cx = cx + .10;
    dx = dx + .15;

    if (cx > 1000) {
        cx = -300;
    }
    if (bx > 1000) {
        bx = -400;

    }
    if (cx > 1000) {
        cx = -400;

    }
    if (dx > 1000) {
        dx = -500;

    }


    glutPostRedisplay();
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(50, 50);
    glutInitWindowSize(1900, 1900);
    glutCreateWindow("pocket-tank");
   
    init();
    glutDisplayFunc(display);
   
   //glutMouseFunc(mouse);
  
    glutMainLoop();
}
