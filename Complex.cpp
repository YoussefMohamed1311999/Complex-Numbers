#include "Complex.h"

Complex::Complex(double a,double b)
{
	Real=a;
	Imaginary=b;
}

void Complex:: setReal(double a)
{
	Real=a;
}
void Complex:: setImaginary(double b)
{
	Imaginary=b;
}
double Complex:: getReal()const
{
	return Real;
}
double Complex:: getImaginary()const
{
	return Imaginary;
}
Complex Complex:: operator +(const Complex& c)const
{
	double r =Real+c.Real;
	double i=Imaginary+c.Imaginary;
	return Complex(r,i);

}
Complex Complex:: operator *(const Complex& c)const
{
	double r=(Real*c.Real-Imaginary*c.Imaginary);
	double i=(Real*c.Imaginary+Imaginary*c.Real);
	return Complex(r,i);
}
Complex Complex:: operator -(const Complex& c)const
{
	double r= Real-c.Real;
	double i=Imaginary-c.Imaginary;
	return Complex(r,i);
}

Complex Complex:: operator==(Complex&i1)
{
	int check = true;
	if (Real != i1.Real && Imaginary != i1.Imaginary) {
		check = false;
	}
	return check;
}

Complex::~Complex(void)
{
}
