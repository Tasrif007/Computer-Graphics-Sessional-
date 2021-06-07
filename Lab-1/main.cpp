#include<windows.h>
#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
void init()
{
    glClearColor(0.0f,0.0f,0.0f,0.0f);
    glOrtho(-5,+5,-10,+10,-5,+5);
}

void myDisplay()
{
    /* glBegin(GL_LINES);
        glVertex2d(0,0);
        glVertex2d(4,0);
        glVertex2d(0,2);
        glVertex2d(-4,2);
        glVertex2d(0,0);
        glVertex2d(0,2);

    glEnd();
  */
    glBegin(GL_LINE_LOOP);

        glVertex2d(0,0);
        glVertex2d(2,0);
        glVertex2d(3,2);
        glVertex2d(1,2);

        glVertex2d(0,0);
        glVertex2d(-2,0);
        glVertex2d(-3,2);
        glVertex2d(-1,2);

        glVertex2d(0,0);
        glVertex2d(-1,2);
        glVertex2d(0,4);
        glVertex2d(1,2);

        //--------------

        glVertex2d(0,0);
        glVertex2d(2,0);
        glVertex2d(3,-2);
        glVertex2d(1,-2);

        glVertex2d(0,0);
        glVertex2d(-2,0);
        glVertex2d(-3,-2);
        glVertex2d(-1,-2);

        glVertex2d(0,0);
        glVertex2d(-1,-2);
        glVertex2d(0,-4);
        glVertex2d(1,-2);

    glEnd();

    /*glColor3f(1.0,0.0,0.0);
    glBegin(GL_TRIANGLES);
        glVertex2d(0,0);
        glVertex2d(4,0);
        glVertex2d(0,2);
    glEnd();

    glColor3f(0.0,1.0,0.0);
    glBegin(GL_TRIANGLES);
        glVertex2d(0,0);
        glVertex2d(0,2);
        glVertex2d(-4,2);

    glEnd();  */



glFlush();
    //glutSwapBuffer(); use when double screen
}

int main()
{
    //glutInit(&argc, argv);
    glutInitWindowSize(640,480);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);

    glutCreateWindow("Task 1");
    init();
    glutDisplayFunc(myDisplay);
    glutMainLoop();

    return 0;
}
