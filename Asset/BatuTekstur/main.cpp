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
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_QUADS);
    glVertex2f(2,1);
    glVertex2f(9,1);
    glVertex2f(9,7);
    glVertex2f(2,7);
    glEnd();
    glFlush();
    //Kotak2
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0.1,0.1,0.1);
    glBegin(GL_QUADS);
    glVertex2f(3,2);
    glVertex2f(8,2);
    glVertex2f(8,6);
    glVertex2f(3,6);
    glEnd();
    glFlush();
    //Kotak3
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_QUADS);
    glVertex2f(3.5,5.5);
    glVertex2f(5,5.5);
    glVertex2f(5,5);
    glVertex2f(3.5,5);
    glEnd();
    glFlush();
    //Kotak4
    glMatrixMode(GL_MODELVIEW);
    glColor3ub(134,121,121);
    glBegin(GL_QUADS);
    glVertex2f(5,5);
    glVertex2f(6.5,5);
    glVertex2f(6.5,4.5);
    glVertex2f(5,4.5);
    glEnd();
    glFlush();
    //Kotak5
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_QUADS);
    glVertex2f(7,5.5);
    glVertex2f(7.5,5.5);
    glVertex2f(7.5,5);
    glVertex2f(7,5);
    glEnd();
    glFlush();
    //Kotak6
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_QUADS);
    glVertex2f(6.5,4.5);
    glVertex2f(7.5,4.5);
    glVertex2f(7.5,4);
    glVertex2f(6.5,4);
    glEnd();
    glFlush();
    //Kotak6
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_QUADS);
    glVertex2f(3.5,4);
    glVertex2f(4.5,4);
    glVertex2f(4.5,3.5);
    glVertex2f(3.5,3.5);
    glEnd();
    glFlush();
    //Kotak6
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_QUADS);
    glVertex2f(5,4);
    glVertex2f(5.5,4);
    glVertex2f(5.5,3.5);
    glVertex2f(5,3.5);
    glEnd();
    glFlush();
    //Kotak6
    glMatrixMode(GL_MODELVIEW);
    glColor3ub(134,121,121);
    glBegin(GL_QUADS);
    glVertex2f(5.5,3.5);
    glVertex2f(7.5,3.5);
    glVertex2f(7.5,3);
    glVertex2f(5.5,3);
    glEnd();
    glFlush();
    //Kotak6
    glMatrixMode(GL_MODELVIEW);
    glColor3ub(134,121,121);
    glBegin(GL_QUADS);
    glVertex2f(4,3);
    glVertex2f(5,3);
    glVertex2f(5,2.5);
    glVertex2f(4,2.5);
    glEnd();
    glFlush();
    //Kotak6
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_QUADS);
    glVertex2f(6,2.76);
    glVertex2f(7,2.76);
    glVertex2f(7,2.5);
    glVertex2f(6,2.5);
    glEnd();
    glFlush();

    glMatrixMode(GL_MODELVIEW);
    glColor3ub(134,121,121);
    glBegin(GL_QUADS);
    glVertex2f(3.6,4.8);
    glVertex2f(4.8,4.8);
    glVertex2f(4.8,4.2);
    glVertex2f(3.6,4.2);
    glEnd();
    glFlush();

    glMatrixMode(GL_MODELVIEW);
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_QUADS);
    glVertex2f(5.4,5.8);
    glVertex2f(6.8,5.8);
    glVertex2f(6.8,5.2);
    glVertex2f(5.4,5.2);
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
	gluOrtho2D(0, 13, 0, 9);
	myinit();
	glutMainLoop();
	return 0;
}
