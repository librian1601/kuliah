#include <GL/glut.h>
#include <stdlib.h>

void drawLine(void)
{ 
     glClear(GL_COLOR_BUFFER_BIT);
     glBegin(GL_LINES);
       glColor3f(0.,0.,1.);
       glVertex2i(-40,0);
       glVertex2i(40,0);
       glColor3f(1.,0.,0.);
       glVertex2i(0,50);
       glVertex2i(-40,0);
       glColor3f(1.,1.,0.);
       glVertex2i(40,0);
       glVertex2i(0,-100);
       glColor3f(1.,0.,1.);
       glVertex2i(0,50);
       glVertex2i(40,0);
       glColor3f(0.,1.,0.);
       glVertex2i(-40,0);
       glVertex2i(0,-100);
       glColor3f(1.,1.,1.);
       glVertex2i(0,50);
       glVertex2i(0,-100);
       glEnd();
       glFlush();
     
}

int main (int argc, char **argv) 
{
    glutInit(&argc, argv); //inisialisasi toolkit
    glutInitDisplayMode(GLUT_DEPTH|GLUT_SINGLE|GLUT_RGBA);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(320,240);
    glutCreateWindow("PEMROGRAMAN GRAFIS GLUT");
    
    gluOrtho2D(-320.,320.,-240.,240);
    glutDisplayFunc(drawLine);
    glutMainLoop();
}
     
