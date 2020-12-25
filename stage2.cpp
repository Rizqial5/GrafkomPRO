
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
void stage2(void){


    glBegin(GL_POLYGON);
        glColor3ub(255,255,0);
        glVertex2f(0, 60);
        glVertex2f(0, 0);
        glVertex2f(60, 0);
        glVertex2f(60,60);
	glEnd();

	glBegin(GL_POLYGON);
        glColor3ub(255,0,0);
        glVertex2f(5, 5);
        glVertex2f(55, 5);
        glVertex2f(55, 55);
        glVertex2f(5,55);
	glEnd();

	glBegin(GL_POLYGON);
        glColor3ub(0,0,0);
        glVertex2f(55, 40);
        glVertex2f(60, 40);
        glVertex2f(60, 55);
        glVertex2f(55,55);
	glEnd();

	glBegin(GL_POLYGON);
        glColor3ub(0,180,0);
        glVertex2f(5, 0);
        glVertex2f(15, 0);
        glVertex2f(15, 5);
        glVertex2f(5,5);
	glEnd();


}

