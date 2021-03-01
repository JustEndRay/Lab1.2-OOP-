#include "Triangle.h"
#include <cmath>
#include <iostream>
using namespace std;

void Triangle::Seta(int value)
{
	if (value > 0)
		a = value;
	else
		a = 0;
}
void Triangle::Setb(int value)
{
	if (value > 0)
		b = value;
	else
		b = 0;
}
void Triangle::Setc(int value)
{
	if (value > 0)
		c = value;
	else
		c = 0;
}
void Triangle::SetA(int value)
{
	if (value > 0)
		A = value;
	else
		A = 0;
}
void Triangle::SetB(int value)
{
	if (value > 0)
		B = value;
	else
		B = 0;
}
void Triangle::SetC(int value)
{
	if (value > 0)
		C = value;
	else
		C = 0;
}
bool Triangle::Init(int a, int b, int c, int A, int B, int C)
{
	if (a > 0 && b > 0 && c > 0 && ((A + B + C) == 180))
	{
		Seta(a);
		Setb(b);
		Setc(c);
		SetA(A);
		SetB(B);
		SetC(C);
		return true;
	}
	else
		return false;
}
void Triangle::Read()
{
	double a;
	double b;
	double c;
	double A;
	double B;
	double C;
	do
	{
		cout << "side a  =  "; cin >> a;
		cout << "side b  =  "; cin >> b;
		cout << "side c  =  "; cin >> c;
		cout << "angle A  =  "; cin >> A;
		cout << "angle B  =  "; cin >> B;
		cout << "angle C  =  "; cin >> C;
	} while (!Init(a,b,c, A, B, C));
}
void Triangle::Display()
{
	cout << "side a  =  " << a << endl;
	cout << "side b  =  " << b << endl;
	cout << "side c  =  " << c << endl;
	cout << "angle A  =  " << A << endl;
	cout << "angle B  =  " << B << endl;
	cout << "angle C  =  " << C << endl;
}
double Triangle::Perimeter()
{
	return a + b + c;
}
double Triangle::Square()
{
	return sqrt((Perimeter() / 2) * ((Perimeter() / 2) - a) * ((Perimeter() / 2) - b) * ((Perimeter() / 2) - c));
}
void Triangle::Height()
{
	cout << "Height 1 = " << 2 * Square() / a << endl;
	cout << "Height 2 = " << 2 * Square() / b << endl;
	cout << "Height 3 = " << 2 * Square() / c << endl;
}
void Triangle::Change()
{
	cout << "rewrite:" << endl;
	Read();
}
