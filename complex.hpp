#include <cmath>
#include <cstdint>
#include <utility>

#include <iostream>


class Complex
{
    double x, y;
public:
    Complex(double re = 0., double im = 0.);
    double real() const;
    double imag() const;
    Complex &operator+=(Complex const &);
    Complex &operator-=(Complex const &);
    Complex &operator*=(Complex const &);
    Complex &operator/=(Complex const &);
};

double norm(Complex const &);
double  arg(Complex const &);
Complex operator+(Complex const &, Complex const &);
Complex operator-(Complex const &, Complex const &);
Complex operator*(Complex const &, Complex const &);
Complex operator/(Complex const &, Complex const &);

