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

void keyboardd(unsigned char key, int x, int y)
{
	rotate = !rotate;
}

void keyboardu(unsigned char key, int x, int y)
{
	//rotate = !rotate;
}

void keyboardsd(int key, int x, int y)
{
	rotate = !rotate;
}

void keyboardsu(int key, int x, int y)
{
	//rotate = !rotate;
}

int main()
{
	glutInit(NULL, NULL);
	glutInitWindowSize(400, 400); 
	glutCreateWindow("");
	glutDisplayFunc(display); 
	glutIdleFunc(idle);
	glutKeyboardFunc(keyboardd);
	glutKeyboardUpFunc(keyboardu);
	glutSpecialFunc(keyboardsd);
	glutSpecialUpFunc(keyboardsu);
	glutMainLoop();
}
