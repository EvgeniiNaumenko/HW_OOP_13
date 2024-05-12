#pragma once
#include <iostream>
using namespace std;
#include "Shape.h"
#include <fstream>

class Ellipse :public Shape //? Ellipse Ч ел≥пс з заданими координатами верхнього
//кута описаного навколо нього пр€мокутника з≥ сторонами, паралельними ос€м координат, ≥ розм≥рами цього пр€мокутника.
{
	int _cordX;
	int _cordY;
	float _XLength;
	float _YLength;
	int _shapeNum = 2;
public:
	Ellipse();
	Ellipse(float, float);
	Ellipse(int, int, float, float);
	int getShapeNum();
	void Show();
	void Save( FILE*);
	void Load( FILE*);
};

