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
    glColor3f(0.1,0.1,0.1);
    glBegin(GL_QUADS);
    glVertex2f(10,5);
    glVertex2f(13,5);
    glVertex2f(13,2);
    glVertex2f(10,2);
    glEnd();
    glFlush();

    glutSwapBuffers();
}

int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(0,0);
	glutCreateWindow("Hello world!");
	glutDisplayFunc(displayMe);
	gluOrtho2D(0, 50, 0, 50);
	glutMainLoop();
	return 0;
}


