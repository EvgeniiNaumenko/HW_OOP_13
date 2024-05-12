#include "Circle.h"

Circle::Circle() :Circle(0, 0, 0) {}

Circle::Circle(float R) :Circle(0, 0, R) {}

Circle::Circle(int X, int Y, float R) : _cordX(X), _cordY(Y), _radius(R) {}

int Circle::getShapeNum()
{
	return _shapeNum;
}

void Circle::Show()
{
	cout << "Figure: Circle:" << endl;
	cout << "X cord : " << _cordX << endl;
	cout << "Y cord : " << _cordY << endl;
	cout << "Radius : " << _radius << endl;
}

void Circle::Save(FILE* file)
{
	fwrite(this, sizeof(Circle), 1, file);
}

void Circle::Load(FILE* file)
{

	fread(this, sizeof(Circle), 1, file);

}
