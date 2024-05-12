#pragma once
#include <iostream>
using namespace std;
#include "Shape.h"


class Circle :public Shape //■ Circle — коло із заданими координатами центра і радіусом;
{
	int _cordX;
	int _cordY;
	float _radius;
	int _shapeNum = 1;
public:
	Circle();
	Circle(float);
	Circle(int, int, float);
	int getShapeNum();
	void Show();
	void Save(FILE*);
	void Load(FILE*);
};

