#pragma 
#include <iostream>
using namespace std;
#include "Shape.h"
#include <fstream>

class Rectangle :public Shape //■ Rectangle — прямокутник із заданими координатами верхнього лівого кута і розмірами;
{
	int _cordX;
	int _cordY;
	float _XLength;
	float _YLength;
	int _shapeNum = 3;
public:
	Rectangle();
	Rectangle(float,float);
	Rectangle(int, int, float, float);
	int getShapeNum();
	void Show();
	void Save(FILE*);
	void Load(FILE*);
};

