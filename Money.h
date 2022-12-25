#include "Pair.h"
#include <iostream>
class Money:public Pair
{
public:
	Money();
	Money(int s, int m);
	Money* operator+(Money& Sec);
	Money* operator-(Money& Sec);
	Money* operator*(double mnzh);
	Money* delen(double del);
	void normal();
	Money& operator=(const Money& t);
	friend std::ostream& operator<<(std::ostream& on, Money& a);
	friend std::istream& operator>>(std::istream& is, Money& a);
};
