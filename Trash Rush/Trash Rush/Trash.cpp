#define _CRT_SECURE_NO_WARNINGS
#include "Trash.h"

Trash::Trash() {
	this->img = NULL;
	this->category = NULL;
}
Trash::Trash(const char* cat, const char* image) {
	this->category = new char[strlen(cat) + 1];
	strcpy(category, cat);
	this->img = new char[strlen(image) + 1];
	strcpy(img, image);
}
Trash::~Trash() {
	if (this->img)
		delete img;
	img = NULL;
	if (this->category)
		delete category;
	category = NULL;
}

char* Trash::getImg() {
	return this->img;
}
void Trash::setImg(const char* image) {
	if (this->img)
		delete img;
	img = NULL;
	this->img = new char[strlen(image) + 1];
	strcpy(img, image);
}

char* Trash::getCategory() {
	return this->category;

}
void Trash::setCategory(const char* cat) {
	if (this->category)
		delete category;
	category = NULL;
	this->category = new char[strlen(cat) + 1];
	strcpy(category, cat);
}