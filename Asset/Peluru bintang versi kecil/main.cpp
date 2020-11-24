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

    glMatrixMode(GL_MODELVIEW);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_QUADS);
    glVertex2f(0.8,0.8);
    glVertex2f(1,0.8);
    glVertex2f(1,0.6);
    glVertex2f(0.8,0.6);
    glEnd();
    glFlush();

    glMatrixMode(GL_MODELVIEW);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.8,0.8);
    glVertex2f(1,0.8);
    glVertex2f(0.9,1);
    glEnd();
    glFlush();

    glMatrixMode(GL_MODELVIEW);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(1,0.8);
    glVertex2f(1.2,0.7);
    glVertex2f(1,0.6);
    glEnd();
    glFlush();

    glMatrixMode(GL_MODELVIEW);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(1,0.6);
    glVertex2f(0.89,0.4);
    glVertex2f(0.8,0.6);
    glEnd();
    glFlush();

    glMatrixMode(GL_MODELVIEW);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.8,0.6);
    glVertex2f(0.6,0.7);
    glVertex2f(0.8,0.8);
    glEnd();
    glFlush();

    glutSwapBuffers();
}

int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowSize(1368, 728);
	glutInitWindowPosition(0,0);
	glutCreateWindow("Hello world!");
	glutDisplayFunc(displayMe);
	gluOrtho2D(0, 50, 0, 50);
	glutMainLoop();
	return 0;
}

