#include <GL/glut.h>

void display()
{
	glColor3f(0, 0, 1);
	glBegin(GL_TRIANGLES);
	glVertex2f(0, 0.9);
	glVertex2f(-0.9, -0.9);
	glVertex2f(0.9, -0.9);
	glEnd();
}

int main()
{
	glutInitWindowSize(400, 400); 
	glutCreateWindow("");
	glutDisplayFunc(display); 
	glutMainLoop();
}
