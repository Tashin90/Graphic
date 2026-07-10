
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Initialize OpenGL Graphics */
void initGL() {
	// Set "clearing" or background color
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Black and opaque
}

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.6f, 0.6f, 0.6f); // Yellow
	glVertex2f(-0.3f, -0.8f);
	glVertex2f(0.3f, -0.8f);
	glVertex2f(0.3f, 0.8f);
	glVertex2f(-0.3f, 0.8f);
	glEnd();

	glColor3f(0.0f, 0.8f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.22f, 0.65f);
	glVertex2f(-0.12f, 0.65f);
	glVertex2f(-0.12f, 0.55f);
	glVertex2f(-0.22f, 0.55f);

	glEnd();

	glColor3f(0.0f, 0.8f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2f(0.12f, 0.65f);
	glVertex2f(0.22f, 0.65f);
	glVertex2f(0.22f, 0.55f);
	glVertex2f(0.12f, 0.55f);

	glEnd();


	glColor3f(0.0f, 0.8f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.22f, 0.35f);
	glVertex2f(-0.12f, 0.35f);
	glVertex2f(-0.12f, 0.25f);
	glVertex2f(-0.22f, 0.25f);

	glEnd();

	glColor3f(0.0f, 0.8f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2f(0.12f, 0.35f);
	glVertex2f(0.22f, 0.35f);
	glVertex2f(0.22f, 0.25f);
	glVertex2f(0.12f, 0.25f);

	glEnd();


	glColor3f(0.0f, 0.8f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.22f, 0.05f);
	glVertex2f(-0.12f, 0.05f);
	glVertex2f(-0.12f, -0.05f);
	glVertex2f(-0.22f, -0.05f);

	glEnd();


	glColor3f(0.0f, 0.8f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2f(0.12f, 0.05f);
	glVertex2f(0.22f, 0.05f);
	glVertex2f(0.22f, -0.05f);
	glVertex2f(0.12f, -0.05f);

	glEnd();



	glColor3f(0.0f, 0.8f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.22f, -0.25f);
	glVertex2f(-0.12f, -0.25f);
	glVertex2f(-0.12f, -0.35f);
	glVertex2f(-0.22f, -0.35f);

	glEnd();

	glColor3f(0.0f, 0.8f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2f(0.12f, -0.25f);
	glVertex2f(0.22f, -0.25f);
	glVertex2f(0.22f, -0.35f);
	glVertex2f(0.12f, -0.35f);

	glEnd();


	glColor3f(0.0f, 0.8f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.22f, -0.55f);
	glVertex2f(-0.12f, -0.55f);
	glVertex2f(-0.12f, -0.65f);
	glVertex2f(-0.22f, -0.65f);

	glEnd();

	glColor3f(0.0f, 0.8f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2f(0.12f, -0.55f);
	glVertex2f(0.22f, -0.55f);
	glVertex2f(0.22f, -0.65f);
	glVertex2f(0.12f, -0.65f);


	glEnd();


	glColor3f(0.5f, 0.2f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.07f, -0.80f);
	glVertex2f(0.07f, -0.80f);
	glVertex2f(0.07f, -0.50f);
	glVertex2f(-0.07f, -0.50f);


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
