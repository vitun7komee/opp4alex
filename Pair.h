#include <iostream>
class Pair {
protected:
	double A;
	double B;

public:
	Pair();
	Pair(int a, int b);
	Pair* operator+(Pair& Sec);
	Pair* operator-(Pair& Sec);
	Pair* operator*(double mnzh);
	Pair* delen(double del);
	void setA(int x); double getA();
	void setB(int x); double getB();
	
};

