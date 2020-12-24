
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
void displayMe(void){
    glClear(GL_COLOR_BUFFER_BIT);

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
//hitam finish 1
	glBegin(GL_POLYGON);
        glColor3ub(0,0,0);
        glVertex2f(5, 55);
        glVertex2f(15, 55);
        glVertex2f(15, 60);
        glVertex2f(5, 60);
	glEnd();
//hitam finish 2
	glBegin(GL_POLYGON);
        glColor3ub(0,0,0);
        glVertex2f(25, 55);
        glVertex2f(35, 55);
        glVertex2f(35, 60);
        glVertex2f(25, 60);
	glEnd();
//hijau start
	glBegin(GL_POLYGON);
        glColor3ub(0,180,0);
        glVertex2f(55, 5);
        glVertex2f(60, 5);
        glVertex2f(60, 15);
        glVertex2f(55, 15);
	glEnd();
// wall
    glBegin(GL_POLYGON);
        glColor3ub(0,180,0);
        glVertex2f(40, 25);
        glVertex2f(55, 25);
        glVertex2f(55, 55);
        glVertex2f(40, 55);
	glEnd();

	glutSwapBuffers();
}

int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowSize(1000, 600);
	glutInitWindowPosition(0,0);
	glutCreateWindow("Sepupu Steanly");
	glutDisplayFunc(displayMe);
	gluOrtho2D(0, 100, 0, 60);
	glutMainLoop();
	return 0;
}
