#include <GL/glut.h>

void display()
{
	glBegin(GL_TRIANGLES);
	glVertex2f(0, 0.9);
	glVertex2f(-0.9, -0.9);
	glVertex2f(0.9, -0.9);
	glEnd();
}

void idle()
{
	glRotatef(0.1, 0, 0, 1);
	glutPostRedisplay();
}

int main()
{
	glutInitWindowSize(400, 400); 
	glutCreateWindow("");
	glutDisplayFunc(display); 
	glutIdleFunc(idle);
	glutMainLoop();
}
