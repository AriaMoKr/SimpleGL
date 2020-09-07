// http://rawcdn.githack.com/AriaMoKr/SimpleGL/master/triangle.html
#include <GL/glut.h>

void display()
{
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
	glEnable(GL_CULL_FACE);
	glutDisplayFunc(display); 
	glutMainLoop();
}
