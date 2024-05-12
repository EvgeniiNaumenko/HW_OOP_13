#include "Rectangle.h"

Rectangle::Rectangle() :Rectangle(0, 0, 0.0f, 0.0f) {}

Rectangle::Rectangle(float XL, float YL) :Rectangle(0, 0, XL, YL) {}

Rectangle::Rectangle(int X, int Y, float XL, float YL) : _cordX(X), _cordY(Y), _XLength(XL), _YLength(YL) {}

int Rectangle::getShapeNum()
{
	return _shapeNum;
}

void Rectangle::Show()
{
	cout << "Figure: Rectangle:" << endl;
	cout << "X cord : " << _cordX << endl;
	cout << "Y cord : " << _cordY << endl;
	cout << "X side length : " << _XLength << endl;
	cout << "Y side length : " << _YLength << endl;
}

void Rectangle::Save(FILE* file)
{

	fwrite(this, sizeof(Rectangle), 1, file);

}

void Rectangle::Load(FILE* file)
{

	fread(this, sizeof(Rectangle), 1, file);

}
