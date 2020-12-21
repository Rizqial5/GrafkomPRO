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

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void displayMe(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    //Kotak1
    glMatrixMode(GL_MODELVIEW);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(2.4,0.32);
    glVertex2f(2.14,0.52);
    glVertex2f(1.92,0.71);
    glVertex2f(1.75,0.9);//c
    glVertex2f(1.61,1.08);//d
    glVertex2f(1.52,1.29);//e
    glVertex2f(1.58,1.52);//f
    glVertex2f(1.77,1.66);//g
    glVertex2f(1.95,1.75);//h
    glVertex2f(2.11,1.72);//a1
    glVertex2f(2.24,1.6);//B1
    glVertex2f(2.34,1.45);//I1
    glVertex2f(2.41,1.29);//J1
    glVertex2f(2.51,1.45);//K1
    glVertex2f(2.64,1.59);//L1
    glVertex2f(2.78,1.73);//M1
    glVertex2f(3,1.76);//N1
    glVertex2f(3.16,1.65);//O1
    glVertex2f(3.28,1.48);//P1
    glVertex2f(3.34,1.26);//Q1
    glVertex2f(3.23,1.06);//R1
    glVertex2f(3.08,0.88);//T1
    glVertex2f(2.89,0.71);//U1
    glVertex2f(2.67,0.52);//V1
    glEnd();
    glFlush();


    glutSwapBuffers();
}
void myinit(){
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glClearColor(1.0,1.0,1.0,1.0);
    glColor3f(0.0,0.0,0.0);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA,GL_ONE_MINUS_SRC_ALPHA);
}

int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(0,0);
	glutCreateWindow("Hello world!");
	glutDisplayFunc(displayMe);
	gluOrtho2D(0, 4, 0, 3);
	myinit();
	glutMainLoop();
	return 0;
}
