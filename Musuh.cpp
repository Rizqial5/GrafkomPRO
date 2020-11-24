//
#include<windows.h>
#include <GL/glut.h>

void mons1(void) {
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_POLYGON); //BODY
	glColor3f(0.9, 0.2, 0.25);
	glVertex2f(42.5, 31); // L
	glVertex2f(44, 29.5); // C
	glVertex2f(45, 27); // B
	glVertex2f(45, 23); // A1
	glVertex2f(43, 23); // Z1
	glVertex2f(42.5, 25.5); // W1
	glVertex2f(41.5, 27); // V1
	glVertex2f(42.5, 21.5); // T1
	glVertex2f(42.5, 20); // S1
	glVertex2f(39, 20); // R1
	glVertex2f(39, 21); // Q1
	glVertex2f(38, 22); // P1
	glVertex2f(36.5, 22); // O1
	glVertex2f(38.5, 28); // N
	glVertex2f(40.5, 29); // M
	glEnd();
	glBegin(GL_POLYGON); //BODY
	glVertex2f(36.5, 22); // O1
	glVertex2f(36.5, 20); // N1
	glVertex2f(33, 20); // M1
	glVertex2f(33, 23); // K1
	glVertex2f(32, 24); // J1
	glVertex2f(32, 26.5); // I1
	glVertex2f(34, 30.5); // P
	glVertex2f(34.5, 28); // O
	glVertex2f(38.5, 28); // N
	glEnd();

	glBegin(GL_POLYGON); //HEAD
	glColor3f(0.56, 0.61, 0.71);
	glVertex2f(42.42, 31.11); // L
	glVertex2f(42.67, 33.09); // K
	glVertex2f(44.62, 34.41); // J
	glVertex2f(44.72, 36.37); // I
	glVertex2f(43.16, 38); // H
	glVertex2f(40, 38.5); // G
	glVertex2f(41, 37); // F
	glVertex2f(41.5, 36.5); // D2
	glVertex2f(41.5, 35); // E
	glVertex2f(39, 34.5); // D
	glVertex2f(36, 34.5); // C
	glVertex2f(35, 35); // Z
	glVertex2f(38.5, 28); // N
	glVertex2f(40.5, 29); // M
	glEnd();
	glBegin(GL_POLYGON); //HEAD
	glColor3f(0.56, 0.61, 0.71);
	glVertex2f(35, 35); // Z
	glVertex2f(35, 36.5); // W
	glVertex2f(36, 37.5); // V
	glVertex2f(36, 38.5); // U
	glVertex2f(34.5, 38.5); // T
	glVertex2f(32.5, 36.5); // S
	glVertex2f(32.5, 33.5); // R
	glVertex2f(34, 32.5); // Q
	glVertex2f(34, 30.5); // P
	glVertex2f(34, 28); // O
	glVertex2f(38.5, 28); // N
	glEnd();

	glBegin(GL_QUADS); //EYE
	glColor3f(0.1, 0.1, 0.1);
	glVertex2f(38.5, 32); // rA
	glVertex2f(40, 32); // rB
	glVertex2f(40, 30.5); // rC
	glVertex2f(38.5, 30.5); // rD
	glVertex2f(34, 32); // lA
	glVertex2f(35, 32); // lB
	glVertex2f(35, 30.5); // lC
	glVertex2f(34, 30.5); // lD
	glEnd();

	///2//////////////////////////////////////////
	glBegin(GL_POLYGON); //BODY
	glColor3f(0.04, 0.58, 0.85);
	glVertex2f(63, 25); // O
	glVertex2f(64, 20); // A
	glVertex2f(61, 20); // B
	glVertex2f(60, 22.5); // C
	glVertex2f(58.5, 22); // D
	glVertex2f(56, 23); // H
	glVertex2f(55, 23.5); // R
	glVertex2f(60, 23.5); // Q
	glVertex2f(60, 25); // P
	glEnd();
	glBegin(GL_POLYGON); //BODY
	glColor3f(0.04, 0.58, 0.85);
	glVertex2f(58.5, 22); // D
	glVertex2f(58, 20); // E
	glVertex2f(55, 20); // F
	glVertex2f(55, 22); // G
	glVertex2f(56, 23); // H
	glEnd();

	glBegin(GL_POLYGON); //HEAD
	glColor3f(0.56, 0.61, 0.71);
	glVertex2f(63, 25); // O
	glVertex2f(64, 26); // N
	glVertex2f(65.5, 26.5); // L
	glVertex2f(67, 28); // K
	glVertex2f(67, 33); // J
	glVertex2f(66.5, 35.5); // I
	glVertex2f(64, 38); // H
	glVertex2f(64, 32); // G
	glVertex2f(62, 31); // F
	glVertex2f(56, 31); // E
	glVertex2f(60, 25); // P
	glEnd();
	glBegin(GL_POLYGON); //HEAD
	glColor3f(0.56, 0.61, 0.71);
	glVertex2f(56, 31); // E
	glVertex2f(56, 38); // Z
	glVertex2f(54, 35.5); // W
	glVertex2f(52.5, 30.5); // U
	glVertex2f(53, 28); // T
	glVertex2f(54.5, 26); // S
	glVertex2f(55, 23.5); // R
	glVertex2f(60, 23.5); // Q
	glVertex2f(60, 25); // P
	glEnd();

	glBegin(GL_QUADS); //EYE
	glColor3f(0.1, 0.1, 0.1);
	glVertex2f(59, 28.5); // rA
	glVertex2f(61, 28.5); // rB
	glVertex2f(61, 26.5); // rC
	glVertex2f(58.5, 26.5); // rD
	glVertex2f(55.5, 28.5); // lA
	glVertex2f(54.5, 28.5); // lB
	glVertex2f(54.5, 26.5); // lC
	glVertex2f(56.5, 26.5); // lD
	glEnd();

	glFlush();
}

int main(int argc, char** argv) {

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(800, 900);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Character");
	glutDisplayFunc(mons1);
	gluOrtho2D(0, 70, 0, 70);
	glutMainLoop();

	return 0;
}
