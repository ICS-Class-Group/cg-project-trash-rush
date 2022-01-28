#pragma once

#include <glad/glad.h>
#include <cctype>
#include <cstring>

using namespace std;

class Trash {
	char* category;
	char* img;
public:
	Trash();
	Trash(const char*, const char *);
	~Trash();
	char* getImg();
	void setImg(const char*);
	char* getCategory();
	void setCategory(const char*);
};
