//header file for Assign8 class
//

#pragma once
#include <string>
using namespace std;

class Complex {

private:
	double realPart;
	double imaginaryPart;

public:
	Complex(double a = 1, double b = 0);
	Complex plusEq(Complex &object);
	Complex minusEq(Complex &object);
	void display() const;
	string toString() const;
	double getRealPart() const;
	void setRealPart(double &a);
	double getImaginaryPart() const;
	void setImaginaryPart(double &b);

};
