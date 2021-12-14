#include "Trashcan.h"

#include<GL/glut.h>
#include <iostream>
#include <string>
#include<math.h>

float can_vertices[] = {
	-0.9, -0.9, 0,
	-0.6, -0.9, 0,
	-0.5, -0.3, 0,
	-1.0, -0.3, 0,
};

Trashcan::Trashcan(string label, string color) {
	this->label = label;
	this->color = color;
	this->waste_count = 0;
}
void Trashcan::displayTrashcan() const {
	float width = 0;
	glBegin(GL_POLYGON);
	if (Trashcan::color == "green")
		glColor3f(0, 1, 0);
	else if (Trashcan::color == "blue") {
		glColor3f(0, 0, 1);
		width = 0.5;
	}		
	else if (Trashcan::color == "red") {
		glColor3f(1, 0, 0);
		width = 1.0;
	}		
	else if (Trashcan::color == "yellow") {
		glColor3f(1, 1, 0);
		width = 1.5;
	}
	for (int i = 0; i < 12; i += 3) {
		glVertex3f(can_vertices[i]+width, can_vertices[i + 1], can_vertices[i + 2]);
	}
	glEnd();
}

int Trashcan::getWasteCount() const {
	return this->waste_count;
}