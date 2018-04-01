#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

void kotak(int x){
    glBegin(GL_POLYGON);
    glVertex2f (x+0,x+0);
    glVertex2f (x+0,x+1);
    glVertex2f (x+1,x+1);
    glVertex2f (x+1,x+0);
    glEnd();
}
void kotak2(int y){
    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
    glVertex2f (y+0,1-y);
    glVertex2f (y+0,2-y);
    glVertex2f (y+1,2-y);
    glVertex2f (y+1,1-y);
    glEnd();
}
void display(){
    glClear(GL_COLOR_BUFFER_BIT);
    for(int x=0;x<2;x++){
        kotak(x);
    }
    for(int y=0;y<2;y++){
        kotak2(y);
    }

    glColor3f(0,1,0);
    glBegin(GL_POLYGON);
    glVertex2f (0.1,1.9);
    glVertex2f (0.9,1.3);
    glVertex2f (0.9,1.1);
    glVertex2f (0.1,1.7);
    glEnd();
    glColor3f(0,1,0);
    glBegin(GL_POLYGON);
    glVertex2f (0.9,1.9);
    glVertex2f (0.1,1.3);
    glVertex2f (0.1,1.1);
    glVertex2f (0.9,1.7);
    glEnd();


    glColor3f(0,1,0);
    glBegin(GL_POLYGON);
    glVertex2f (1.4,1.9);
    glVertex2f (1.6,1.9);
    glVertex2f (1.6,1.1);
    glVertex2f (1.4,1.1);
    glEnd();

    glColor3f(0,1,0);
    glBegin(GL_POLYGON);
    glVertex2f (0.1,0.9);
    glVertex2f (0.3,0.9);
    glVertex2f (0.3,0.1);
    glVertex2f (0.1,0.1);
    glEnd();
    glColor3f(0,1,0);
    glBegin(GL_POLYGON);
    glVertex2f (0.7,0.9);
    glVertex2f (0.9,0.9);
    glVertex2f (0.9,0.1);
    glVertex2f (0.7,0.1);
    glEnd();
    glColor3f(0,1,0);
    glBegin(GL_POLYGON);
    glVertex2f (0.3,0.9);
    glVertex2f (0.7,0.3);
    glVertex2f (0.7,0.1);
    glVertex2f (0.3,0.7);
    glEnd();


    glColor3f(0,1,0);
    glBegin(GL_POLYGON);
    glVertex2f (1.4,0.9);
    glVertex2f (1.6,0.9);
    glVertex2f (1.6,0.1);
    glVertex2f (1.4,0.1);
    glEnd();
    glFlush();
    glBegin(GL_POLYGON);
    glVertex2f (1.1,0.9);
    glVertex2f (1.9,0.9);
    glVertex2f (1.9,0.7);
    glVertex2f (1.1,0.7);
    glEnd();
    glFlush();
}

void myinit(){
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,2,0,2);
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
