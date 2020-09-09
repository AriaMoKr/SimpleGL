#include <stdio.h>
#include <GL/glut.h>
#include <set>
using namespace std;

bool rotating = true;
set<int> keysdown;

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
	if(rotating)
		glRotatef(0.1, 0, 0, 1);
	glutPostRedisplay();
}

void keyboardd(unsigned char key, int x, int y)
{
	rotating = !rotating;
}

void keyboardu(unsigned char key, int x, int y)
{
	//rotating = !rotating;
}

void keyboardsd(int key, int x, int y)
{
	rotating = !rotating;
}

void keyboardsu(int key, int x, int y)
{
	//rotating = !rotating;
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
