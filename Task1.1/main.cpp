#include <windows.h>
#include <GL/glut.h>


void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(5);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.4f, 0.0f);    // x, y
	glVertex2f(0.7f, 0.0f);    // x, y


	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.4f, 0.0f);    // x, y
	glVertex2f(-0.4f, -0.9f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.4f, -0.9f);    // x, y
	glVertex2f(0.7f, -0.9f);    // x, y


	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.7f, 0.0f);    // x, y
	glVertex2f(0.7f, -0.9f);    // x, y



	glEnd();


	glFlush();  // Render now
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("OpenGL Setup");
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
