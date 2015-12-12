#include <iostream>

#include <GL/glut.h>

using namespace std;

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glutWireTeapot(1.0);
	glFlush();
}

void resize(int w, int h)
{
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-2, 2, -2, 2, -2, 2);
}

void keyin(unsigned char key, int x, int y)
{
	switch (key) {
	case '\033':
		exit(0);
	}
}

void init(void)
{
	glClearColor(0.0, 0.0, 0.0, 1.0);
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGBA);
	glutCreateWindow(argv[0]);
	glutDisplayFunc(display);
	glutReshapeFunc(resize);
	glutKeyboardFunc(keyin);
	init();
	glutMainLoop();

	return 0;
}

