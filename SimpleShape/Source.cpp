
#include <Windows.h>
#include <GL/glut.h>

void myinit() //set attributes
{
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); //  setting background color
	glColor3f(1.0f, 0.0f, 1.0f); // drawing color

	// Set world coordinates
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-100.0, 100.0, -100.0, 100.0);
	glMatrixMode(GL_MODELVIEW);
}
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_LINES);
	glVertex2i(-70, 10);
	glVertex2i(-20, 70);
	glEnd();

	glBegin(GL_TRIANGLES);
	glVertex2i(30, 30);
	glVertex2i(70, 30);
	glVertex2i(50, 70);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2d(-80, -50);
	glVertex2d(-70, -25);
	glVertex2d(-50, -35);
	glVertex2d(-40, -23);
	glVertex2d(-10, -35);
	glVertex2d(-25, -45);
	glVertex2d(-28, -80);
	glVertex2d(-45, -75);
	glVertex2d(-60, -80);
	glVertex2d(-63, -60);
	glVertex2d(-80, -50);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2i(50, -50);
	glVertex2i(75, -75);
	glVertex2i(65, -90);
	glVertex2i(35, -90);
	glVertex2i(25, -75);
	glEnd();

	glFlush();
}

int main(int argc, char ** argv)
{
	glutInit(&argc, argv); // initialize GLUT
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); //setting display mode

	glutInitWindowSize(500, 500); // window size
	glutInitWindowPosition(0, 0);  // window position

	glutCreateWindow("");

	glutDisplayFunc(display); // Register callback func

	myinit(); // Set attributes

	glutMainLoop(); // enter event Loop

	return 0;
}