
#include <iostream>
#include "Complex.h"

using namespace std;

Complex::Complex()
{
    this->re = 0.0;
    this->img = 0.0;
}

Complex::Complex(double r)
{
    this->re = r;
    this->img = 0.0;
}

Complex::Complex(double r, double i)
{
    this->re = r;
    this->img = i;
}

Complex::Complex(const Complex& c)
{
    this->re = c.re;
    this->img = c.img;
}

Complex Complex::operator+(Complex c) const
{
    Complex* res = new Complex(0.0, 0.0);

    res->re = this->re + c.re;
    res->img = this->img + c.img;

    return *res;
}

Complex Complex::operator+(double a) const
{
    Complex* res = new Complex(0.0, 0.0);

    res->re = this->re + a;
    res->img = this->img;

    return *res;
}

Complex Complex::operator-(Complex c) const
{
    Complex* res = new Complex(0.0, 0.0);

    res->re = this->re - c.re;
    res->img = this->img - c.img;

    return *res;
}

Complex Complex::operator-(double a) const
{
    Complex* res = new Complex(0.0, 0.0);

    res->re = this->re - a;
    res->img = this->img;

    return *res;
}

Complex Complex::operator*(Complex c) const
{
    Complex* res = new Complex(0.0, 0.0);

    res->re = this->re * c.re - this->img * c.img;
    res->img = this->re * c.img + this->img * c.re;

    return *res;
}

Complex Complex::operator*(double a) const
{
    Complex* res = new Complex(0.0, 0.0);

    res->re = this->re * a;
    res->img = this->img * a;

    return *res;
}

Complex Complex::operator/(Complex c) const
{
    Complex* res = new Complex(0.0, 0.0);

    double d = c.re * c.re + c.img * c.img;

    if (d != 0.0)
    {
        res->re = (this->re * c.re + this->img * c.img) / d;
        res->img = (this->img * c.re - this->re * c.img) / d;
    }

    return *res;
}

Complex Complex::operator/(double a) const
{
    Complex* res = new Complex(0.0, 0.0);

    if (a != 0.0)
    {
        res->re = this->re / a;
        res->img = this->img / a;
    }

    return *res;
}

bool Complex::operator==(const Complex& c) const
{
    return this->re == c.re && this->img == c.img;
}

bool Complex::operator!=(const Complex& c) const
{
    return !(*this == c);
}

bool Complex::operator!() const
{
    return this->re == 0.0 && this->img == 0.0;
}

bool Complex::operator&&(const Complex& c) const
{
    bool nonNul1 = (this->re != 0.0 || this->img != 0.0);
    bool nonNul2 = (c.re != 0.0 || c.img != 0.0);

    return nonNul1 && nonNul2;
}

bool Complex::operator||(const Complex& c) const
{
    bool nonNul1 = (this->re != 0.0 || this->img != 0.0);
    bool nonNul2 = (c.re != 0.0 || c.img != 0.0);

    return nonNul1 || nonNul2;
}

void Complex::afficher() const
{
    cout << this->re;

    if (this->img >= 0)
        cout << " + " << this->img << "i";
    else
        cout << " - " << -this->img << "i";

    cout << endl;
}

Complex::~Complex()
{
}









































