#pragma once
#include "stdint.h"
 class Frac
{
private:
	int64_t numer;
	int64_t denumer;

public:
	Frac  &Frac::DIV();

	Frac();

	Frac(const Frac& a);

	Frac(int a);
	Frac(int n, int d);

	Frac operator-() const;

	bool operator==(const Frac& a);

	bool operator!=(const Frac& a);

	bool operator>(const Frac& a);

	bool operator<(const Frac& a);

	bool operator<=(const Frac& a);

	bool operator>=(const Frac& a);

	Frac& operator=(const Frac& a);

	int NOD(int a, int b);

	~Frac();


	friend Frac operator+(int a, const Frac& b);
	friend Frac operator+(const Frac& a, int b);
	friend Frac operator+(const Frac& a, const Frac& b);
	friend Frac operator*(const Frac& a, int b);
	friend Frac operator*(const Frac& a, const Frac& b);
	friend Frac operator*=(Frac& a, int b);
	friend Frac operator*=(Frac& a, const Frac& b);
	friend Frac operator-(int a, const Frac& b);
	friend Frac operator-(const Frac& a, int b);
	friend Frac operator-(const Frac& a, const Frac& b);
	friend Frac operator/(int a, const Frac& b);
	friend Frac operator/(const Frac& a, int b);
	friend Frac operator/(const Frac& a, const Frac& b);
	friend Frac operator/=(Frac& a, int b);
	friend Frac operator/=(Frac& a, const Frac& b);
	friend Frac operator*(int a, const Frac& b);
	friend Frac operator-=(Frac& a, const Frac& b);
	friend Frac operator-=(Frac& a, int b);
	

};

