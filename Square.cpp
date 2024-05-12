#include "Square.h"

Square::Square() :Square(0, 0, 0.0f) {}

Square::Square(float L) :Square(0, 0, L) {}

Square::Square(int X, int Y, float L): _cordX(X), _cordY(Y), _sideLength(L) {}

int Square::getShapeNum()
{
	return _shapeNum;
}

void Square::Show()
{
	cout << "Figure: Square" << endl;
	cout << "X cord : " << _cordX << endl;
	cout << "Y cord : " << _cordY << endl;
	cout << "Side length : " << _sideLength << endl;
}

void Square::Save(FILE* file)
{
	fwrite(this, sizeof(Square), 1, file);
}

void Square::Load(FILE* file)
{
	fread(this, sizeof(Square), 1, file);
}
