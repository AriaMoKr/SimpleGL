#include <stdio.h>
#include <GL/glut.h>
#include <set>
using namespace std;

bool rotating = false;
set<unsigned char> keysdown;
set<int> keyssdown;

void display()
{
	glColor3f(1, 1, 1);
	glBegin(GL_TRIANGLES);
	glVertex2f(0, 0.9);
	glVertex2f(-0.9, -0.9);
	glVertex2f(0.9, -0.9);
	glEnd();

	glColor3f(0.5, 0.5, 0.5);
	glBegin(GL_TRIANGLES);
	glVertex2f(-0.5, -0.5);
	glVertex2f(-1, -0.8);
	glVertex2f(-0.5, -1);
	glEnd();

	glColor3f(0, 0, 1);
	glBegin(GL_TRIANGLES);
	glVertex2f(-0.7, -0.6);
	glVertex2f(-1, -0.8);
	glVertex2f(-0.7, -1);
	glVertex2f(0.7, -1);
	glVertex2f(1, -0.8);
	glVertex2f(0.7, -0.6);
	glEnd();
}

void idle()
{
	//if(rotating)
	//	glRotatef(0.1, 0, 0, 1);
	glutPostRedisplay();
}

void keyboardd(unsigned char key, int x, int y)
{
	if(keysdown.find(key) != keysdown.end())
		return;
	//rotating = !rotating;
	keysdown.insert(key);
}

void keyboardu(unsigned char key, int x, int y)
{
	if(keysdown.find(key) == keysdown.end())
		return;
	keysdown.erase(key);
}

void keyboardsd(int key, int x, int y)
{
	if(keyssdown.find(key) != keyssdown.end())
		return;
	//rotating = !rotating;
	keyssdown.insert(key);
}

void keyboardsu(int key, int x, int y)
{
	if(keyssdown.find(key) == keyssdown.end())
		return;
	keyssdown.erase(key);
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
	glEnable(GL_CULL_FACE);
	glutMainLoop();
}
