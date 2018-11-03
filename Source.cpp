#include<iostream>

#include"Complex.h"
using namespace std;
ostream & operator <<( ostream&out,const Complex& c)
{
	out << c.getReal()<<"+"<<c.getImaginary()<<"i"<<endl;
	return out;
}
istream& operator>>(istream& in,Complex& c)
{
	double r,i;
	cout<<"Enter Real part Then Imaginary Part\n";
	in>>r>>i;
	c.setImaginary(i);
	c.setReal(r);
	return in;
}
int main()
{
	Complex C1,C2,C3,C4,C5;
	cin>>C1>>C2;
	C3=C1+C2;
	C4=C3*C2;
	C5=C4-C3;
	cout<<C3<<C4<<C5;
	C3 == C4;
	system("pause");
	return 0;
}
