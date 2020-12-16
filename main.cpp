#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <iostream>
#include "Asset\Tantangan Tembok\tembok.cpp"
using namespace std;

#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <iostream>

using namespace std;

float x_move = 0.25f;
float y_move = 0.25f;
float x_pos;
float y_pos;
float x_char;
float y_char ;

float x_bataskiriChar = 0.5;
float x_bataskananChar = 9.5;
float y_batasatasChar = 14.5;
float y_batasbawahChar = 0;

float x_bataskiriBOX = 5;
float x_bataskananBOX = 34;
float y_batasatasBOX = 48;
float y_batasbawahBOX = 40;


void kotak(void){
    glBegin(GL_POLYGON);
        glColor3ub(0,0,0);
        glVertex2f(2, 6);
        glVertex2f(2, 0);
        glVertex2f(31, 0);
        glVertex2f(31,6);
	glEnd();
    // HIASAN
    glBegin(GL_POLYGON);
        glColor3ub(153,102,51);
        glVertex2f(3, 5);
        glVertex2f(3, 4);
        glVertex2f(9, 4);
        glVertex2f(9, 5);
	glEnd();

	glBegin(GL_POLYGON);
        glColor3ub(153,102,51);
        glVertex2f(10, 5);
        glVertex2f(10, 4);
        glVertex2f(13, 4);
        glVertex2f(13, 5);
	glEnd();
	glBegin(GL_POLYGON);
        glColor3ub(153,102,51);
        glVertex2f(14, 5);
        glVertex2f(14, 4);
        glVertex2f(20, 4);
        glVertex2f(20, 5);
	glEnd();
	glBegin(GL_POLYGON);
        glColor3ub(153,102,51);
        glVertex2f(21, 5);
        glVertex2f(21, 4);
        glVertex2f(24, 4);
        glVertex2f(24, 5);
	glEnd();
	glBegin(GL_POLYGON);
        glColor3ub(153,102,51);
        glVertex2f(25, 5);
        glVertex2f(25, 4);
        glVertex2f(31, 4);
        glVertex2f(31, 5);
	glEnd();
	glBegin(GL_POLYGON);
        glColor3ub(153,102,51);
        glVertex2f(3, 3);
        glVertex2f(3, 2);
        glVertex2f(6, 2);
        glVertex2f(6, 3);
	glEnd();
	glBegin(GL_POLYGON);
        glColor3ub(153,102,51);
        glVertex2f(7, 3);
        glVertex2f(7, 2);
        glVertex2f(13, 2);
        glVertex2f(13, 3);
	glEnd();
	glBegin(GL_POLYGON);
        glColor3ub(153,102,51);
        glVertex2f(14, 3);
        glVertex2f(14, 2);
        glVertex2f(17, 2);
        glVertex2f(17, 3);
	glEnd();

	glBegin(GL_POLYGON);
        glColor3ub(153,102,51);
        glVertex2f(18, 3);
        glVertex2f(18, 2);
        glVertex2f(23, 2);
        glVertex2f(23, 3);
	glEnd();
	glBegin(GL_POLYGON);
        glColor3ub(153,102,51);
        glVertex2f(24, 3);
        glVertex2f(24, 2);
        glVertex2f(27, 2);
        glVertex2f(27, 3);
	glEnd();
	glBegin(GL_POLYGON);
        glColor3ub(153,102,51);
        glVertex2f(28, 3);
        glVertex2f(28, 2);
        glVertex2f(31, 2);
        glVertex2f(31, 3);
	glEnd();
	glBegin(GL_POLYGON);
        glColor3ub(153,102,51);
        glVertex2f(3, 1);
        glVertex2f(3, 0);
        glVertex2f(31, 0);
        glVertex2f(31, 1);
	glEnd();

	// RANJAU
	glBegin(GL_POLYGON);
        glColor3ub(255,255,255);
        glVertex2f(4, 6);
        glVertex2f(6, 6);
        glVertex2f(5, 8);
	glEnd();
	glBegin(GL_POLYGON);
        glColor3ub(51,51,51);
        glVertex2f(4, 6);
        glVertex2f(4.5, 6);
        glVertex2f(4.5, 8);
	glEnd();

	glBegin(GL_POLYGON);
        glColor3ub(255,255,255);
        glVertex2f(9, 6);
        glVertex2f(11, 6);
        glVertex2f(10, 8);
	glEnd();
	glBegin(GL_POLYGON);
        glColor3ub(51,51,51);
        glVertex2f(9, 6);
        glVertex2f(9.5, 6);
        glVertex2f(9.5, 8);
	glEnd();

	glBegin(GL_POLYGON);
        glColor3ub(255,255,255);
        glVertex2f(20, 6);
        glVertex2f(22, 6);
        glVertex2f(21, 8);
	glEnd();
	glBegin(GL_POLYGON);
        glColor3ub(51,51,51);
        glVertex2f(20, 6);
        glVertex2f(20.5, 6);
        glVertex2f(20.5, 8);
	glEnd();

	glBegin(GL_POLYGON);
        glColor3ub(255,255,255);
        glVertex2f(26, 6);
        glVertex2f(28, 6);
        glVertex2f(27, 8);
	glEnd();
	glBegin(GL_POLYGON);
        glColor3ub(51,51,51);
        glVertex2f(26, 6);
        glVertex2f(26.5, 6);
        glVertex2f(26.5, 8);
	glEnd();

	//PISAU
    glBegin(GL_POLYGON);
        glColor3ub(255,51,0);
        glVertex2f(14, 6.4);
        glVertex2f(14, 6);
        glVertex2f(15, 6);
        glVertex2f(15, 6.4);
	glEnd();

	glBegin(GL_POLYGON);
        glColor3ub(255,255,255);
        glVertex2f(14.3, 6.4);
        glVertex2f(14.6, 6.4);
        glVertex2f(14.6, 7.8);
        glVertex2f(14.3, 7.6);
	glEnd();


}

void kotakpos(void){

    glPushMatrix();
    glTranslatef(3,40,0);
    glTranslatef(x_pos,y_pos,0);
    kotak();
    glPopMatrix();

    //Pergerakan Obstacle


    if (x_pos>=21){
        x_move = -0.15f;


    } else if (x_pos <= 0){
        x_move = 0.15f;
    };


}

void chara(void){

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

}

void charpos(void){
    float speed = 0.25f;
    //bool  obstacle = false;
    glPushMatrix();

    glTranslatef(x_char,y_char,0);

    chara();

    glPopMatrix();


    /*if (x_char>=26){
       x_char += -speed;
    } else if (x_char <= -20){
        x_char+= speed ;
    }

    if (y_char>=40){
       y_char += -speed;
    } else if (y_char <= -4){
        y_char+= speed;
    }*/


    //if (obstacle == false){
        if (GetAsyncKeyState(VK_RIGHT)){
        x_char+= speed ;
        x_bataskananChar += speed;
        x_bataskiriChar += speed;
        } else if (GetAsyncKeyState(VK_LEFT)){
        x_char += -speed;
        x_bataskiriChar += -speed;
        x_bataskananChar += -speed;
        }
        if (GetAsyncKeyState(VK_UP)){
        y_char += speed;
        y_batasatasChar += speed;
        y_batasbawahChar += speed;

        } else if (GetAsyncKeyState(VK_DOWN)){
        y_char += -speed;
        y_batasbawahChar += -speed;
        y_batasatasChar += -speed;
        }
        //cout<<"x kiri : "<<x_bataskiriChar<<endl;
       // cout<<"x kanan : "<<x_bataskananChar<<endl;




}

void collider(void){

    if (y_batasbawahBOX<=y_batasatasChar && y_batasatasChar<= y_batasatasBOX && x_bataskananBOX>=x_bataskananChar && x_bataskananChar>= x_bataskiriBOX ){
        cout<<"cok"<<endl;
    }
    if (y_batasbawahBOX<=y_batasbawahChar && y_batasbawahChar<= y_batasatasBOX && x_bataskananBOX>=x_bataskananChar && x_bataskananChar>= x_bataskiriBOX ){
        cout<<"cok"<<endl;
    }

}


void stage1 (void){
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
        glVertex2f(5, 55);
        glVertex2f(15, 55);
        glVertex2f(15, 60);
        glVertex2f(5,60);
	glEnd();

	glBegin(GL_POLYGON);
        glColor3ub(0,180,0);
        glVertex2f(45, 0);
        glVertex2f(55, 0);
        glVertex2f(55, 5);
        glVertex2f(45,5);
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
    x_bataskiriBOX += x_move;
    x_bataskananBOX +=x_move;
    //cout<<"x kiri : "<<x_bataskiriBOX<<endl;
    //cout<<"x kananbox : "<<x_bataskananBOX<<endl;

   // y_pos+=grav;
    //grav-=0.01f;
    glutPostRedisplay();
    glutTimerFunc(1,controller,0);
}

void output(int x, int y, float r, float g, float b, char *string, void *font) {
    glColor3f(r, g, b);
    glRasterPos2f(x, y);
    int len, i;
    len = (int) strlen(string);
    for (i = 0; i < len; i++) {
        glutBitmapCharacter(font, string[i]);
    }
}
void displayMe(void){
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    stage1();
    charpos();
    kotakpos();
    collider();
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
