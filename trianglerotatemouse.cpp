#include <stdio.h>
#include <GL/glut.h>

bool rotate = true;

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
	if(rotate)
		glRotatef(0.1, 0, 0, 1);
	glutPostRedisplay();
}

void moused(int button, int state, int x, int y)
{
	if(state == GLUT_DOWN)
		rotate = !rotate;
}

int main()
{
	glutInit(NULL, NULL);
	glutInitWindowSize(400, 400); 
	glutCreateWindow("");
	glutDisplayFunc(display); 
	glutIdleFunc(idle);
	glutMouseFunc(moused);
	glutMainLoop();
}
