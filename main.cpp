#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
void display(){
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1,0,0);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2f (-10.0 , 20.0);
    glVertex2f (-10.0 , -20.0);
    glVertex2f (10.0 , 20.0);
    glVertex2f (10.0 , -20.0);
    glVertex2f (-20.0 , 10.0);
    glVertex2f (20.0 , 10.0);
    glVertex2f (-20.0 , -10.0);
    glVertex2f (20.0 , -10.0);
    glEnd();

    glColor3f(0,1,0);
    glBegin(GL_POLYGON);
    glVertex2f (-5.0 , 7.0);
    glVertex2f (-2.0 , 7.0);
    glVertex2f (-2.0 , -7.0);
    glVertex2f (-5.0 , -7.0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f (-2.0 , 7.0);
    glVertex2f (5.0 , 7.0);
    glVertex2f (5.0 , 4.0);
    glVertex2f (-2.0 , 4.0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f (-2.0 , 1.5);
    glVertex2f (2.0  , 1.5);
    glVertex2f (2.0  , -1.5);
    glVertex2f (-2.0 , -1.5);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f (-2.0 , -4.0);
    glVertex2f (5.0  , -4.0);
    glVertex2f (5.0  , -7.0);
    glVertex2f (-2.0  , -7.0);
    glEnd();

    glColor3f(1,0,0);
    glLineWidth(5);
    glBegin(GL_LINE_LOOP);
    glVertex2f (-5.0 , 7.0);
    glVertex2f (5.0  , 7.0);
    glVertex2f (5.0  , 4.0);
    glVertex2f (-2.0 , 4.0);
    glVertex2f (-2.0 , 1.5);
    glVertex2f (2.0  , 1.5);
    glVertex2f (2.0  , -1.5);
    glVertex2f (-2.0 , -1.5);
    glVertex2f (-2.0 , -4.0);
    glVertex2f (5.0  , -4.0);
    glVertex2f (5.0  , -7.0);
    glVertex2f (-5.0 , -7.0);
    glEnd();

    glFlush();
}

void myinit(){
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-20.0,20.0,-20.0,20.0);
    glMatrixMode(GL_MODELVIEW);
    glClearColor(1.0,1.0,1.0,1.0);
    glColor3f (1.0, 0.0, 0.0);
}


int main(int argc, char* argv[]){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500,500);
    //glutInitWindowPosition(100,100);
    glutCreateWindow("Obyek Primitif");
    glutDisplayFunc(display);
    myinit();
    glutMainLoop();
    return 0;
}
