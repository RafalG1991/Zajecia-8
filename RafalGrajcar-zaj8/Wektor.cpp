#include "Wektor.h"

Wektor::Wektor(double x, double y): x(x), y(y) {}
Wektor Wektor::operator !() {
	return Wektor(-this->x, -this->y);
}
Wektor Wektor::operator ++() {
	return Wektor(this->x + 1, this->y + 1);
}

Wektor Wektor::operator +(const Wektor &w) {
	return Wektor(this->x + w.x, this->y + w.y);
}

double Wektor::operator *(const Wektor &w) {
	return this->x * w.x + this->y * w.y;
}

Wektor operator !(const Wektor& w) {
	return Wektor(-w.x, -w.y);
}

Wektor operator ++(const Wektor& w) {
	return Wektor(w.x + 1, w.y + 1);
}

Wektor operator +(const Wektor& v, const Wektor& w) {
	return Wektor(v.x + w.x, v.y + w.y);
}

Wektor operator *(const double& a, const Wektor& w) {
	return Wektor(w.x * a, w.y * a);
}