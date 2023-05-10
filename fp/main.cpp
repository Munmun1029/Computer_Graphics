#include<cstdio>
#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>

using namespace std;


//all position function creating globally


GLfloat position = 0.0f;
GLfloat speed = 0.05f;

void update(int value) {

    if(position > 2.0)
        position = -0.0f;

        position += speed;

       glutPostRedisplay();
       glutTimerFunc(100, update, 0);
}

GLfloat position1 = 0.0f;
GLfloat speed1 = 0.07f;

void update1(int value) {
    if(position1 >2.0)
       position1 =-0.0f;

    position1 += speed1;

    glutPostRedisplay();
    glutTimerFunc(100, update1, 0);
}

GLfloat position2 = -0.2f;
GLfloat speed2 = 0.01f;


void update2(int value) {
    if(position2 >0.5)
       position2 =-0.2f;

    position2 += speed2;

    glutPostRedisplay();
    glutTimerFunc(100, update2, 0);
}

GLfloat position3 = 0.0f;
GLfloat speed3 = 0.06f;

void update3(int value) {
    if(position3 >2.0)
       position3 =-0.0f;

    position3 += speed3;

    glutPostRedisplay();
    glutTimerFunc(100, update3, 0);
}

GLfloat position4 = 0.0f;
GLfloat speed4 = 0.06f;

void update4(int value) {
    if(position4 <-2.0)
       position4 =0.0f;

    position4 -= speed4;

    glutPostRedisplay();
    glutTimerFunc(100, update4, 0);
}

// for night shift

float _night = 0.0;
bool onOff;
bool night = false;
void Night(int value){

if(Night){

    glClearColor(0.0,0.0,0.0,0.0);
	glutPostRedisplay();
    glutTimerFunc(5, Night, 0);
    glFlush();

}
}

void myKeyboard(unsigned char key, int x, int y){
	switch (key)
	{
    case 'n':
        night = true;
        Night(_night);


	break;
	}
}

//end night shift

//design part

void display() {

	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(7.5);




// stars

	glPointSize(3);
    glBegin(GL_POINTS);
	glColor3ub(255,255,255);
    glVertex2f(-1.7f, 1.8f);
    glVertex2f(-1.8f, 1.7f);
    glVertex2f(-1.9f, 1.9f);
    glVertex2f(-1.6f, 1.8f);
    glVertex2f(-1.5f, 1.9f);
    glVertex2f(-1.2f, 1.8f);
    glVertex2f(-1.3f, 1.6f);
    glVertex2f(-1.1f, 1.9f);
    glVertex2f(-1.0f, 1.8f);
    glVertex2f(1.1f,  1.8f);
    glVertex2f(1.2,   1.8f);
    glVertex2f(1.3f, 1.5f);
    glVertex2f(1.4f, 1.9f);
    glVertex2f(1.5f, 1.0f);
    glVertex2f(1.6f, 1.9f);
    glVertex2f(1.7f, 1.9f);
    glVertex2f(1.8f, 1.8f);

    glVertex2f(-0.7f, 1.8f);
    glVertex2f(-0.8f, 1.7f);
    glVertex2f(-0.9f, 1.9f);
    glVertex2f(-0.6f, 1.8f);
    glVertex2f(-0.5f, 1.9f);
    glVertex2f(-0.2f, 1.8f);
    glVertex2f(-0.3f, 1.6f);
    glVertex2f(-0.1f, 1.9f);
    glVertex2f(-0.0f, 1.8f);
    glVertex2f(0.1f,  1.8f);
    glVertex2f(0.2,   1.8f);
    glVertex2f(0.3f, 1.5f);
    glVertex2f(0.4f, 1.9f);
    glVertex2f(0.5f, 1.0f);
    glVertex2f(0.6f, 1.9f);
    glVertex2f(0.7f, 1.9f);
    glVertex2f(0.8f, 1.8f);
    glEnd();

//bridge

    glBegin(GL_QUADS);
	glColor3f(0.34f, 0.34f, 0.34f);
	glVertex2f(-1.0f, 0.35f);
	glVertex2f(1.0f, 0.35f);
	glVertex2f(1.0f, 0.0f);
	glVertex2f(-1.0f, 0.0f);
    glEnd();

//broken white line (left)

    glLineWidth(5);
    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, 0.1f);
	glVertex2f(-0.9f, 0.1f);
    glEnd();

//broken white line (right)

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, 0.26f);
	glVertex2f(-0.9f, 0.26f);
    glEnd();

//broken white line (left)

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, 0.1f);
	glVertex2f(-0.7f, 0.1f);
    glEnd();

//broken white line (right)

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, 0.26f);
	glVertex2f(-0.7f, 0.26f);
    glEnd();

//broken white line (left)

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, 0.1f);
	glVertex2f(-0.5f, 0.1f);
    glEnd();

//broken white line (right)

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, 0.26f);
	glVertex2f(-0.5f, 0.26f);
    glEnd();

//broken white line (left)

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, 0.1f);
	glVertex2f(-0.3f, 0.1f);
    glEnd();

//broken white line (right)

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, 0.26f);
	glVertex2f(-0.3f, 0.26f);
    glEnd();

 //broken white line (left)

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, 0.1f);
	glVertex2f(-0.1f, 0.1f);
    glEnd();

//broken white line (right)

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, 0.26f);
	glVertex2f(-0.1f, 0.26f);
    glEnd();

//broken white line (left)

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, 0.1f);
	glVertex2f(0.1f, 0.1f);
    glEnd();

//broken white line (right)

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, 0.26f);
	glVertex2f(0.1f, 0.26f);
    glEnd();

//broken white line (left)

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, 0.1f);
	glVertex2f(0.3f, 0.1f);
    glEnd();

//broken white line (right)

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, 0.26f);
	glVertex2f(0.3f, 0.26f);
    glEnd();

//broken white line (left)

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, 0.1f);
	glVertex2f(0.5f, 0.1f);
    glEnd();

//broken white line (right)

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, 0.26f);
	glVertex2f(0.5f, 0.26f);
    glEnd();

//broken white line (left)

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, 0.1f);
	glVertex2f(0.7f, 0.1f);
    glEnd();


//broken white line (right)

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, 0.26f);
	glVertex2f(0.7f, 0.26f);
    glEnd();

//broken white line (left)

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, 0.1f);
	glVertex2f(0.9f, 0.1f);
    glEnd();

//broken white line (right)

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, 0.26f);
	glVertex2f(0.9f, 0.26f);
    glEnd();

 //broken white line (left)

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, 0.1f);
	glVertex2f(1.0f, 0.1f);
    glEnd();

//broken white line (right)

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, 0.26f);
	glVertex2f(1.0f, 0.26f);
    glEnd();


//bridge portion

    glLineWidth(25);
    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(-1.0f, 0.35f);
	glVertex2f(1.0f, 0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(1.0f, 0.0f);
	glVertex2f(-1.0f, 0.0f);
    glEnd();

    glLineWidth(10);
    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(-1.0f, 0.18f);
	glVertex2f(1.0f, 0.18f);
    glEnd();

// river portion

   glBegin(GL_QUADS);
	glColor3f(0.0f, 0.5f, 0.9f);
	glVertex2f(-1.0f, 0.0f);
	glVertex2f(1.0f, 0.0f);
	glVertex2f(1.0f, -1.0f);
	glVertex2f(-1.0f, -1.0f);
	glEnd();

 // port part

	 glBegin(GL_QUADS);
	glColor3f(0.34f, 0.34f, 0.34f);
	glVertex2f(0.3f, -0.6f);
	glVertex2f(1.0f, -0.6f);
	glVertex2f(1.0f, -1.0f);
	glVertex2f(0.3f, -1.0f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(0.3f, -0.6f);
	glVertex2f(1.0f, -0.6f);

	glEnd();

	 glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.6f, -0.5f);
	glVertex2f(1.0f, -0.5f);
	glVertex2f(1.0f, -0.585f);
	glVertex2f(0.6f, -0.585f);

	glEnd();

	 glBegin(GL_QUADS);
	glColor3f(0.0f, 0.7f, 0.0f);
	glVertex2f(0.9f, -0.5f);
	glVertex2f(1.0f, -0.5f);
	glVertex2f(1.0f, -0.585f);
	glVertex2f(0.9f, -0.585f);

	glEnd();

	 glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.7f, -0.5f);
	glVertex2f(0.8f, -0.5f);
	glVertex2f(0.8f, -0.585f);
	glVertex2f(0.7f, -0.585f);

	glEnd();

	 glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.7f, -0.42f);
	glVertex2f(1.0f, -0.42f);
	glVertex2f(1.0f, -0.5f);
	glVertex2f(0.7f, -0.5f);

	glEnd();

	 glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(0.9f, -0.42f);
	glVertex2f(0.8f, -0.42f);
	glVertex2f(0.8f, -0.5f);
	glVertex2f(0.9f, -0.5f);

	glEnd();

	 glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.8f, -0.34f);
	glVertex2f(1.0f, -0.34f);
	glVertex2f(1.0f, -0.42f);
	glVertex2f(0.8f, -0.42f);

	glEnd();

	 glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.9f, -0.34f);
	glVertex2f(1.0f, -0.34f);
	glVertex2f(1.0f, -0.42f);
	glVertex2f(0.9f, -0.42f);

	glEnd();

	 glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.9f, -0.26f);
	glVertex2f(1.0f, -0.26f);
	glVertex2f(1.0f, -0.34f);
	glVertex2f(0.9f, -0.34f);

	glEnd();

	glLineWidth(5);

	glBegin(GL_LINES);
	glColor3f(0.9f, 0.0f, 0.0f);
	glVertex2f(0.6f, -0.5f);
	glVertex2f(1.0f, -0.5f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.9f, 0.0f, 0.0f);
	glVertex2f(0.7f, -0.42f);
	glVertex2f(1.0f, -0.42f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.9f, 0.0f, 0.0f);
	glVertex2f(0.8f, -0.34f);
	glVertex2f(1.0f, -0.34f);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.9f, 0.0f, 0.0f);
	glVertex2f(0.9f, -0.26f);
	glVertex2f(1.0f, -0.26f);
	glEnd();

glLineWidth(10);
	glBegin(GL_LINES);
	glColor3f(0.9f, 0.0f, 0.0f);
	glVertex2f(0.5f, -0.15f);
	glVertex2f(0.5f, -0.6f);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.9f, 0.0f, 0.0f);
	glVertex2f(0.4f, -0.1f);
	glVertex2f(0.4f, -0.6f);

	glEnd();

	glLineWidth(15);
	glBegin(GL_LINES);
	glColor3f(0.9f, 0.0f, 0.0f);
	glVertex2f(0.4f, -0.5f);
	glVertex2f(0.5f, -0.5f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.9f, 0.0f, 0.0f);
	glVertex2f(0.2f, -0.3f);
	glVertex2f(0.6f, -0.3f);

	glEnd();
glLineWidth(10);
glBegin(GL_LINES);
	glColor3f(0.9f, 0.0f, 0.0f);
	glVertex2f(0.4f, -0.2f);
	glVertex2f(0.5f, -0.2f);

	glEnd();

glLineWidth(5);

glBegin(GL_LINES);
	glColor3f(0.9f, 0.0f, 0.0f);
	glVertex2f(0.4f, -0.3f);
	glVertex2f(0.5f, -0.5f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.9f, 0.0f, 0.0f);
	glVertex2f(0.4f, -0.15f);
	glVertex2f(0.25f, -0.3f);

	glEnd();


//river views

glPushMatrix();
//boat
//boat 1
    glTranslatef(position2,0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3f(0.4f, 0.4f, 0.0f);
	glVertex2f(-0.87f, -0.7f);
	glVertex2f(-0.75f, -0.7f);
	glVertex2f(-0.75f, -0.8f);
	glVertex2f(-0.87f, -0.8f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.9f, -0.8f);
	glVertex2f(-0.7f, -0.8f);
	glVertex2f(-0.73f, -0.85f);
	glVertex2f(-0.87f, -0.85f);

	glEnd();

//boat 2

	glBegin(GL_QUADS);
	glColor3f(0.4f, 0.4f, 0.0f);
	glVertex2f(-0.57f, -0.7f);
	glVertex2f(-0.45f, -0.7f);
	glVertex2f(-0.45f, -0.8f);
	glVertex2f(-0.57f, -0.8f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.6f, -0.8f);
	glVertex2f(-0.4f, -0.8f);
	glVertex2f(-0.43f, -0.85f);
	glVertex2f(-0.57f, -0.85f);

	glEnd();

//ship1
//ship1 lower portion

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.7f, -0.45f);
	glVertex2f(-0.2f, -0.45f);
	glVertex2f(-0.3f, -0.55f);
	glVertex2f(-0.6f, -0.55f);

	glEnd();

 //ship1 middle portion & windows

	glBegin(GL_QUADS);
	glColor3f(0.4f, 0.4f, 0.0f);
	glVertex2f(-0.6f, -0.35f);
	glVertex2f(-0.3f, -0.35f);
	glVertex2f(-0.3f, -0.45f);
	glVertex2f(-0.6f, -0.45f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.58f, -0.36f);
	glVertex2f(-0.55f, -0.36f);
	glVertex2f(-0.55f, -0.41f);
	glVertex2f(-0.58f, -0.41f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.54f, -0.36f);
	glVertex2f(-0.51f, -0.36f);
	glVertex2f(-0.51f, -0.41f);
	glVertex2f(-0.54f, -0.41f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.50f, -0.36f);
	glVertex2f(-0.47f, -0.36f);
	glVertex2f(-0.47f, -0.41f);
	glVertex2f(-0.50f, -0.41f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.46f, -0.36f);
	glVertex2f(-0.43f, -0.36f);
	glVertex2f(-0.43f, -0.41f);
	glVertex2f(-0.46f, -0.41f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.42f, -0.36f);
	glVertex2f(-0.39f, -0.36f);
	glVertex2f(-0.39f, -0.41f);
	glVertex2f(-0.42f, -0.41f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.38f, -0.36f);
	glVertex2f(-0.35f, -0.36f);
	glVertex2f(-0.35f, -0.41f);
	glVertex2f(-0.38f, -0.41f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.34f, -0.36f);
	glVertex2f(-0.31f, -0.36f);
	glVertex2f(-0.31f, -0.41f);
	glVertex2f(-0.34f, -0.41f);

	glEnd();


   glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(-0.55f, -0.25f);
	glVertex2f(-0.35f, -0.25f);
	glVertex2f(-0.35f, -0.35f);
	glVertex2f(-0.55f, -0.35f);

	glEnd();

	 glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.54f, -0.26f);
	glVertex2f(-0.51f, -0.26f);
	glVertex2f(-0.51f, -0.31f);
	glVertex2f(-0.54f, -0.31f);

	glEnd();

	 glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.50f, -0.26f);
	glVertex2f(-0.47f, -0.26f);
	glVertex2f(-0.47f, -0.31f);
	glVertex2f(-0.50f, -0.31f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.46f, -0.26f);
	glVertex2f(-0.43f, -0.26f);
	glVertex2f(-0.43f, -0.31f);
	glVertex2f(-0.46f, -0.31f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.42f, -0.26f);
	glVertex2f(-0.39f, -0.26f);
	glVertex2f(-0.39f, -0.31f);
	glVertex2f(-0.42f, -0.31f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.38f, -0.26f);
	glVertex2f(-0.36f, -0.26f);
	glVertex2f(-0.36f, -0.31f);
	glVertex2f(-0.38f, -0.31f);

	glEnd();

glPopMatrix();


//ship2
//ship2 lower portion
glPushMatrix();
glTranslatef(-position2,0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3f(0.929f, 0.33f, 0.23f);
	glVertex2f(-0.7f, -0.45f);
	glVertex2f(-0.2f, -0.45f);
	glVertex2f(-0.3f, -0.55f);
	glVertex2f(-0.6f, -0.55f);

	glEnd();


//ship2 middle portion & windows

	glBegin(GL_QUADS);
	glColor3f(0.49f, 0.2f, 0.15f);
	glVertex2f(-0.6f, -0.35f);
	glVertex2f(-0.3f, -0.35f);
	glVertex2f(-0.3f, -0.45f);
	glVertex2f(-0.6f, -0.45f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.58f, -0.36f);
	glVertex2f(-0.55f, -0.36f);
	glVertex2f(-0.55f, -0.41f);
	glVertex2f(-0.58f, -0.41f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.54f, -0.36f);
	glVertex2f(-0.51f, -0.36f);
	glVertex2f(-0.51f, -0.41f);
	glVertex2f(-0.54f, -0.41f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.50f, -0.36f);
	glVertex2f(-0.47f, -0.36f);
	glVertex2f(-0.47f, -0.41f);
	glVertex2f(-0.50f, -0.41f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.46f, -0.36f);
	glVertex2f(-0.43f, -0.36f);
	glVertex2f(-0.43f, -0.41f);
	glVertex2f(-0.46f, -0.41f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.42f, -0.36f);
	glVertex2f(-0.39f, -0.36f);
	glVertex2f(-0.39f, -0.41f);
	glVertex2f(-0.42f, -0.41f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.38f, -0.36f);
	glVertex2f(-0.35f, -0.36f);
	glVertex2f(-0.35f, -0.41f);
	glVertex2f(-0.38f, -0.41f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.34f, -0.36f);
	glVertex2f(-0.31f, -0.36f);
	glVertex2f(-0.31f, -0.41f);
	glVertex2f(-0.34f, -0.41f);

	glEnd();

//ship2 lower portion & windows

   glBegin(GL_QUADS);
	glColor3f(0.8f, 0.996f, 0.945f);
	glVertex2f(-0.55f, -0.25f);
	glVertex2f(-0.35f, -0.25f);
	glVertex2f(-0.35f, -0.35f);
	glVertex2f(-0.55f, -0.35f);

	glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.54f, -0.26f);
	glVertex2f(-0.51f, -0.26f);
	glVertex2f(-0.51f, -0.31f);
	glVertex2f(-0.54f, -0.31f);

	glEnd();

	 glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.50f, -0.26f);
	glVertex2f(-0.47f, -0.26f);
	glVertex2f(-0.47f, -0.31f);
	glVertex2f(-0.50f, -0.31f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.46f, -0.26f);
	glVertex2f(-0.43f, -0.26f);
	glVertex2f(-0.43f, -0.31f);
	glVertex2f(-0.46f, -0.31f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.42f, -0.26f);
	glVertex2f(-0.39f, -0.26f);
	glVertex2f(-0.39f, -0.31f);
	glVertex2f(-0.42f, -0.31f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.38f, -0.26f);
	glVertex2f(-0.36f, -0.26f);
	glVertex2f(-0.36f, -0.31f);
	glVertex2f(-0.38f, -0.31f);

	glEnd();

glPopMatrix();

//sky part

glBegin(GL_QUADS);
	glColor3f(0.0f, 0.88f, 1.0f);
	glVertex2f(-1.0f, 1.0f);
	glVertex2f(1.0f, 1.0f);
	glVertex2f(1.0f, 0.35f);
	glVertex2f(-1.0f, 0.35f);

    glEnd();


//ground 2

  	glBegin(GL_QUAD_STRIP);
	glColor3ub(21, 212, 34);

	glVertex2f(0.52f,  0.35f);
    glVertex2f(1.99f,  0.35f);
    glVertex2f(0.80f,  0.70f);
    glVertex2f(1.99f,  0.70f);
    glVertex2f(0.88f,  0.75f);
    glVertex2f(1.99f,  0.65f);

    glEnd();

//1st stand

	glBegin(GL_QUADS);
	glColor3ub(121, 125, 115);

	glVertex2f(0.855f,  0.52f);
    glVertex2f(0.862f,  0.52f);
    glVertex2f(0.862f,  0.48f);
    glVertex2f(0.855f,  0.48f);

    glEnd();


//2nd stand

    glBegin(GL_QUADS);
	glColor3ub(121, 125, 115);
	glVertex2f(0.905f,  0.52f);
    glVertex2f(0.912f,  0.52f);
    glVertex2f(0.912f,  0.48f);
    glVertex2f(0.905f,  0.48f);
    glEnd();


 //3rd stand

  	glBegin(GL_QUADS);
	glColor3ub(121, 125, 115);

	glVertex2f(0.90f,  0.65f);
    glVertex2f(0.90f,  0.51f);
    glVertex2f(0.895f,  0.51f);
    glVertex2f(0.895f,  0.65f);

    glEnd();

 //4th stand

  	glBegin(GL_QUADS);
	glColor3ub(121, 125, 115);

	glVertex2f(0.94f,  0.65f);
    glVertex2f(0.94f,  0.50f);
    glVertex2f(0.935f,  0.50f);
    glVertex2f(0.935f,  0.65f);

    glEnd();


  //bench piller 1

    glBegin(GL_QUADS);
	glColor3ub(235, 197, 12);

	glVertex2f(0.88f,  0.55f);
    glVertex2f(0.84f,  0.52f);
    glVertex2f(0.91f,  0.52f);
    glVertex2f(0.96f,  0.55f);

    glEnd();

//piller 2

    glBegin(GL_QUADS);
	glColor3ub(235, 197, 12);

	glVertex2f(0.88f,  0.56f);
    glVertex2f(0.95f,  0.56f);
    glVertex2f(0.95f,  0.58f);
    glVertex2f(0.88f,  0.58f);

    glEnd();

//piller 3

    glBegin(GL_QUADS);
	glColor3ub(235, 197, 12);

	glVertex2f(0.88f,  0.59f);
    glVertex2f(0.95f,  0.59f);
    glVertex2f(0.95f,  0.61f);
    glVertex2f(0.88f,  0.61f);

    glEnd();

//piller 4

    glBegin(GL_QUADS);
	glColor3ub(235, 197, 12);

	glVertex2f(0.88f,  0.62f);
    glVertex2f(0.95f,  0.62f);
    glVertex2f(0.95f,  0.64f);
    glVertex2f(0.88f,  0.64f);

    glEnd();

//lamppost
//ground stand

  	glBegin(GL_QUADS);
	glColor3ub(121, 125, 115);

	glVertex2f(0.845f,  0.55f);
    glVertex2f(0.824f,  0.55f);
    glVertex2f(0.824f,  0.57f);
    glVertex2f(0.845f,  0.57f);

    glEnd();

//upper stand

  	glBegin(GL_QUADS);
	glColor3ub(149, 171, 159);
    glVertex2f(0.84f,  0.57f);
    glVertex2f(0.832f,  0.57f);
    glVertex2f(0.832f,  0.70f);
    glVertex2f(0.84f,  0.70f);

    glEnd();

//lightpart
  	glBegin(GL_QUAD_STRIP);
	glColor3ub(255, 210, 61);

	glVertex2f(0.82f,  0.70f);
    glVertex2f(0.81f,  0.76f);
    glVertex2f(0.83f,  0.70f);
    glVertex2f(0.834f,  0.76f);
    glVertex2f(0.85f,  0.70f);
    glVertex2f(0.86f,  0.76f);

    glEnd();

//light cover

  	glBegin(GL_QUADS);
	glColor3ub(45, 150, 129);

	glVertex2f(0.807f,  0.76f);
    glVertex2f(0.863f,  0.76f);
    glVertex2f(0.84f,  0.80f);
    glVertex2f(0.827f,  0.80f);
    glEnd();



    glLineWidth(20);


//bridge Pillar
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.50f, -0.0f);
	glVertex2f(-0.50f, -0.1f);

	glEnd();



	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.40f, -0.0f);
	glVertex2f(-0.40f, -0.05f);

	glEnd();


	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.40f, -0.0f);
	glVertex2f(0.40f, -0.05f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.45f, -0.0f);
	glVertex2f(0.45f, -0.1f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.50f, -0.0f);
	glVertex2f(0.50f, -0.1f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.55f, -0.0f);
	glVertex2f(0.55f, -0.1f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.60f, -0.0f);
	glVertex2f(0.60f, -0.05f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.65f, -0.0f);
	glVertex2f(0.65f, -0.1f);

	glEnd();


	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.70f, -0.0f);
	glVertex2f(0.70f, -0.05f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.75f, -0.0f);
	glVertex2f(0.75f, -0.1f);

	glEnd();


	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.80f, -0.0f);
	glVertex2f(0.80f, -0.05f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.85f, -0.0f);
	glVertex2f(0.85f, -0.1f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.90f, -0.0f);
	glVertex2f(0.90f, -0.05f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.95f, -0.0f);
	glVertex2f(0.95f, -0.1f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(1.0f, -0.0f);
	glVertex2f(1.0f, -0.05f);

	glEnd();

//bridge views
//cars
//car1

glPushMatrix();

    glTranslatef(position1,0.0f, 0.0f);
    glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex2f(-1.0f, 0.13f);
	glVertex2f(-0.9f, 0.13f);
	glVertex2f(-0.9f, 0.08f);
	glVertex2f(-1.0f, 0.08f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.98f, 0.17f);
	glVertex2f(-0.94f, 0.17f);
	glVertex2f(-0.92f, 0.13f);
	glVertex2f(-0.99f, 0.13f);
	glEnd();

 glLineWidth(2);
	glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex2f(-0.98f, 0.17f);
	glVertex2f(-0.94f, 0.17f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex2f(-0.98f, 0.17f);
	glVertex2f(-0.99f, 0.13f);
    glEnd();

glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex2f(-0.94f, 0.17f);
	glVertex2f(-0.92f, 0.13f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex2f(-0.96f, 0.17f);
	glVertex2f(-0.96f, 0.13f);
    glEnd();


glPopMatrix();

//car2
glPushMatrix();

    glTranslatef(position,0.0f, 0.0f);
    glBegin(GL_QUADS);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2f(-0.8f, 0.13f);
	glVertex2f(-0.7f, 0.13f);
	glVertex2f(-0.7f, 0.08f);
	glVertex2f(-0.8f, 0.08f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.78f, 0.17f);
	glVertex2f(-0.74f, 0.17f);
	glVertex2f(-0.72f, 0.13f);
	glVertex2f(-0.79f, 0.13f);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(-0.78f, 0.17f);
	glVertex2f(-0.74f, 0.17f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(-0.78f, 0.17f);
	glVertex2f(-0.79f, 0.13f);
    glEnd();

glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(-0.74f, 0.17f);
	glVertex2f(-0.72f, 0.13f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(-0.76f, 0.17f);
	glVertex2f(-0.76f, 0.13f);
    glEnd();

glPopMatrix();

//car3

glPushMatrix();

   glTranslatef(-position,0.0f, 0.0f);
    glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex2f(0.8f, 0.27f);
	glVertex2f(0.7f, 0.27f);
	glVertex2f(0.7f, 0.22f);
	glVertex2f(0.8f, 0.22f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.78f, 0.31f);
	glVertex2f(0.74f, 0.31f);
	glVertex2f(0.72f, 0.27f);
	glVertex2f(0.79f, 0.27f);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex2f(0.78f, 0.31f);
	glVertex2f(0.74f, 0.31f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex2f(0.78f, 0.31f);
	glVertex2f(0.79f, 0.27f);
    glEnd();

glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex2f(0.74f, 0.31f);
	glVertex2f(0.72f, 0.27f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex2f(0.76f, 0.31f);
	glVertex2f(0.76f, 0.27f);
    glEnd();

glPopMatrix();

//car4

glPushMatrix();

    glTranslatef(-position3,0.0f, 0.0f);
    glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(1.0f, 0.27f);
	glVertex2f(0.9f, 0.27f);
	glVertex2f(0.9f, 0.22f);
	glVertex2f(1.0f, 0.22f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.98f, 0.31f);
	glVertex2f(0.94f, 0.31f);
	glVertex2f(0.92f, 0.27f);
	glVertex2f(0.99f, 0.27f);
	glEnd();

    glLineWidth(2);
	glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.98f, 0.31f);
	glVertex2f(0.94f, 0.31f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.98f, 0.31f);
	glVertex2f(0.99f, 0.27f);
    glEnd();

glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.94f, 0.31f);
	glVertex2f(0.92f, 0.27f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.96f, 0.31f);
	glVertex2f(0.96f, 0.27f);
    glEnd();

glPopMatrix();

 //bus1

glPushMatrix();

    glTranslatef(-position1,0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(0.4f, 0.29f);
	glVertex2f(0.6f, 0.29f);
	glVertex2f(0.6f, 0.22f);
	glVertex2f(0.4f, 0.22f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.43f, 0.33f);
	glVertex2f(0.6f, 0.33f);
	glVertex2f(0.6f, 0.29f);
	glVertex2f(0.4f, 0.29f);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(0.43f, 0.33f);
	glVertex2f(0.4f, 0.29f);

	glEnd();


	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(0.43f, 0.33f);
	glVertex2f(0.6f, 0.33f);

	glEnd();

		glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(0.43f, 0.33f);
	glVertex2f(0.43f, 0.29f);

	glEnd();


	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(0.46f, 0.33f);
	glVertex2f(0.46f, 0.29f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(0.49f, 0.33f);
	glVertex2f(0.49f, 0.29f);

	glEnd();
    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(0.52f, 0.33f);
	glVertex2f(0.52f, 0.29f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(0.55f, 0.33f);
	glVertex2f(0.55f, 0.29f);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(0.58f, 0.33f);
	glVertex2f(0.58f, 0.29f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(0.6f, 0.33f);
	glVertex2f(0.6f, 0.29f);

	glEnd();

glPopMatrix();

 //bus2

glPushMatrix();

    glTranslatef(position3,0.0f, 0.0f);
    glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.4f, 0.16f);
	glVertex2f(-0.6f, 0.16f);
	glVertex2f(-0.6f, 0.08f);
	glVertex2f(-0.4f, 0.08f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.43f, 0.2f);
	glVertex2f(-0.6f, 0.2f);     //bus1
	glVertex2f(-0.6f, 0.16f);
	glVertex2f(-0.4f, 0.16f);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.43f, 0.2f);
	glVertex2f(-0.4f, 0.16f);     //bus1

	glEnd();


	glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.43f, 0.2f);
	glVertex2f(-0.6f, 0.2f);     //bus1

	glEnd();


	glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.43f, 0.2f);
	glVertex2f(-0.43f, 0.1f);     //bus1

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.46f, 0.2f);
	glVertex2f(-0.46f, 0.1f);     //bus1

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.49f, 0.2f);
	glVertex2f(-0.49f, 0.1f);     //bus1

	glEnd();
    glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.52f, 0.2f);
	glVertex2f(-0.52f, 0.1f);     //bus1

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.55f, 0.2f);
	glVertex2f(-0.55f, 0.1f);     //bus1

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.58f, 0.2f);
	glVertex2f(-0.58f, 0.1f);     //bus1

	glEnd();


	glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.6f, 0.2f);
	glVertex2f(-0.6f, 0.16f);     //bus1

	glEnd();

  glPopMatrix();

glLineWidth(10);
     glBegin(GL_LINES);
	glColor3f(0.5f, 0.0f, 0.0f);
	glVertex2f(-0.91f, 0.7f);
	glVertex2f(-0.91f, 0.75f);       //tree
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.95f, 0.73f);
	glVertex2f(-0.91f, 0.78f);
	glVertex2f(-0.86f, 0.73f);       //tree
    glEnd();

     glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.95f, 0.76f);
	glVertex2f(-0.91f, 0.82f);
	glVertex2f(-0.86f, 0.76f);       //tree
    glEnd();




     glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.8f);
	glVertex2f(-0.95f, 0.7f);
	glVertex2f(-0.8f, 0.7f);       //blue building
	glVertex2f(-0.8f, 0.35f);
	glVertex2f(-0.95f, 0.35f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(-0.92f, 0.67f);
	glVertex2f(-0.89f, 0.67f);       //blue building window01
	glVertex2f(-0.89f, 0.63f);
	glVertex2f(-0.92f, 0.63f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(-0.86f, 0.67f);
	glVertex2f(-0.83f, 0.67f);       //blue building window02
	glVertex2f(-0.83f, 0.63f);
	glVertex2f(-0.86f, 0.63f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(-0.92f, 0.60f);
	glVertex2f(-0.89f, 0.60f);       //blue building window03
	glVertex2f(-0.89f, 0.56f);
	glVertex2f(-0.92f, 0.56f);

    glEnd();

     glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.86f, 0.60f);
	glVertex2f(-0.83f, 0.60f);       //blue building window04
	glVertex2f(-0.83f, 0.56f);
	glVertex2f(-0.86f, 0.56f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(-0.92f, 0.53f);
	glVertex2f(-0.89f, 0.53f);       //blue building window05
	glVertex2f(-0.89f, 0.48f);
	glVertex2f(-0.92f, 0.48f);

    glEnd();

  glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(-0.83f, 0.48f);
	glVertex2f(-0.86f, 0.48f);
    glVertex2f(-0.86f, 0.53f);
	glVertex2f(-0.83f, 0.53f);       //blue building window06

 glEnd();

    glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-1.0f, 0.6f);
	glVertex2f(-0.9f, 0.6f);       //red building
	glVertex2f(-0.9f, 0.35f);
	glVertex2f(-1.0f, 0.35f);

    glEnd();

     glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(-0.99f, 0.59f);
	glVertex2f(-0.97f, 0.59f);       //red building window01
	glVertex2f(-0.97f, 0.54f);
	glVertex2f(-0.99f, 0.54f);

    glEnd();

     glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.94f, 0.59f);
	glVertex2f(-0.92f, 0.59f);       //red building window02
	glVertex2f(-0.92f, 0.54f);
	glVertex2f(-0.94f, 0.54f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(-0.99f, 0.52f);
	glVertex2f(-0.97f, 0.52f);       //red building window03
	glVertex2f(-0.97f, 0.47f);
	glVertex2f(-0.99f, 0.47f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(-0.94f, 0.52f);
	glVertex2f(-0.92f, 0.52f);       //red building window02
	glVertex2f(-0.92f, 0.47f);
	glVertex2f(-0.94f, 0.47f);

    glEnd();




     glBegin(GL_QUADS);
	glColor3f(0.6f, 0.0f, 0.0f);
	glVertex2f(-0.8f, 0.7f);
	glVertex2f(-0.7f, 0.7f);       //brown building01
	glVertex2f(-0.7f, 0.35f);
	glVertex2f(-0.8f, 0.35f);

    glEnd();

     glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(-0.79f, 0.67f);
	glVertex2f(-0.77f, 0.67f);       //brown building01 window01
	glVertex2f(-0.77f, 0.63f);
	glVertex2f(-0.79f, 0.63f);

    glEnd();

     glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(-0.74f, 0.67f);
	glVertex2f(-0.72f, 0.67f);       //brown building01 window02
	glVertex2f(-0.72f, 0.63f);
	glVertex2f(-0.74f, 0.63f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(-0.79f, 0.60f);
	glVertex2f(-0.77f, 0.60f);       //brown building01 window03
	glVertex2f(-0.77f, 0.56f);
	glVertex2f(-0.79f, 0.56f);

    glEnd();

     glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.74f, 0.60f);
	glVertex2f(-0.72f, 0.60f);       //brown building01 window04
	glVertex2f(-0.72f, 0.56f);
	glVertex2f(-0.74f, 0.56f);

    glEnd();

     glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(-0.79f, 0.53f);
	glVertex2f(-0.77f, 0.53f);       //brown building01 window05
	glVertex2f(-0.77f, 0.48f);
	glVertex2f(-0.79f, 0.48f);

    glEnd();

     glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.74f, 0.48f);
	glVertex2f(-0.72f, 0.48f);
    glVertex2f(-0.72f, 0.53f);
	glVertex2f(-0.74f, 0.53f);       //brown building01 window06

 glEnd();


      glBegin(GL_LINES);
	glColor3f(0.6f, 0.0f, 0.0f);
	glVertex2f(-0.68f, 0.55f);
	glVertex2f(-0.68f, 0.60f);       // tree
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.71f, 0.58f);
	glVertex2f(-0.68f, 0.62f);
	glVertex2f(-0.65f, 0.58f);       // tree
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.71f, 0.60f);
	glVertex2f(-0.68f, 0.64f);
	glVertex2f(-0.65f, 0.60f);       // tree
	glEnd();


     glBegin(GL_QUADS);
	glColor3f(0.0f, 0.7f, 0.0f);
	glVertex2f(-0.72f, 0.55f);
	glVertex2f(-0.65f, 0.55f);       //green building
	glVertex2f(-0.65f, 0.35f);
	glVertex2f(-0.72f, 0.35f);

    glEnd();

     glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(-0.71f, 0.52f);
	glVertex2f(-0.69f, 0.52f);       //green building window01
	glVertex2f(-0.69f, 0.46f);
	glVertex2f(-0.71f, 0.46f);

    glEnd();

     glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(-0.67f, 0.52f);
	glVertex2f(-0.65f, 0.52f);       //green building window02
	glVertex2f(-0.65f, 0.46f);
	glVertex2f(-0.67f, 0.46f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.6f, 0.0f, 0.0f);
	glVertex2f(-0.65f, 0.65f);
	glVertex2f(-0.5f, 0.65f);       //brown building02
	glVertex2f(-0.5f, 0.35f);
	glVertex2f(-0.65f, 0.35f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.63f, 0.63f);
	glVertex2f(-0.61f, 0.63f);       //brown building02 window01
	glVertex2f(-0.61f, 0.58f);
	glVertex2f(-0.63f, 0.58f);

    glEnd();

     glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(-0.59f, 0.63f);
	glVertex2f(-0.57f, 0.63f);       //brown building01 window02
	glVertex2f(-0.57f, 0.58f);
	glVertex2f(-0.59f, 0.58f);

    glEnd();

     glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(-0.54f, 0.63f);
	glVertex2f(-0.52f, 0.63f);       //brown building02 window03
	glVertex2f(-0.52f, 0.58f);
	glVertex2f(-0.54f, 0.58f);

    glEnd();

      glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(-0.63f, 0.55f);
	glVertex2f(-0.61f, 0.55f);       //brown building02 window04
	glVertex2f(-0.61f, 0.50f);
	glVertex2f(-0.63f, 0.50f);

    glEnd();

       glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(-0.59f, 0.55f);
	glVertex2f(-0.57f, 0.55f);       //brown building02 window05
	glVertex2f(-0.57f, 0.50f);
	glVertex2f(-0.59f, 0.50f);

    glEnd();

     glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(-0.54f, 0.55f);
	glVertex2f(-0.52f, 0.55f);       //brown building02 window06
	glVertex2f(-0.52f, 0.50f);
	glVertex2f(-0.54f, 0.50f);

    glEnd();

     glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.7f, 0.0f);
    glVertex2f(-0.4f, 0.35f); //mountain02
    glVertex2f(-0.15f, 0.8f);
	glVertex2f(-0.05f,  0.35f);

	glEnd();

	glLineWidth(2);
	 glBegin(GL_LINES);
	glColor3f(0.0f, 0.8f, 0.0f);
	 glVertex2f(-0.4f, 0.35f);
	  glVertex2f(-0.15f, 0.8f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.8f, 0.0f);
	 glVertex2f(-0.05f, 0.35f);
	  glVertex2f(-0.15f, 0.8f);

	glEnd();


    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.7f, 0.0f);
    glVertex2f(-0.5f, 0.35f); //mountain01
    glVertex2f(-0.4f, 0.8f);
	glVertex2f(-0.2f,  0.35f);

	glEnd();
glLineWidth(2);
	 glBegin(GL_LINES);
	glColor3f(0.0f, 0.8f, 0.0f);
	 glVertex2f(-0.5f, 0.35f);
	  glVertex2f(-0.4f, 0.8f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.8f, 0.0f);
	 glVertex2f(-0.2f, 0.35f);
	  glVertex2f(-0.4f, 0.8f);

	glEnd();

	 glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.7f, 0.0f);

	glVertex2f(-0.05f, 0.35f);
	glVertex2f(0.1f, 0.8f);  //mountain04
	glVertex2f(0.4f,  0.35f);

	glEnd();



	 glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.7f, 0.0f);

	glVertex2f(-0.2f, 0.35f);
	glVertex2f(-0.05f, 0.8f);  //mountain03
	glVertex2f(0.1f,  0.35f);

	glEnd();

	glLineWidth(2);
	 glBegin(GL_LINES);
	glColor3f(0.0f, 0.8f, 0.0f);
	 glVertex2f(-0.2f, 0.35f);
	  glVertex2f(-0.05f, 0.8f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.8f, 0.0f);
	 glVertex2f(0.1f, 0.35f);
	  glVertex2f(-0.05f, 0.8f);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.7f, 0.0f);

	glVertex2f(0.1f, 0.35f);
	glVertex2f(0.25f, 0.8f);  //mountain05
	glVertex2f(0.4f,  0.35f);

	glEnd();

	glLineWidth(2);
	 glBegin(GL_LINES);
	glColor3f(0.0f, 0.8f, 0.0f);
	 glVertex2f(0.1f, 0.35f);
	  glVertex2f(0.25f, 0.8f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.8f, 0.0f);
	 glVertex2f(0.4f, 0.35f);
	  glVertex2f(0.25f, 0.8f);

	glEnd();

	glLineWidth(10);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(-0.5f, 0.0f);
	glVertex2f(-0.5f, 0.7f);  //bridge


	glEnd();

     glLineWidth(5);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(-1.0f, 0.0f);
	glVertex2f(-0.5f, 0.7f);  //bridge


	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(0.5f, 0.0f);
	glVertex2f(0.5f, 0.7f);  //bridge

	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(1.0f, 0.0f);
	glVertex2f(0.5f, 0.7f);  //bridge


	glEnd();


	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(-0.4f, 0.35f);
	glVertex2f(-0.4f, 0.8f);  //bridge


	glEnd();


	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(-0.9f, 0.35f);
	glVertex2f(-0.4f, 0.8f);  //bridge


	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(0.4f, 0.35f);
	glVertex2f(0.4f, 0.8f);  //bridge


	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(0.9f, 0.35f);
	glVertex2f(0.4f, 0.8f);  //bridge


	glEnd();

    glLineWidth(5);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(0.0f, 0.35f);
	glVertex2f(0.4f, 0.8f);  //bridge


	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(0.0f, 0.35f);
	glVertex2f(-0.4f, 0.8f);  //bridge


	glEnd();


    glLineWidth(5);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(0.9f, 0.35f);
	glVertex2f(1.0f, 0.5f);  //bridge


	glEnd();


	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(-0.9f, 0.35f);
	glVertex2f(-1.0f, 0.5f);  //bridge


	glEnd();


	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(0.0f, 0.0f);
	glVertex2f(-0.5f, 0.7f);  //bridge


	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.5f, 0.7f);  //bridge
   glEnd();


glFlush();


}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(1200, 600);
	glutCreateWindow("Padma setu");
	glutDisplayFunc(display);
	glutTimerFunc(100, update, 0);
	glutTimerFunc(100, update1, 0);
	glutTimerFunc(100, update2, 0);
    glutTimerFunc(100, update3, 0);

	glutMainLoop();
	return 0;
}

