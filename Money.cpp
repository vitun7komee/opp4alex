#include "Money.h"

Money::Money() {
	A = B = 0;
}
Money::Money(int m, int s) : Pair(s, m) {
	//sec = s; B = m; A = h;
	normal();
}
Money* Money::operator+(Money& Sec) {
	Pair::operator+(Sec);
	normal();
	return this;
}
Money* Money::delen(double del) {
	Pair::delen(del);
	normal();
	return this;
}
Money* Money::operator-(Money& Sec) {
	Pair::operator-(Sec);
	normal();
	return this;
}
Money* Money::operator*(double mnzh) {
	Pair::operator*(mnzh);
	normal();
	return this;
}
void Money::normal() {
	while (B > 100 || B < 0) {
		if (B > 100) { B = B - 100; A++; }
		else if (B < 0) { B = 100 + B; A--; }
	}
}
std::istream& operator>>(std::istream& in, Money& t) {

	std::cout << "enter money RUB.COP :\n";

	in >> t.A;
	std::cin.ignore();
	in >> t.B;
	std::cin.ignore();
	return in;
}
std::ostream& operator<<(std::ostream& out, Money& t) {
	t.normal();
	out << "Money : \n " << "rub :" << t.A << "  " << "cop :" << t.B << std::endl;
	return out;
}
Money& Money::operator=(const Money& t)
{
	if (&t != this)
	{
		A = t.A;
		B = t.B;
	}
	else
		return *this;
}
