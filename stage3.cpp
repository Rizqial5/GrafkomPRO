
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>


void *font3 = GLUT_BITMAP_TIMES_ROMAN_24;

void drawTulisan(int x, int y, const char *string) {
        glRasterPos2f(x, y);
        int len = (int)strlen(string);
        for (int i = 0; i < len; i++) {
                glutBitmapCharacter(font3, string[i]);
        }
}

void ended(void){


    glBegin(GL_POLYGON);
        glColor3ub(0,0,0);
        glVertex2f(0, 60);
        glVertex2f(0, 0);
        glVertex2f(60, 0);
        glVertex2f(60,60);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(0,0,0);
        glVertex2f(5, 5);
        glVertex2f(55, 5);
        glVertex2f(55, 55);
        glVertex2f(5,55);
        glEnd();
//hitam finish
        glBegin(GL_POLYGON);
        glColor3ub(0,0,0);
        glVertex2f(45, 0);
        glVertex2f(55, 0);
        glVertex2f(55, 5);
        glVertex2f(45, 5);
        glEnd();
//hijau start
        glBegin(GL_POLYGON);
        glColor3ub(0,0,0);
        glVertex2f(0, 40);
        glVertex2f(5, 40);
        glVertex2f(5, 55);
        glVertex2f(0, 55);
        glEnd();
    glColor3b(121,121,231);
        drawTulisan(10,40, "THE ADVENTURE OF GHIFFARI");
        drawTulisan(10,30, "GAME OVER");


}
