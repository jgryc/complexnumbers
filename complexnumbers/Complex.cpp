#include "Complex.h"
#include <string>
#include <iostream>
#include <math.h>

#define PI 3.14159265

namespace CPPComplex {
	Complex::Complex(const double& real, const double& imaginary) {
		this->real = real;
		this->imaginary = imaginary;
		setArgument();
	}

	Complex::Complex(const double& number, bool isReal) {

		if (isReal) {
			real = number;
			imaginary = 0;
		}
		else {
			real = 0;
			imaginary = number;
		}
		setArgument();
	}

	Complex::Complex() {
		real = 0;
		imaginary = 0;
		argument = 0;
	}



	const Complex Complex::operator+ (const Complex& complex) const {
		double r = this->real + complex.real;
		double i = this->imaginary + complex.imaginary;
		return Complex(r, i);
	}


	const Complex Complex::operator- (const Complex& complex) const {
		double r = this->real - complex.real;
		double i = this->imaginary - complex.imaginary;
		return Complex(r, i);
	}

	const Complex Complex::operator* (const Complex& complex) const {
		double r = this->real * complex.real - this->imaginary * complex.imaginary;
		double i = this->real * complex.imaginary + complex.real * this->imaginary;
		return Complex(r, i);
	}

	const Complex Complex::operator/ (const Complex& complex) const {
		double denom = (complex.real * complex.real) + (complex.imaginary * complex.imaginary);
		double r = ((this->real * complex.real) + (this->imaginary * complex.imaginary)) / denom;
		double i = ((this->imaginary * complex.real) - (this->real * complex.imaginary)) / denom;
		return Complex(r, i);
	}

	const Complex Complex::operator=(const Complex& complex){
		this->real = complex.real;
		this->imaginary = complex.imaginary;
		this->argument = complex.argument;
		return *this;
	}

	bool Complex::operator> (Complex complex){
		return this->getModule() > complex.getModule();
	}
	
	bool Complex::operator< (Complex complex) {
		return this->getModule() < complex.getModule();
	}
	

	bool Complex::operator== (Complex complex) {
		return this->real == complex.real && this->imaginary == complex.imaginary;
	}
	

	double Complex::getModule() {
		return sqrt((this->real * this->real) + (this->imaginary * this->imaginary));
	}

	double Complex::getArgument() {
		return this->argument;
	}

	void Complex::setArgument() {
		double arg = atan2(this->imaginary, this->real) * 180 / PI;
		if (arg < 0) {
			arg += 360;
		}
		this->argument = arg;
	}

	double Complex::getReal() {
		return this->real;
	}

	double Complex::getImaginary() {
		return this->imaginary;
	}

	void Complex::print() {
		if (this->imaginary != 0 && this->real != 0) {
			std::cout << "Complex number: " << this->real << (imaginary > 0 ? "+" : "") << this->imaginary << "i" << std::endl;
		}
		else if (this->imaginary != 0) {
			std::cout << "Complex number: " << this->imaginary << "i " << std::endl;
		}
		else if (this->real != 0) {
			std::cout << "Complex number: " << this->real << " " << std::endl;

		}
		else {
			std::cout << 0 << std::endl;
		}
		std::cout << this->getArgument() << " deegres " << this->getModule() << " abs" << std::endl;
	}
}



