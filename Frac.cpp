#include "Frac.h"
#include <cmath>
Frac& Frac::DIV()
{
	int a =(Frac::NOD(abs(numer), denumer));
	numer /= a;
	denumer /= a;
	return *this;
}
Frac::Frac()
{
	numer = 0;
	denumer = 0;
}
Frac::Frac(const Frac& a)
{
	numer = a.numer;
	denumer = a.denumer;
}

Frac::Frac(int a)
{
	numer = a;
	denumer = 1;
}

Frac::Frac(int n, int d)
{
	int p = NOD(n, d);
	numer = n / p;
	denumer = d / p;
}

Frac Frac::operator-() const
{
	return 0-Frac(*this);
}


bool Frac::operator==(const Frac& a)
{
	Frac b(*this);
	b -= a;
	return (b.numer == 0);
}

bool Frac::operator!=(const Frac& a)
{
	return (!(*this == a));
}

bool Frac::operator>(const Frac& a)
{
	Frac b(*this);
	b -= a;
	return (b.numer > 0);
}

bool Frac::operator<(const Frac& a)
{
	Frac b(*this);
	b -= a;
	return (b.numer > 0);
}

bool Frac::operator<=(const Frac& a)
{
	Frac b(*this);
	b -= a;
	return (b.numer <= 0);
}

bool Frac::operator>=(const Frac& a)
{
	Frac b(*this);
	b -= a;
	return (b.numer >= 0);
}

Frac& Frac::operator=(const Frac& a)
{
	numer = a.numer;
	denumer = a.denumer;
	return *this;
}

int Frac::NOD(int a, int b)
{
	int c;
	if (a < b)
	{
		c = b;
		b = a;
		a = c;
	}
	if (b != 0)
		a = Frac::NOD(a % b, b);
	return a;
}



Frac::~Frac()
{
}

Frac operator+(int a, const Frac& b)
{
	Frac temp(b);
	temp.numer += a * temp.denumer;
	temp.DIV();
	return temp;
}
Frac operator+(const Frac& a, int b)
{
	Frac temp(a);
	temp.numer += b * temp.denumer;
	temp.DIV();
	return temp;
}

Frac operator+(const Frac& a, const Frac& b)
{
	Frac temp;
	temp.numer = a.numer * b.denumer + b.numer * a.denumer;
	temp.denumer = a.denumer * b.denumer;
	temp.DIV();
	return temp;
}

Frac operator+=(Frac& a, int b)
{
	a = a + b;
	a.DIV();
	return a;
}

Frac operator+=(Frac& a, const Frac& b)
{
	a = a + b;
	return a;
}

Frac operator*(int a, const Frac& b)
{
	Frac temp(b);
	temp.numer *= a;
	temp.DIV();
	return temp;
}

Frac operator*(const Frac& a, int b)
{
	Frac temp(a);
	temp.numer *= b;
	temp.DIV();
	return temp;
}

Frac operator*(const Frac& a, const Frac& b)
{
	Frac temp(a);
	temp.numer *= b.numer;
	temp.denumer *= b.denumer;
	temp.DIV();
	return temp;
}

Frac operator*=(Frac& a, int b)
{
	a.numer *= b;
	a.DIV();
	return a;
}

Frac operator*=(Frac& a, const Frac& b)
{
	a.numer *= b.numer;
	a.denumer *= b.denumer;
	a.DIV();
	return a;
}



Frac operator-(int a, const Frac& b)
{
	Frac temp(a);
	return temp - b;
}
Frac operator-(const Frac& a, int b)
{
	Frac temp(a);
	temp.numer -= b * temp.denumer;
	temp.DIV();
	return temp;
}

Frac operator-(const Frac& a, const Frac& b)
{
	Frac temp;
	temp.numer = a.numer * b.denumer - b.numer * a.denumer;
	temp.denumer = a.denumer * b.denumer * temp.NOD(a.denumer, b.denumer);
	temp.DIV();
	return temp;
}

Frac operator-=(Frac& a, int b)
{
	a = a - b;
	a.DIV();
	return a;
}

Frac operator-=(Frac& a, const Frac& b)
{
	a = a - b;
	return a;
}

Frac operator/(int a, const Frac& b)
{
	Frac temp(b);
	temp.denumer *= a;
	temp.DIV();
	return temp;
}

Frac operator/(const Frac& a, int b)
{
	Frac temp(a);
	temp.denumer *= b;
	temp.DIV();
	return temp;
}

Frac operator/(const Frac& a, const Frac& b)
{
	Frac temp(a);
	temp.numer *= b.denumer;
	temp.denumer *= b.numer;
	temp.DIV();
	return temp;
}

Frac operator/=(Frac& a, int b)
{
	a.denumer *= b;
	a.DIV();
	return a;
}
Frac operator/=(Frac& a, const Frac& b)
{
	a.numer *= b.denumer;
	a.denumer *= b.numer;
	a.DIV();
	return a;
}

