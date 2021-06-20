#include<windows.h>
#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include<stdio.h>
#include<math.h>

void init()
{
    glClearColor(0.0f,0.0f,0.0f,0.0f);
    glOrtho(-5,+5,-10,+10,-5,+5);

}

void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1,1,1);

        glPushMatrix();
        glTranslated(0,0,0);
        glBegin(GL_POLYGON);

        //background white

        glVertex2d(2,8);
        glVertex2d(-2,8);
        glVertex2d(-2,-8);
        glVertex2d(2,-8);

        glEnd();
        glPopMatrix();


         //brown step

        glPushMatrix();
        glTranslated(0,6,0);
        glBegin(GL_POLYGON);


        glColor3f(0.63,0.32,0.18);
        glVertex2d(2,1);
        glVertex2d(-2,1);
        glVertex2d(-2,-1);
        glVertex2d(2,-1);

        glEnd();
        glPopMatrix();


         //gray step

        glPushMatrix();
        glTranslated(0,5,0);
        glBegin(GL_POLYGON);


        glColor3f(0.41,0.41,0.41);
        glVertex2d(2,0.50);
        glVertex2d(-2,0.50);
        glVertex2d(-2,-0.50);
        glVertex2d(2,-0.50);

        glEnd();
        glPopMatrix();

        //1st window

        glPushMatrix();
        glTranslated(-1.25,3,0);
        glBegin(GL_POLYGON);

        glColor3f(0.63,0.32,0.18);
        glVertex2d(0.25,0.5);
        glVertex2d(-0.25,0.5);
        glVertex2d(-0.25,-0.5);
        glVertex2d(0.25,-0.5);


        glEnd();
        glPopMatrix();


        glPushMatrix();
        glTranslated(1.25,3,0);
        glBegin(GL_POLYGON);

        //2nd window

        glColor3f(0.63,0.32,0.18);
        glVertex2d(0.25,0.5);
        glVertex2d(-0.25,0.5);
        glVertex2d(-0.25,-0.5);
        glVertex2d(0.25,-0.5);


        glEnd();
        glPopMatrix();


        //1st door

        glPushMatrix();
        glTranslated(0,2,0);
        glBegin(GL_POLYGON);

        glColor3f(0.63,0.32,0.18);
        glVertex2d(0.25,2);
        glVertex2d(-0.25,2);
        glVertex2d(-0.25,-2);
        glVertex2d(0.25,-2);


        glEnd();
        glPopMatrix();


        //2nd gray step

        glPushMatrix();
        glTranslated(0,0,0);
        glBegin(GL_POLYGON);


        glColor3f(0.41,0.41,0.41);
        glVertex2d(2,0.50);
        glVertex2d(-2,0.50);
        glVertex2d(-2,-0.50);
        glVertex2d(2,-0.50);

        glEnd();
        glPopMatrix();


        //3rd window

        glPushMatrix();
        glTranslated(-1.25,-3,0);
        glBegin(GL_POLYGON);

        glColor3f(0.63,0.32,0.18);
        glVertex2d(0.25,0.5);
        glVertex2d(-0.25,0.5);
        glVertex2d(-0.25,-0.5);
        glVertex2d(0.25,-0.5);


        glEnd();
        glPopMatrix();


        //4th window

        glPushMatrix();
        glTranslated(1.25,-3,0);
        glBegin(GL_POLYGON);

        glColor3f(0.63,0.32,0.18);
        glVertex2d(0.25,0.5);
        glVertex2d(-0.25,0.5);
        glVertex2d(-0.25,-0.5);
        glVertex2d(0.25,-0.5);


        glEnd();
        glPopMatrix();


        //2nd door

        glPushMatrix();
        glTranslated(0,-3,0);
        glBegin(GL_POLYGON);

        glColor3f(0.63,0.32,0.18);
        glVertex2d(0.25,2);
        glVertex2d(-0.25,2);
        glVertex2d(-0.25,-2);
        glVertex2d(0.25,-2);


        glEnd();
        glPopMatrix();


        //3rd gray step

        glPushMatrix();
        glTranslated(0,-5,0);
        glBegin(GL_POLYGON);


        glColor3f(0.41,0.41,0.41);
        glVertex2d(2,0.50);
        glVertex2d(-2,0.50);
        glVertex2d(-2,-0.50);
        glVertex2d(2,-0.50);

        glEnd();
        glPopMatrix();


        //last beguni box

        glPushMatrix();
        glTranslated(0,-7,0);
        glBegin(GL_POLYGON);


        glColor3f(0.58,0,0.83);
        glVertex2d(0.75,1);
        glVertex2d(-0.75,1);
        glVertex2d(-0.75,-1);
        glVertex2d(0.75,-1);

        glEnd();
        glPopMatrix();


    glFlush();
    //glutSwapBuffers();

}


int main()
{

    glutInitWindowSize(1200,800);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);

    glutCreateWindow("CG CT 1");

    init();
    glutDisplayFunc(myDisplay);
    glutMainLoop();

    return 0;
}
