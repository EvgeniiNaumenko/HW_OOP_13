#pragma once
#include <iostream>
using namespace std;
#include "Shape.h"
#include <fstream>



class Square:public Shape //■ Square — квадрат, який характеризується координатами лівого верхнього кута і довжиною сторони;
{
	int _cordX;
	int _cordY;
	float _sideLength;
	int _shapeNum = 4;
public:
	Square();
	Square(float);
	Square(int, int, float);
	int getShapeNum();
	void Show();
	void Save( FILE*);
	void Load(FILE*);

};

