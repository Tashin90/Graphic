#include <windows.h>
#include <GL/glut.h>


void initGL() {

	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
}


void display() {
	glClear(GL_COLOR_BUFFER_BIT);


	glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.4f, 0.6f);
	glVertex2f(0.4f, 0.6f);
	glVertex2f(0.6f, -0.4f);
	glVertex2f(-0.6f, -0.4f);

	glEnd();

	glFlush();
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);          // Initialize GLUT
	glutCreateWindow("Vertex, Primitive & Color");  // Create window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
	glutDisplayFunc(display);       // Register callback handler for window re-paint event
	initGL();                       // Our own OpenGL initialization
	glutMainLoop();                 // Enter the event-processing loop
	return 0;
}
