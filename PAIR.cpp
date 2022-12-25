#include "Pair.h"

Pair::Pair() {
	A = 0; B = 0;
}
Pair* Pair::operator*(double mnzh) {
	A = A * mnzh;
	B = B * mnzh;
	return this;
}
Pair* Pair::delen(double del) {
	A /= del;
	B /= del;
	return this;
}
Pair::Pair(int a, int b) {
	A = a; B = b;
}
Pair* Pair::operator+(Pair& x) {
	A += x.A;
	B += x.B;
	return this;
}
Pair* Pair::operator-(Pair& x) {
	A -= x.A;
	B -= x.B;
	return this;
}
void Pair::setA(int x) { A = x; } double Pair::getA() { return A; }
void Pair::setB(int x) { B = x; } double Pair::getB() { return B; }
