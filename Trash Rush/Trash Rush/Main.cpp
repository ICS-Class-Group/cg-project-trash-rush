#include "Trashcan.h"

#include<GL/glut.h>
#include <iostream>
#include <string>
#include<math.h>

void init() {
	glClearColor(1.0, 1.0, 1.0, 1.0);
}

Trashcan green("Organic", "green");
Trashcan blue("Plastic", "blue");


void display() {
	glClear(GL_COLOR_BUFFER_BIT);

	green.displayTrashcan();
	blue.displayTrashcan();

	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(1000, 1000);
	glutInitWindowPosition(50, 100);
	glutCreateWindow("Trash Rush");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
}