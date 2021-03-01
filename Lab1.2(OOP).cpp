#include "Triangle.h"
#include <iostream>

using namespace std;

Triangle makeTriangle(int a, int b, int c, int A, int B, int C)
{
	Triangle p;
	if (!p.Init(a, b, c,A,B,C))
		cout << "ERROR" << endl;
	return p;
}

int main()
{
	Triangle f;
	cout << "p.Read():" << endl;
	f.Read();
	cout << "p.Dsiplay():" << endl;
	f.Display();
	cout << "p.Change():" << endl;
	f.Change();
	cout << "p.Display():" << endl;
	f.Display();
	cout << "p.Square:" << endl;
	cout << f.Square()<<endl;
	cout << "p.Perimeter:" << endl;
	cout << f.Perimeter() << endl;
	cout << "p.Height:" << endl;
	f.Height();
	return 0;
}