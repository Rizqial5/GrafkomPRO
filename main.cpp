#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <iostream>
#include "Asset\Tantangan Tembok\tembok.cpp"
#include "Asset\DesainCharInsya\Char.cpp"
#include "Asset\Peluru bintang versi kecil\main.cpp"
#include "stage2.cpp"
using namespace std;

#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <iostream>
#include<stdio.h>
#include <fstream>
#define ROWS 60
#define COLUMNS 60
#define UP 1
#define RIGHT 2
#define DOWN -1
#define LEFT -2


using namespace std;


float x_move = 0.2f;
float y_move = 0.2f;
float x_pos;
float y_pos;
float x_char;
float x_char2;
float y_char ;
float y_char2 ;
float speed = 0.2f;

float x_bataskiriChar = 45.5;
float x_bataskananChar = 54.5;
float y_batasatasChar = 19.5;
float y_batasbawahChar = 5;

float x_bataskiriChar2 = 5.5;
float x_bataskananChar2 = 14.5;
float y_batasatasChar2 = 18.5;
float y_batasbawahChar2 = 4;

float x_bataskiriBOX = 5;
float x_bataskananBOX = 34;
float y_batasatasBOX = 48;
float y_batasbawahBOX = 40;

float x_bataskananpeluru = 30.5;
float x_bataskiripeluru = 28;
float y_batasataspeluru = 57;
float y_batasbawahpeluru = 55;

float y_peluru;


int nyawa = 100;
int score ;
char cetakScore[1000];
char cetakNyawa[1000];

void *font = GLUT_BITMAP_HELVETICA_12;
void *font2 = GLUT_BITMAP_TIMES_ROMAN_24;

bool CharUp = true;
bool CharDown;

bool rintangan1 = true;
bool rintangan2;


void kotakKeterangan(void){
    glBegin(GL_POLYGON);
        glColor3ub(102,255,204);
        glVertex2f(60, 0);
        glVertex2f(100, 0);
        glVertex2f(100, 60);
        glVertex2f(60,60);
	glEnd();
    glBegin(GL_POLYGON);
        glColor3ub(0,255,204);
        glVertex2f(65, 45);
        glVertex2f(95, 45);
        glVertex2f(95,50);
        glVertex2f(65, 50);
	glEnd();
}
void levelHati(void){
    glColor3f(1.0,0.0,100);
    glBegin(GL_POLYGON);
    glVertex2f(2.4,0.32);
    glVertex2f(2.14,0.52);
    glVertex2f(1.92,0.71);
    glVertex2f(1.75,0.9);//c
    glVertex2f(1.61,1.08);//d
    glVertex2f(1.52,1.29);//e
    glVertex2f(1.58,1.52);//f
    glVertex2f(1.77,1.66);//g
    glVertex2f(1.95,1.75);//h
    glVertex2f(2.11,1.72);//a1
    glVertex2f(2.24,1.6);//B1
    glVertex2f(2.34,1.45);//I1
    glVertex2f(2.41,1.29);//J1
    glVertex2f(2.51,1.45);//K1
    glVertex2f(2.64,1.59);//L1
    glVertex2f(2.78,1.73);//M1
    glVertex2f(3,1.76);//N1
    glVertex2f(3.16,1.65);//O1
    glVertex2f(3.28,1.48);//P1
    glVertex2f(3.34,1.26);//Q1
    glVertex2f(3.23,1.06);//R1
    glVertex2f(3.08,0.88);//T1
    glVertex2f(2.89,0.71);//U1
    glVertex2f(2.67,0.52);//V1
    glEnd();

}
void levelHati1(void){
    glColor3f(1.0,0.0,100);
    glBegin(GL_POLYGON);
    glVertex2f(2.4,0.32);
    glVertex2f(2.14,0.52);
    glVertex2f(1.92,0.71);
    glVertex2f(1.75,0.9);//c
    glVertex2f(1.61,1.08);//d
    glVertex2f(1.52,1.29);//e
    glVertex2f(1.58,1.52);//f
    glVertex2f(1.77,1.66);//g
    glVertex2f(1.95,1.75);//h
    glVertex2f(2.11,1.72);//a1
    glVertex2f(2.24,1.6);//B1
    glVertex2f(2.34,1.45);//I1
    glVertex2f(2.41,1.29);//J1
    glVertex2f(2.51,1.45);//K1
    glVertex2f(2.64,1.59);//L1
    glVertex2f(2.78,1.73);//M1
    glVertex2f(3,1.76);//N1
    glVertex2f(3.16,1.65);//O1
    glVertex2f(3.28,1.48);//P1
    glVertex2f(3.34,1.26);//Q1
    glVertex2f(3.23,1.06);//R1
    glVertex2f(3.08,0.88);//T1
    glVertex2f(2.89,0.71);//U1
    glVertex2f(2.67,0.52);//V1
    glEnd();

}
void levelHati2(void){
    glColor3f(1.0,0.0,100);
    glBegin(GL_POLYGON);
    glVertex2f(2.4,0.32);
    glVertex2f(2.14,0.52);
    glVertex2f(1.92,0.71);
    glVertex2f(1.75,0.9);//c
    glVertex2f(1.61,1.08);//d
    glVertex2f(1.52,1.29);//e
    glVertex2f(1.58,1.52);//f
    glVertex2f(1.77,1.66);//g
    glVertex2f(1.95,1.75);//h
    glVertex2f(2.11,1.72);//a1
    glVertex2f(2.24,1.6);//B1
    glVertex2f(2.34,1.45);//I1
    glVertex2f(2.41,1.29);//J1
    glVertex2f(2.51,1.45);//K1
    glVertex2f(2.64,1.59);//L1
    glVertex2f(2.78,1.73);//M1
    glVertex2f(3,1.76);//N1
    glVertex2f(3.16,1.65);//O1
    glVertex2f(3.28,1.48);//P1
    glVertex2f(3.34,1.26);//Q1
    glVertex2f(3.23,1.06);//R1
    glVertex2f(3.08,0.88);//T1
    glVertex2f(2.89,0.71);//U1
    glVertex2f(2.67,0.52);//V1
    glEnd();

}
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

void posBintang(void){
    glPushMatrix();
    glTranslatef(25,52.5,0);
    bintang();
    glPopMatrix();


}


void peluru(void){


    glPushMatrix();

         if(rintangan2==true){
        glTranslatef(25,52.5,0);

        y_peluru += -0.5;

        y_batasataspeluru += -0.5;
        y_batasbawahpeluru += -0.5;
        glTranslatef(0,y_peluru,0);

        bintang();
        if (y_peluru <= -60){
        y_peluru = 0;


        y_batasataspeluru = 57;
        y_batasbawahpeluru = 55;
        }

    }



    glPopMatrix();

    cout<<"y peluru : "<<y_batasbawahpeluru<<endl;


}


void kotakpos(void){

    glPushMatrix();
    glTranslatef(3,40,0);
    glTranslatef(x_pos,y_pos,0);
    kotak();
    glPopMatrix();

    //Pergerakan Obstacle


    if (x_pos>=21){
        x_move = -0.2f;


    } else if (x_pos <= 0){
        x_move = 0.2f;
    };


}

void colliST1(void){
    if (x_char>=1){
       x_char += -speed;
       x_bataskananChar += -speed;
       x_bataskiriChar  += -speed;

    } else if (x_char <= -41){
        x_char+= speed ;
        x_bataskiriChar += speed;
        x_bataskananChar += speed;
    }

    if (y_char>=45){
        y_char += -speed;
        y_batasatasChar += -speed;
        y_batasbawahChar += -speed;
        if(x_char <= -35){
            y_char += speed;
            y_batasatasChar += speed;
            y_batasbawahChar += speed;
        }

    } else if (y_char <= -1){
        y_char+= speed;
        y_batasatasChar += speed;
        y_batasbawahChar += speed;
    }
}

void colliST2(void){
    if (x_char>=41){
       x_char += -speed;
       x_bataskananChar += -speed;
       x_bataskiriChar  += -speed;

    } else if (x_char <= -1){
        x_char+= speed ;
        x_bataskiriChar += speed;
        x_bataskananChar += speed;
    }

    if (y_char2>=45){
        y_char2 += -speed;
        y_batasatasChar += -speed;
        y_batasbawahChar += -speed;

    } else if (y_char2 <= 4){
        y_char2 += speed;
        y_batasatasChar += speed;
        y_batasbawahChar += speed;
    }


}

void colliSTp(void){
    if(rintangan1 == true){
        colliST1();
    } else if (rintangan2 == true){
        colliST2();
    }


}
void charpos(void){

    speed = 0.2f;
    //bool  obstacle = false;
    glPushMatrix();

    if(rintangan1 == true){
        glTranslatef(45,5,0);
        glTranslatef(x_char,y_char,0);
        if(CharUp == true){
            upchar();
        }
        else if(CharDown == true){
            chara();
        }


    } else if (rintangan2 == true){

        glTranslatef(5,0,0);
        glTranslatef(x_char,y_char2,0);
        if(CharUp == true){
            upchar();
        }
        else if(CharDown == true){
            chara();
        }


    }

    glTranslatef(x_char,y_char,0);


    glPopMatrix();


    colliSTp();


    if (rintangan1 == true){
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
         if(rintangan2 == true){
            y_char2 += speed;
         }
        y_batasatasChar += speed;
        y_batasbawahChar += speed;
        CharUp = true;
        CharDown = false;

        } else if (GetAsyncKeyState(VK_DOWN)){
        y_char += -speed;
        if(rintangan2 == true){
            y_char2 += -speed;
         }
        y_batasbawahChar += -speed;
        y_batasatasChar += -speed;
        CharUp = false;
        CharDown =true;
        }
    }
    else if (rintangan2 == true){
        if (GetAsyncKeyState(VK_RIGHT)){
        x_char+= speed ;

        x_bataskananChar2 += speed;
        x_bataskiriChar2 += speed;
        } else if (GetAsyncKeyState(VK_LEFT)){
        x_char += -speed;

        x_bataskiriChar2 += -speed;
        x_bataskananChar2 += -speed;
        }
        if (GetAsyncKeyState(VK_UP)){
        y_char += speed;
         if(rintangan2 == true){
            y_char2 += speed;
         }
        y_batasatasChar2 += speed;
        y_batasbawahChar2 += speed;
        CharUp = true;
        CharDown = false;

        } else if (GetAsyncKeyState(VK_DOWN)){
        y_char += -speed;
        if(rintangan2 == true){
            y_char2 += -speed;
         }
        y_batasbawahChar2 += -speed;
        y_batasatasChar2 += -speed;
        CharUp = false;
        CharDown =true;
        }
    }



       cout<<"y : "<<y_batasatasChar2<<endl;


}
void posisiHati(void){

    glPushMatrix();
    if (nyawa >= 25){
        glTranslatef(65,46.5,0);
        levelHati();
    }
    glPopMatrix();
}
void posisiHati1(void){

    glPushMatrix();
    if (nyawa >= 50){
        glTranslatef(70,46.5,0);
        levelHati1();
    }
    glPopMatrix();

}
void posisiHati2(void){

    glPushMatrix();
    if (nyawa >= 75){
        glTranslatef(75,46.5,0);
        levelHati2();
    }
    glPopMatrix();

}
void collider(void){
    if (rintangan1 == true){
         if (y_batasbawahBOX<=y_batasatasChar && y_batasatasChar<= y_batasatasBOX && x_bataskananBOX>=x_bataskananChar && x_bataskananChar>= x_bataskiriBOX ){
            nyawa -= 5;
            y_char -= speed;
            y_batasatasChar -= speed;
            }

         else if (y_batasbawahBOX<=y_batasbawahChar && y_batasbawahChar<= y_batasatasBOX && x_bataskananBOX>=x_bataskananChar && x_bataskananChar>= x_bataskiriBOX ){
            nyawa -= 5;
            y_char += speed;
            y_batasbawahChar += speed;
            }
    }
    else if (rintangan2 == true){
        if ( y_batasataspeluru <= y_batasatasChar2&&
            y_batasataspeluru>= y_batasbawahChar2 &&
             y_batasbawahpeluru <= y_batasatasChar2&&
            y_batasbawahpeluru>= y_batasbawahChar2 &&
            x_bataskiripeluru >= x_bataskiriChar2 &&
            x_bataskiripeluru <= x_bataskananChar2&&
            x_bataskananpeluru >= x_bataskiriChar2 &&
            x_bataskananpeluru <= x_bataskananChar2 ){
            nyawa -= 0.5;
        }
    }



    if (nyawa == 0){
        printf("GAME OVER");
        glutDestroyWindow(0);
        //exit(0);
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
void stagesatuisi(void){
    glPushMatrix();
    stage1();
    charpos();
    kotakpos();
    collider();


    glPopMatrix();


}
void stageduaisi(void){
    glPushMatrix();
    stage2();
    charpos();
    posBintang();
    peluru();

    collider();

    glPopMatrix();

}
void selectorSt(void){
    glPushMatrix();;
        if(rintangan1 == true){
            stagesatuisi();
        }
        else if (rintangan2 == true){
            stageduaisi();
        }
    glPopMatrix();

    if(GetAsyncKeyState(VK_NUMPAD2)){
        rintangan1 = true;
        rintangan2 = false;
    } else if ( /*y_char>=45 && x_char <= -35*/ GetAsyncKeyState(VK_SPACE)){
        rintangan1 = false;
        rintangan2 = true;
    }


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
void drawText(int x, int y, const char *string) {
	glRasterPos2f(x, y);
	int len = (int)strlen(string);
	for (int i = 0; i < len; i++) {
		glutBitmapCharacter(font2, string[i]);
	}
}
void judul(void){
    glBegin(GL_POLYGON);
        glColor3ub(1,152,0);
        glVertex2f(15, 55);
        glVertex2f(50, 55);
        glVertex2f(50, 60);
        glVertex2f(15,60);
        glColor3ub(1,2,0);
        drawText(15,57, "THE ADVENTURE OF GHIFFARI");
	glEnd();
}
void displayMe(void){

    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();

    selectorSt();
    kotakKeterangan();
    posisiHati();
    posisiHati1();
    posisiHati2();




   // judul();

    glPopMatrix();
    glColor3f(0, 0, 0);

//    sprintf(cetakScore, "%d", score);
    sprintf(cetakNyawa, "%d", nyawa);

//    drawText(1, 40, "Score: ");
//	drawText(9, 40, cetakScore);
	drawText(65, 51, "Nyawa: ");
	drawText(68, 55, "The Adventure of Ghifari");
	drawText(9, 44, cetakNyawa);

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
	glutInitWindowSize(1000, 600);
	glutInitWindowPosition(0,0);
	glutCreateWindow("Sepupu Steanly");
	glutTimerFunc(1,controller,0);
	glutDisplayFunc(displayMe);
	gluOrtho2D(0, 100, 0, 60);
	myinit();
	glutMainLoop();
	return 0;
}
