#pragma once
class Triangle
{
private:
	double a;
	double b;
	double c;
	double A;
	double B;
	double C;

public:
	int Geta() const { return a; }
	int Getb() const { return b; }
	int Getc() const { return c; }
	int GetA() const { return A; }
	int GetB() const { return B; }
	int GetC() const { return C; }

	void Seta(int value);
	void Setb(int value);
	void Setc(int value);
	void SetA(int value);
	void SetB(int value);
	void SetC(int value);

	bool Init(int a, int b, int c, int A, int B, int C);
	void Display();
	void Read();

	void Change();
	double Square();
	double Perimeter();
	void Height();

};
