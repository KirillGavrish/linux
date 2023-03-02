#include "complex.hpp"


Complex::Complex(double re, double im)
    {
    	this->x = re;
    	this->y = im;
    }
double Complex::real() const {return x;};
double Complex::imag() const {return y;};
Complex & Complex::operator+=(Complex const &im) 
{
	x += im.real(); 
	y += im.imag();
	return *this;
};
Complex & Complex::operator-=(Complex const &im) 
{
	x -= im.real(); 
	y -= im.imag();
	return *this;
};

Complex & Complex::operator*=(Complex const &im) 
{
	double x1 = x, y1 = y;
	x = x1*im.real() - y1*im.imag(); 
	y = x1*im.imag() + y1*im.real();
	return *this;
};

Complex & Complex::operator/=(Complex const &im) 
{
	double x1 = x, y1 = y;
	x = ( x1*im.real()        + y1*im.imag() )/ 
	    ( im.real()*im.real() + im.imag()*im.imag() ); 
	y = ( im.real()*y1         - x1*im.imag() )/
		( im.real()*im.real() + im.imag()*im.imag() );
	return *this;
};


double norm(Complex const &im) 
	{return im.real()*im.real() + im.imag()*im.imag();}

double  arg(Complex const &im)
	{return std::atan2(im.imag(), im.real());}

Complex operator+(Complex const &im1, Complex const &im2)
{
	Complex res;
	res += im1; res += im2;  
	return res;
}

Complex operator-(Complex const &im1, Complex const &im2)
{
	Complex res;
	res += im1; res -= im2;
	return res;
}

Complex operator*(Complex const &im1, Complex const &im2)
{
	Complex res;
	res += im1;
	res *= im2; 
	return res;
}

Complex operator/(Complex const &im1, Complex const &im2)
{
	Complex res;
	res += im1;
	res /= im2;
	return res;
}

