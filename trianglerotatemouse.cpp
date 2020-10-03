#include <stdio.h>
#include <GL/glut.h>

bool rotate = true;

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
	if(rotate)
		glRotatef(0.1, 0, 0, 1);
	glutPostRedisplay();
}

void moused(int button, int state, int x, int y)
{
	if(state == GLUT_DOWN)
		rotate = !rotate;
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitWindowSize(400, 400); 
	glutCreateWindow(argv[0]);
	glutDisplayFunc(display); 
	glutIdleFunc(idle);
	glutMouseFunc(moused);
	glutMainLoop();
}
