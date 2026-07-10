#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Initialize OpenGL Graphics */
void initGL() {
	// Set "clearing" or background color
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Black and opaque
}

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 1.0f, 1.0f); // Yellow
	glVertex2f(-0.02f, -0.80f);
	glVertex2f(0.02f, -0.80f);
	glVertex2f(0.02f, 0.40f);
	glVertex2f(-0.02f, 0.40f);

	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon

	glVertex2f(-0.10f, 0.40f);
	glVertex2f(0.10f, 0.40f);
	glVertex2f(0.10f, 0.50f);
	glVertex2f(-0.10f, 0.50f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(-0.07f, 0.30f);
	glVertex2f(0.07f, 0.30f);
	glVertex2f(0.07f, 0.40f);
	glVertex2f(-0.07f, 0.40f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.6f, 0.6f, 0.6f); // Yellow
	glVertex2f(-0.08f, -0.85f);
	glVertex2f(0.08f, -0.85f);
	glVertex2f(0.08f, -0.80f);
	glVertex2f(-0.08f, -0.80f);

	glEnd();





	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
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
