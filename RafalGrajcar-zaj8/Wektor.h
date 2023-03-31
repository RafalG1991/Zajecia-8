#pragma once
class Wektor {
public:
	double x, y;
	Wektor(double x, double y);

	Wektor operator !();
	Wektor operator ++();
	Wektor operator +(const Wektor &v);
	double operator *(const Wektor &v);
};

Wektor operator !(const Wektor& w);
Wektor operator ++(const Wektor& w);
Wektor operator +(const Wektor& v, const Wektor& w);
Wektor operator *(const double& a, const Wektor& w);