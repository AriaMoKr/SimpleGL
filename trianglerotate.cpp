#include <GL/glut.h>

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_TRIANGLES);
	glVertex2f(0, 0.9);
	glVertex2f(-0.9, -0.9);
	glVertex2f(0.9, -0.9);
	glEnd();
	glFlush();
}

void idle()
{
	glRotatef(0.1, 0, 0, 1);
	glutPostRedisplay();
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitWindowSize(400, 400); 
	glutCreateWindow(argv[0]);
	glutDisplayFunc(display); 
	glutIdleFunc(idle);
	glutMainLoop();
}
