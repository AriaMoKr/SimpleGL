#include <stdio.h>
#include <GL/glut.h>
#include <set>
using namespace std;

bool rotating = false;
set<unsigned char> keysdown;
set<int> keyssdown;
int width = 400, height = 400;

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(1, 1, 1);
	glBegin(GL_TRIANGLES);
	glVertex2f(0, 0.9);
	glVertex2f(-0.9, -0.9);
	glVertex2f(0.9, -0.9);
	glEnd();

	glPushMatrix();
	glLoadIdentity();
	glColor3f(0.5, 0.5, 0.5);
	glBegin(GL_QUADS);
	glVertex2f(-0.5, -0.5);
	glVertex2f(-1, -0.5);
	glVertex2f(-1, -1);
	glVertex2f(-0.5, -1);
	glEnd();

	glColor3f(0, 1, 1);
	glBegin(GL_TRIANGLES);
	glVertex2f(-0.6, -0.55);
	glVertex2f(-0.9, -0.75);
	glVertex2f(-0.6, -0.95);
	glEnd();
	glPopMatrix();

	glFlush();
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

	if(key == 'a')
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

	if(key == 100)
		rotating = !rotating;

	keyssdown.insert(key);
}

void keyboardsu(int key, int x, int y)
{
	if(keyssdown.find(key) == keyssdown.end())
		return;
	
	keyssdown.erase(key);
}

void moused(int button, int state, int x, int y)
{
	if(state != GLUT_DOWN)
		return;

	if(x < 0 || x >= width) return;
	if(y < 0 || y >= height) return;

	float mx = (float)x / width * 2 - 1;
	float my = -((float)y / height * 2 - 1);

	if(mx < -1 || mx >= -0.5) return;
	if(my < -1 || my >= -0.5) return;
	
	rotating = !rotating;
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitWindowSize(width, height); 
	glutCreateWindow(argv[0]);
	glutDisplayFunc(display); 
	glutIdleFunc(idle);
	glutKeyboardFunc(keyboardd);
	glutKeyboardUpFunc(keyboardu);
	glutSpecialFunc(keyboardsd);
	glutSpecialUpFunc(keyboardsu);
	glutMouseFunc(moused);
	glEnable(GL_CULL_FACE);
	glutMainLoop();
}
