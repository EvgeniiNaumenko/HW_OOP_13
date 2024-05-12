//Завдання №2
//Створіть абстрактний клас Shape для малювання плоских фігур.Визначте віртуальні методи :
//■ Show() — виведення на екран інформації про фігуру,
//■ Save() — збереження фігури в файл,
//■ Load() — зчитування фігури з файлу.
//Визначте похідні класи :
//■ Square — квадрат, який характеризується координатами
//лівого верхнього кута і довжиною сторони;
//■ Rectangle — прямокутник із заданими координатами
//верхнього лівого кута і розмірами;
//■ Circle — коло із заданими координатами центра і радіусом;
//■ Ellipse — еліпс з заданими координатами верхнього
//кута описаного навколо нього прямокутника зі сторонами, паралельними осям координат, і розмірами цього прямокутника.
//Створіть масив фігур, збережіть фігури в файл, завантажте в інший масив і виведіть на екран інформацію
//про кожну з фігур.

#include <iostream>
using namespace std;
#include "Shape.h"
#include "Circle.h"
#include "Ellipse.h"
#include "Rectangle.h"
#include "Square.h"

int main()
{
	FILE* file;
	const char data[] = "Data.dat";
	
	Circle shape1(0,0,5); //создаем наши фигуры
	Ellipse shape2(2,2,5.f,6.f);
	Rectangle shape3(10, 5, 3.f, 4.f);
	Square shape4(2, 8, 15.5f);
	const int size = 4;
	Shape* arr[size]{&shape1,&shape2, &shape3, &shape4};//наш массив указателей на дочерние классы
	cout << "----------------------ARR SHAPE 1-----------------------------" << endl;
	for (int i = 0; i < size; i++)// запринтим все с массива через виртуальний метод родительского класа
	{
		arr[i]->Show();
	}


	if (fopen_s(&file, data, "wb") == 0)
	{
		fwrite(&size, sizeof(int), 1, file);
		for (int i = 0; i < size; i++)
		{
			int shapeNum = arr[i]->getShapeNum();
			fwrite(&shapeNum, sizeof(int), 1, file);
			arr[i]->Save(file);

		}
		fclose(file);
	}

	
	Shape** newArr =nullptr;
	int size2;
	if (fopen_s(&file, data, "rb") == 0)
	{
		fread(&size2, sizeof(int), 1, file);
		newArr = new Shape*[size2];
		for (int i = 0; i < size2; i++)
		{
			int shapeNum;
			fread(&shapeNum, sizeof(int), 1, file);
			if (shapeNum == 1)
			{
				newArr[i] = new Circle();
				newArr[i]->Load(file);
			}
			if (shapeNum == 2)
			{
				newArr[i] = new Ellipse();
				newArr[i]->Load(file);
			}
			if (shapeNum == 3)
			{
				newArr[i] = new Rectangle();
				newArr[i]->Load(file);
			}
			if (shapeNum == 4)
			{
				newArr[i] = new Square();
				newArr[i]->Load(file);
			}

		}
		fclose(file);
	}
	cout << "----------------------ARR SHAPE 2-----------------------------" << endl;
	for (int i = 0; i < size2; i++)// запринтим все с массива через виртуальний метод родительского класа
	{
		newArr[i]->Show();
	}
	return 0;
}