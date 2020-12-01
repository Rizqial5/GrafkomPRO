#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <iostream>
#include "Asset\Tantangan Tembok\tembok.cpp"
using namespace std;

float x_move = 0.25f;
float x_pos;
float y_pos;
float x_char ;
float y_char ;


void kotak(void){


    glBegin(GL_POLYGON);
    glColor3ub(0,180,0);
        glVertex2f(10, 10);
        glVertex2f(15, 10);
        glVertex2f(15, 15);
        glVertex2f(10,15);

    glEnd();

}

void kotakpos(void){

    glPushMatrix();
    glTranslatef(17,20,0);
    glTranslatef(x_pos,y_pos,0);
    kotak();
    glPopMatrix();

    //Pergerakan Obstacle


    if (x_pos>=13){
        x_move = -0.25f;
    } else if (x_pos <= -12){
        x_move = 0.25f;
    };
}




void chara(void){

    glBegin(GL_POLYGON);
    glColor3ub(0,180,0);
        glVertex2f(10, 10);
        glVertex2f(15, 10);
        glVertex2f(15, 15);
        glVertex2f(10,15);

    glEnd();

}

void charpos(void){
    float speed = 0.5f;
    //bool  obstacle = false;
    glPushMatrix();
    glTranslatef(25,9,0);
    glTranslatef(x_char,y_char,0);
    chara();
    glPopMatrix();


    if (x_char>=5){
       x_char += -speed;
    } else if (x_char <= -20){
        x_char+= speed ;
    }

    if (y_char>=21){
       y_char += -speed;
    } else if (y_char <= -4){
        y_char+= speed;
    }


    //if (obstacle == false){
        if (GetAsyncKeyState(VK_RIGHT)){
        x_char+= speed ;
        } else if (GetAsyncKeyState(VK_LEFT)){
        x_char += -speed;
        }
        if (GetAsyncKeyState(VK_UP)){
        y_char += speed;
        } else if (GetAsyncKeyState(VK_DOWN)){
        y_char += -speed;



    }



}


void stage1 (void){
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

}

void st_trans(void){
    glPushMatrix();
    glScalef(2,2,0);
    stage1();
    glPopMatrix();


}

void controller(int data){
    x_pos+=x_move;
   // y_pos+=grav;
    //grav-=0.01f;
    glutPostRedisplay();
    glutTimerFunc(1,controller,0);




}

void displayMe(void){
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    stage1();
    charpos();
    kotakpos();
    tembok();


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
	glutTimerFunc(1,controller,0);
	glutDisplayFunc(displayMe);
	gluOrtho2D(0, 60, 0, 60);
	myinit();
	glutMainLoop();
	return 0;
}
