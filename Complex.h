#pragma once
class Complex
{
	double Real,Imaginary;
public:
	
	Complex(double=0,double=0);
	void setReal(double);
	void setImaginary(double);
	double getReal()const;
	double getImaginary()const;
	Complex operator +(const Complex&)const;
	Complex operator *(const Complex&)const;
	Complex operator -(const Complex&)const;
	Complex operator==(Complex&);

	~Complex(void);
};

