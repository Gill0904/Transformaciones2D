#include <GL/glut.h>
#include <GL/freeglut.h>

double posicion_triangulo_x = -0.5f;
double posicion_triangulo_y = -0.5f;

void iniciar() {
	glClearColor(0, 0, 1, 1);
	glLineWidth(3.f);
	glOrtho(800, 0, 600, 0, -1, 1);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	/*glClearColor(0, 0, 1, 1);
	glPointSize(5);
	glColor3i(1, 0, 0);
	glOrtho(800, 0, 600, 0, -1, 1);*/

}

void dibujar() {
	glClear(GL_COLOR_BUFFER_BIT);

	//Punto inicial de la matriz
	glColor3f(1.f, 0.f, 0);
	glPointSize(4);
	glBegin(GL_POINTS);
	glVertex2f(0, 0);
	glEnd();

	//traslacion-------------------
	glPushMatrix();
	glTranslatef(posicion_triangulo_x, posicion_triangulo_y, 0);

	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2f(0.0, 0.0);
	glVertex2f(0.0, -0.3);
	glVertex2f(0.3, -0.3);
	glEnd();
	glPopMatrix();
	//----------------------------------

	//Rotacion--------------------------i
	glPushMatrix();
	glTranslatef(0.5, -0.5, 0);
	glRotated(-75, 0, 0, 1);
	glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex2f(0.0, 0.0);
	glVertex2f(0.0, -0.3);
	glVertex2f(0.3, -0.3);
	glEnd();
	glPopMatrix();
	//-------------------------------------

	//Escalar--------------------------------
	glPushMatrix();
	glTranslatef(0.2, 0.5, 0);
	glScaled(2, 2, 0);
	glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.5f, 0.0f);
	glVertex2f(0.0, 0.0);
	glVertex2f(0.0, -0.3);
	glVertex2f(0.3, -0.3);
	glEnd();
	glPopMatrix();
	//--------------------------------------------


	glFlush();

}


int main(int argc, char* args[]) {
	glutInit(&argc, args); //se inicia glud
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);

	glutInitWindowPosition(50, 50);
	glutInitWindowSize(800, 600);
	glutCreateWindow("Ventana 1");
	iniciar();
	glutDisplayFunc(dibujar);
	glutMainLoop();


	return 0;
}