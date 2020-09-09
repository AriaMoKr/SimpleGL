#include <stdio.h>
#include <GL/glut.h>
#include <set>
using namespace std;

bool rotating = true;
set<unsigned char> keysdown;
set<int> keyssdown;

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
	if(keysdown.find(key) != keysdown.end())
		return;
	rotating = !rotating;
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
	rotating = !rotating;
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
	glutMainLoop();
}
