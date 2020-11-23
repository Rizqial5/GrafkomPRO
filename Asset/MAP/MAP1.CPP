
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
void displayMe(void){
    glClear(GL_COLOR_BUFFER_BIT);


    glBegin(GL_POLYGON);
        glColor3ub(255,255,0);
        glVertex2f(10, 50);
        glVertex2f(10, 10);
        glVertex2f(50, 10);
        glVertex2f(50,50);
	glEnd();

	glBegin(GL_POLYGON);
        glColor3ub(255,0,0);
        glVertex2f(15, 45);
        glVertex2f(15, 15);
        glVertex2f(45, 15);
        glVertex2f(45,45);
	glEnd();

	glBegin(GL_POLYGON);
        glColor3ub(0,180,0);
        glVertex2f(20, 50);
        glVertex2f(20, 45);
        glVertex2f(25, 45);
        glVertex2f(25,50);
	glEnd();

	glBegin(GL_POLYGON);
        glColor3ub(0,180,0);
        glVertex2f(30, 15);
        glVertex2f(30, 10);
        glVertex2f(35, 10);
        glVertex2f(35,15);
	glEnd();



	glutSwapBuffers();
}

int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(0,0);
	glutCreateWindow("Sepupu Steanly");
	glutDisplayFunc(displayMe);
	gluOrtho2D(0, 60, 0, 60);
	glutMainLoop();
	return 0;
}
