#include <windows.h>
#include <GL/glut.h>

void init()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // White Background

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glLineWidth(1.5f);

    // =========================
    // Gray Connecting Lines
    // =========================

    glColor3f(0.f, 0.2f, 0.2f);

    glBegin(GL_LINES);

        // Outer -> Middle (Left)
        glVertex2f(-0.52f, -0.30f);
        glVertex2f(-0.35f, -0.20f);

        // Outer -> Middle (Right)
        glVertex2f( 0.52f, -0.30f);
        glVertex2f( 0.35f, -0.20f);

        // Middle Top -> Inner Top
        glVertex2f(0.0f, 0.60f);
        glVertex2f(0.0f, 0.40f);

        // Inner Y Shape
     // Inner Y Shape

        glVertex2f(0.0f, 0.08f);
        glVertex2f(-0.12f, -0.02f);

        glVertex2f(0.0f, 0.08f);
        glVertex2f( 0.12f, -0.02f);

        glVertex2f(0.0f, 0.30f);
        glVertex2f(0.0f, 0.08f);

    glEnd();

    // =========================
    // Outer Triangle (Red)
    // =========================

    glColor3f(1.0f, 0.0f, 0.0f);

    glBegin(GL_LINE_LOOP);

        glVertex2f( 0.0f,  0.60f);
        glVertex2f(-0.52f, -0.30f);
        glVertex2f( 0.52f, -0.30f);

    glEnd();

    // =========================
    // Middle Triangle (Green)
    // =========================

    glColor3f(0.0f, 1.0f, 0.0f);

    glBegin(GL_LINE_LOOP);

        glVertex2f( 0.0f,  0.40f);
        glVertex2f(-0.35f, -0.20f);
        glVertex2f( 0.35f, -0.20f);

    glEnd();

    // =========================
    // Inner Triangle (Blue)
    // =========================

    glColor3f(0.0f, 0.0f, 1.0f);

    glBegin(GL_LINE_LOOP);

        glVertex2f( 0.0f,  0.30f);
        glVertex2f(-0.12f, -0.02f);
        glVertex2f( 0.12f, -0.02f);

    glEnd();

    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    // Assignment Restriction
    glutInitWindowSize(500, 500);
    glutCreateWindow("OpenGL Class Task-1");

    init();

    glutDisplayFunc(display);

    glutMainLoop();

    return 0;
}
