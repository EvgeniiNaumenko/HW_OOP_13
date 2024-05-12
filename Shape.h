#pragma once
#include <iostream>
using namespace std;


class Shape
{
	string _shape;
public:
	Shape();
	void setShape(string);
	virtual void Show() = 0;						//■ Show() — виведення на екран інформації про фігуру,
	virtual int getShapeNum() = 0;						
	virtual void Save(FILE*) = 0;						//■ Save() — збереження фігури в файл,
	virtual void Load(FILE*) = 0;						//■ Load() — зчитування фігури з файлу.
};

