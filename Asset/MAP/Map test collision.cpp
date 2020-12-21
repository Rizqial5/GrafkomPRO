#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <iostream>
using namespace std;

float x_move = 0.05f;
float y_move = 0.05f;
float x_pos;
float y_pos;
float x_char ;
float y_char ;


void kotak(void){
    float kir = 10;

    glBegin(GL_POLYGON);
    glColor3ub(0,180,0);
        glVertex2f(kir, 10);
        glVertex2f(15, 10);
        glVertex2f(15, 15);
        glVertex2f(10,15);

    glEnd();

}

void kotakpos(void){

    glPushMatrix();
    glTranslatef(17,22,0);
    glTranslatef(x_pos,0,0);
    kotak();
    glPopMatrix();

    //Pergerakan Obstacle


    if (x_pos>=13){
        x_move = -0.05f;
    } else if (x_pos <= -12){
        x_move = 0.05f;
    }
    if (y_pos>=13){
        y_move = -0.05f;
    } else if (y_pos <= -12){
        y_move = 0.05f;
    }

    //cout<<"kotakx : "<<x_pos<<endl;


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
    float speed = 0.05f;
    //bool  obstacle = false;
    glPushMatrix();
    glTranslatef(25,9,0);
    glTranslatef(x_char,y_char,0);
    chara();
    glPopMatrix();

    //19december

    if (x_char>=5){
       x_char += -speed;
    }
    else if (x_char<=-20){
       x_char += speed;
    }
    else if ((x_char>-15)&&(y_char>=21)||(x_char <= -16)&&(y_char>=21)){
       y_char += -speed;
    }
    else if ((x_char>-5)&&(y_char<=-4)||(x_char <= -6)&&(y_char<=-4)){
       y_char += speed;
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

    cout<<"x: "<<x_char<<endl;
    cout<<"y: " <<y_char<<endl;
    cout<<"soeed: " <<speed<<endl;


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
        glColor3ub(0,90,0);
        glVertex2f(19, 50);
        glVertex2f(19, 45);
        glVertex2f(25, 45);
        glVertex2f(25,50);
	glEnd();

	glBegin(GL_POLYGON);
        glColor3ub(0,180,0);
        glVertex2f(29, 15);
        glVertex2f(29, 10);
        glVertex2f(35, 10);
        glVertex2f(35,15);
	glEnd();

    glBegin(GL_QUADS);
        glColor3ub(0,0,0);
        glVertex2f(18, 30);
        glVertex2f(18, 26);
        glVertex2f(22, 26);
        glVertex2f(22, 30);
	glEnd();

    glBegin(GL_QUADS);
        glColor3ub(0,0,0);
        glVertex2f(28, 30);
        glVertex2f(28, 26);
        glVertex2f(32, 26);
        glVertex2f(32, 30);
	glEnd();

    glBegin(GL_QUADS);
        glColor3ub(0,0,0);
        glVertex2f(38, 30);
        glVertex2f(38, 26);
        glVertex2f(42, 26);
        glVertex2f(42, 30);
	glEnd();

    glBegin(GL_QUADS);
        glColor3ub(0,0,0);
        glVertex2f(22, 39);
        glVertex2f(22, 38);
        glVertex2f(25, 38);
        glVertex2f(25, 39);
	glEnd();

    glBegin(GL_QUADS);
        glColor3ub(0,0,0);
        glVertex2f(35, 39);
        glVertex2f(35, 38);
        glVertex2f(38, 38);
        glVertex2f(38, 39);
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
    y_pos+=y_move;
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
    //tembok();



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
