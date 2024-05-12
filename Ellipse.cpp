#include "Ellipse.h"

Ellipse::Ellipse() :Ellipse(0, 0, 0.0f, 0.0f) {}

Ellipse::Ellipse(float XL, float YL) :Ellipse(0, 0, XL, YL) {}

Ellipse::Ellipse(int X, int Y, float XL, float YL) : _cordX(X), _cordY(Y), _XLength(XL), _YLength(YL) {}

int Ellipse::getShapeNum()
{
	return _shapeNum;
}

void Ellipse::Show()
{
	cout << "Figure: Ellipse:" << endl;
	cout << "X cord : " << _cordX << endl;
	cout << "Y cord : " << _cordY << endl;
	cout << "X side length : " << _XLength << endl;
	cout << "Y side length : " << _YLength << endl;
}

void Ellipse::Save(FILE* file)
{
	fwrite(this, sizeof(Ellipse), 1, file);
}

void Ellipse::Load(FILE* file)
{

	fread(this, sizeof(Ellipse), 1, file);

}
