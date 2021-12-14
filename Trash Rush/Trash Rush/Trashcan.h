#pragma once

#include <GL/glut.h>
#include <iostream>
#include <string>
#include <math.h>

using namespace std;
//Green(recyclable)//Blue(plastic, metal)//Red(hazardous, e-waste)//Grey

class Trashcan {
	string label;
	string color;
	int waste_count;
public:
	Trashcan(string, string);
	void displayTrashcan() const;
	int getWasteCount() const;
};

