#include<iostream>
using namespace std;

class Point
{
	double x;
	double y;

};

//#define STRUCT_POINT
void main()
{
	setlocale(LC_ALL, "");

#ifdef STRUCT_POINT



	int a;    //Объявление переменной 'а' типа 'int'
	Point A;  //Объявление переменной 'A' типа 'Point'
	//Создание объекта 'А' типа 'Point'
	//Создание экземпляра 'А' структуры 'Point'
	A.x = 2;
	A.y = 3;
	cout << A.x << "\t" << A.y << endl;

	Point* pA = &A;
	cout << pA->x << "\t" << pA->y << endl;

 #endif // STRUCT_POINT
	Point A;
	cout << A.x << "\t" << A.y << endl;
}