#pragma once

#include <glad/glad.h>
#include <iostream>
#include <string>
#include <math.h>

using namespace std;
//Green(recyclable)//Blue(plastic, metal)//Red(hazardous, e-waste)//Grey

class Trashcan {
	string label;
	int waste_count;
	float width;
	float can_vertices[24] = {
	-0.9f, -0.9f, 0.0f, 1.0f, 0.0f, 0.0f,
	-0.6f, -0.9f, 0.0f, 1.0f, 0.0f, 0.0f,
	-0.5f, -0.3f, 0.0f, 1.0f, 0.0f, 0.0f,
	-1.0f, -0.3f, 0.0f, 1.0f, 0.0f, 0.0f
	};
public:
	Trashcan(string, float);
	int getWasteCount() const;
};

