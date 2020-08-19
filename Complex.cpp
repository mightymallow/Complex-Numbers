//Implementation file for Assign8 class
// Gergely Sajdik A00976672 1.0

#include "Complex.h"
#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

//default constructor
Complex::Complex(double a, double b) {
	realPart = a;
	imaginaryPart = b;
}

//returns a complex number after adding a complex number to the target complex number
Complex Complex::plusEq(Complex &object) {
	realPart += object.getRealPart();
	imaginaryPart += object.getImaginaryPart();
	return Complex(realPart, imaginaryPart);
}

//returns a complex number after subtracting a complex number to the target complex number
Complex Complex::minusEq(Complex &object) {
	realPart -= object.getRealPart();
	imaginaryPart -= object.getImaginaryPart();
	return Complex(realPart, imaginaryPart);
}

//displays the value of the complex number
void Complex::display() const {
	string temp = toString();
	cout << temp;
}

//converts the complex number into a string with precision of 4
string Complex::toString() const {
	double tempA = getRealPart();
	double tempB = getImaginaryPart();
	stringstream ss;
	stringstream ss2;
	ss << fixed << setprecision(4) << tempA;
	ss2 << fixed << setprecision(4) << tempB;
	string myStringA = ss.str();
	string myStringB = ss2.str();
	return "( " + myStringA + " , " + myStringB + " )";
}

//accessor for real part of complex number
double Complex::getRealPart() const {
	return realPart;
}

//mutator for real part of complex number
void Complex::setRealPart(double & a) {
	realPart = a;
}

//accessor for imaginary part of complex number
double Complex::getImaginaryPart() const {
	return imaginaryPart;
}

//mutator for imaginary part of complex number
void Complex::setImaginaryPart(double & b) {
	imaginaryPart = b;
}

