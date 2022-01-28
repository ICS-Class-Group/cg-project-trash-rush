#include "Trashcan.h"

#include <glad/glad.h>
#include <iostream>
#include <string>
#include<math.h>

Trashcan::Trashcan(string label, float width) {
	this->label = label;
	this->waste_count = 0;
	for (int i = 0; i < 24; i += 6) {
		this->can_vertices[i] += this->width;
	}
}

int Trashcan::getWasteCount() const {
	return this->waste_count;
}