
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>






void chara(void){
    glClear(GL_COLOR_BUFFER_BIT);

    //Black Color
    glBegin(GL_POLYGON);
    glVertex2f(2.5,6);
    glVertex2f(2.5,3.5);
    glVertex2f(3,3.5);
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
    glVertex2f(7.5,3.5);
    glVertex2f(7,3.5);
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

    glBegin(GL_POLYGON);
    glVertex2f(3,3.5);
    glVertex2f(3,3);
    glVertex2f(4,3);
    glVertex2f(4,3.5);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(4,3.5);
    glVertex2f(4.5,3.5);
    glVertex2f(4.5,5.5);
    glVertex2f(4,5.5);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(4,5.5);
    glVertex2f(3.5,5.5);
    glVertex2f(3.5,6);
    glVertex2f(4,6);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(7,3.5);
    glVertex2f(7,3);
    glVertex2f(6,3);
    glVertex2f(6,3.5);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(6,3.5);
    glVertex2f(5.5,3.5);
    glVertex2f(5.5,5.5);
    glVertex2f(6,5.5);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(6,5.5);
    glVertex2f(6,6);
    glVertex2f(6.5,6);
    glVertex2f(6.5,5.5);
    glEnd();
    ////////////////////

    //warna Coklat//
    glBegin(GL_POLYGON);
    glColor3ub(102,57,49);
    glVertex2f(4,6.5);
    glVertex2f(4,6);
    glVertex2f(6,6);
    glVertex2f(6,6.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(102,57,49);
    glVertex2f(2.5,6.5);
    glVertex2f(2.5,7);
    glVertex2f(3,7);
    glVertex2f(3,6.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(102,57,49);
    glVertex2f(2.5,7);
    glVertex2f(2,7);
    glVertex2f(2,7.5);
    glVertex2f(2.5,7.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(102,57,49);
    glVertex2f(2,7.5);
    glVertex2f(1.5,7.5);
    glVertex2f(1.5,8);
    glVertex2f(2,8);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(102,57,49);
    glVertex2f(1.5,8);
    glVertex2f(1,8);
    glVertex2f(1,9);
    glVertex2f(1.5,9);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(102,57,49);
    glVertex2f(1.5,9);
    glVertex2f(1.5,10.5);
    glVertex2f(2,10.5);
    glVertex2f(2,9);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(102,57,49);
    glVertex2f(2.5,8.5);
    glVertex2f(3,8.5);
    glVertex2f(3,9);
    glVertex2f(2.5,9);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(102,57,49);
    glVertex2f(3,9);
    glVertex2f(3.5,9);
    glVertex2f(3.5,9.5);
    glVertex2f(3,9.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(102,57,49);
    glVertex2f(7,6.5);
    glVertex2f(7.5,6.5);
    glVertex2f(7.5,7);
    glVertex2f(7,7);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(102,57,49);
    glVertex2f(7.5,7);
    glVertex2f(8,7);
    glVertex2f(8,7.5);
    glVertex2f(7.5,7.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(102,57,49);
    glVertex2f(8,7.5);
    glVertex2f(8.5,7.5);
    glVertex2f(8.5,8);
    glVertex2f(8,8);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(102,57,49);
    glVertex2f(8.5,8);
    glVertex2f(9,8);
    glVertex2f(9,9);
    glVertex2f(8.5,9);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(102,57,49);
    glVertex2f(8.5,9);
    glVertex2f(8,9);
    glVertex2f(8,10.5);
    glVertex2f(8.5,10.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(102,57,49);
    glVertex2f(7,9);
    glVertex2f(7.5,9);
    glVertex2f(7.5,8.5);
    glVertex2f(7,8.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(102,57,49);
    glVertex2f(7,9);
    glVertex2f(6.5,9);
    glVertex2f(6.5,9.5);
    glVertex2f(7,9.5);
    glEnd();
    ///////////////////

    ////biru Tua///
    glBegin(GL_POLYGON);
    glColor3ub(63,63,116);
    glVertex2f(1.5,10.5);
    glVertex2f(2,10.5);
    glVertex2f(2,11);
    glVertex2f(1.5,11);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(63,63,116);
    glVertex2f(1.5,11);
    glVertex2f(1,11);
    glVertex2f(1,14);
    glVertex2f(1.5,14);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(63,63,116);
    glVertex2f(1.5,14);
    glVertex2f(1.5,14.5);
    glVertex2f(2,14.5);
    glVertex2f(2,14);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(63,63,116);
    glVertex2f(2,14);
    glVertex2f(2,13);
    glVertex2f(2.5,13);
    glVertex2f(2.5,14);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(63,63,116);
    glVertex2f(2.5,13.5);
    glVertex2f(2.5,12);
    glVertex2f(3.5,12);
    glVertex2f(3.5,13.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(63,63,116);
    glVertex2f(2,10.5);
    glVertex2f(2,10);
    glVertex2f(2.5,10);
    glVertex2f(2.5,10.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(63,63,116);
    glVertex2f(2.5,10);
    glVertex2f(2.5,9.5);
    glVertex2f(3.5,9.5);
    glVertex2f(3.5,10);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(63,63,116);
    glVertex2f(3.5,10);
    glVertex2f(3.5,12);
    glVertex2f(4,12);
    glVertex2f(4,10);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(63,63,116);
    glVertex2f(3.5,11.5);
    glVertex2f(3,11.5);
    glVertex2f(3,12);
    glVertex2f(3.5,12);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(63,63,116);
    glVertex2f(4,11);
    glVertex2f(4.5,11);
    glVertex2f(4.5,11.5);
    glVertex2f(4,11.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(63,63,116);
    glVertex2f(4,10.5);
    glVertex2f(4,9.5);
    glVertex2f(4.5,9.5);
    glVertex2f(4.5,10.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(63,63,116);
    glVertex2f(4.5,10);
    glVertex2f(4.5,9);
    glVertex2f(5.5,9);
    glVertex2f(5.5,10);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(63,63,116);
    glVertex2f(5.5,9.5);
    glVertex2f(5.5,10.5);
    glVertex2f(6,10.5);
    glVertex2f(6,9.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(63,63,116);
    glVertex2f(6,10);
    glVertex2f(6,12);
    glVertex2f(6.5,12);
    glVertex2f(6.5,10);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(63,63,116);
    glVertex2f(6,11);
    glVertex2f(5.5,11);
    glVertex2f(5.5,11.5);
    glVertex2f(6,11.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(63,63,116);
    glVertex2f(6.5,11.5);
    glVertex2f(6.5,12);
    glVertex2f(7,12);
    glVertex2f(7,11.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(63,63,116);
    glVertex2f(6.5,12);
    glVertex2f(6.5,13.5);
    glVertex2f(7.5,13.5);
    glVertex2f(7.5,12);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(63,63,116);
    glVertex2f(7,13.5);
    glVertex2f(6,13.5);
    glVertex2f(6,14);
    glVertex2f(7,14);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(63,63,116);
    glVertex2f(6,14);
    glVertex2f(4,14);
    glVertex2f(4,14.5);
    glVertex2f(6,14.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(63,63,116);
    glVertex2f(4,14);
    glVertex2f(3,14);
    glVertex2f(3,13.5);
    glVertex2f(4,13.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(63,63,116);
    glVertex2f(7.5,13);
    glVertex2f(7.5,14);
    glVertex2f(8,14);
    glVertex2f(8,13);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(63,63,116);
    glVertex2f(8,14);
    glVertex2f(8,14.5);
    glVertex2f(8.5,14.5);
    glVertex2f(8.5,14);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(63,63,116);
    glVertex2f(8.5,14);
    glVertex2f(8.5,11);
    glVertex2f(9,11);
    glVertex2f(9,14);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(63,63,116);
    glVertex2f(8.5,11);
    glVertex2f(8,11);
    glVertex2f(8,10.5);
    glVertex2f(8.5,10.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(63,63,116);
    glVertex2f(8,10.5);
    glVertex2f(7.5,10.5);
    glVertex2f(7.5,10);
    glVertex2f(8,10);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(63,63,116);
    glVertex2f(7.5,10);
    glVertex2f(6.5,10);
    glVertex2f(6.5,9.5);
    glVertex2f(7.5,9.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(63,63,116);
    glVertex2f(4,6);
    glVertex2f(6,6);
    glVertex2f(6,5.5);
    glVertex2f(4,5.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(63,63,116);
    glVertex2f(4.5,5.5);
    glVertex2f(4.5,3.5);
    glVertex2f(5.5,3.5);
    glVertex2f(5.5,5.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(63,63,116);
    glVertex2f(4,3.5);
    glVertex2f(6,3.5);
    glVertex2f(6,3);
    glVertex2f(4,3);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(63,63,116);
    glVertex2f(2.5,3);
    glVertex2f(7.5,3);
    glVertex2f(7.5,2.5);
    glVertex2f(2.5,2.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(63,63,116);
    glVertex2f(2.5,3.5);
    glVertex2f(2.5,3);
    glVertex2f(3,3);
    glVertex2f(3,3.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(63,63,116);
    glVertex2f(7,3);
    glVertex2f(7,3.5);
    glVertex2f(7.5,3.5);
    glVertex2f(7.5,3);
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

