#include<iostream>
using namespace std;

class Point
{
	double x;
	double y;
public:
	double get_x()const
	{
		return x;
	}
	double get_y()const
	{
		return y;
	}
	void set_x(double x)
	{

		this->x = x;
	}
	void set_y(double y)
	{
		this->y = y;
	}
	//   Constructors:
	/*Point()
	{
		x = y = 0;
		cout << "DefaultConstructor:\t" << this << endl;
	}*/
	/*Point(double x)
	{
		this->x = x;
		this->y = 0;
		cout << "1ArgConstructor:\t" << this << endl;

	}*/
	Point(double x, double y)
	{
		this->x = x;
		this->y = y;
		cout << "Construcror:\t\t" << this << endl;
	}
	
	~Point()
	{
		cout << "Destructor:\t\t" << this << endl;
	}

	//  Methods:
	double distance(Point other)
	{
		double x_distance = this->x - other.x;
		double y_distance = this->y - other.y;
		double distance = sqrt(x_distance * x_distance + y_distance * y_distance);
		//sqrt-Square Root(Квадратный корень)
		return distance;
	}
	void print()const
	{
		cout << "X=" << x << "\tY=" << y << endl;
	}
};

double distance(Point A, Point B)
{
	double x_distance = A.get_x() - B.get_x();
	double y_distance = A.get_y() - B.get_y();
	double y_distance = sqrt(x_distance * x_distance + y_distance * y_distance);
	return distance;
}


//#define STRUCT_POINT
#define CONSTRUCTORS_CHECK
//#define DISTANCE_CHECK

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

#ifdef CONSTRUCTORS_CHECK
	Point A;
	//A.set_x(2);
	//A.set_y(3);
	cout << A.get_x() << "\t" << A.get_y() << endl;
	A.print();

	Point B = 5;   // Single-Argument Constructor
	B.print();

	Point C(2, 3);
	C.print();

	A.distance(B);
#endif // CONSTRUCTORS_CHECK

#ifdef DISTANCE_CHECK
	Point A(2, 3);
	Point B(7, 8);

	A.print();
	B.print();

	cout << "Растояние от точки 'A'до точки 'B':" << A.distance(B) << endl;
	cout << "Растояние от точки 'B'до точки 'B':" << B.distance(B) << endl;
	cout << "Растояние между точками 'A'и'B':" << distance(A, B) << endl;
	cout << "Растояние между точками 'B'и'A':" << distance(B, A) << endl;

#endif // DISTANCE_CHECK

}
