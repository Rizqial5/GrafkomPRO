
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>






void chara(void){
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glVertex2f(2.5,6);
    glVertex2f(2.5,4);
    glVertex2f(3,4);
    glVertex2f(3,6);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(2,4);
    glVertex2f(2,0.5);
    glVertex2f(2.5,0.5);
    glVertex2f(2.5,4);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1,2);
    glVertex2f(2,2);
    glVertex2f(2,1.5);
    glVertex2f(1,1.5);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.5,2);
    glVertex2f(0.5,3.5);
    glVertex2f(1,3.5);
    glVertex2f(1,2);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1,3.5);
    glVertex2f(1,4.5);
    glVertex2f(1.5,4.5);
    glVertex2f(1.5,3.5);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1.5,4.5);
    glVertex2f(1.5,5);
    glVertex2f(2,5);
    glVertex2f(2,4.5);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(2,5.5);
    glVertex2f(2,5);
    glVertex2f(2.5,5);
    glVertex2f(2.5,5.5);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(3,6.5);
    glVertex2f(4,6.5);
    glVertex2f(4,6);
    glVertex2f(3,6);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(2.5,0.5);
    glVertex2f(4,0.5);
    glVertex2f(4,0);
    glVertex2f(2.5,0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(4,0.5);
    glVertex2f(4,1.5);
    glVertex2f(4.5,1.5);
    glVertex2f(4.5,0.5);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(5.5,1.5);
    glVertex2f(5.5,0.5);
    glVertex2f(6,0.5);
    glVertex2f(6,1.5);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(6,0.5);
    glVertex2f(6,0);
    glVertex2f(7.5,0);
    glVertex2f(7.5,0.5);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(7.5,0.5);
    glVertex2f(8,0.5);
    glVertex2f(8,4);
    glVertex2f(7.5,4);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(7.5,4);
    glVertex2f(7,4);
    glVertex2f(7,6);
    glVertex2f(7.5,6);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(7,6);
    glVertex2f(6,6);
    glVertex2f(6,6.5);
    glVertex2f(7,6.5);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(8,2);
    glVertex2f(9,2);
    glVertex2f(9,1.5);
    glVertex2f(8,1.5);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(9,2);
    glVertex2f(9,3.5);
    glVertex2f(9.5,3.5);
    glVertex2f(9.5,2);
    glEnd();

glBegin(GL_POLYGON);
    glVertex2f(9,3.5);
    glVertex2f(8.5,3.5);
    glVertex2f(8.5,4.5);
    glVertex2f(9,4.5);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(8.5,4.5);
    glVertex2f(8,4.5);
    glVertex2f(8,5);
    glVertex2f(8.5,5);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(8,5);
    glVertex2f(8,5.5);
    glVertex2f(7.5,5.5);
    glVertex2f(7.5,5);
    glEnd();


    glutSwapBuffers();


}




void displayMe(void){
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();



    glPopMatrix();
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
	glutCreateWindow("Sepupu Steanly");
	glutDisplayFunc(chara);
	gluOrtho2D(0, 60, 0, 60);
	myinit();
	glutMainLoop();

	return 0;
}

