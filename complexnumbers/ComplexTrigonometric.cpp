#include "ComplexTrigonometric.h"
#include <string>
#include <iostream>
#include <math.h>

#define PI 3.14159265

namespace CPPComplex {
	
	ComplexTrigonometric::ComplexTrigonometric(double argument, double radius){
		this->argument = argument;
		this->radius = radius;
		this->real = radius * cos(argument * PI / 180);
		this->imaginary = radius * sin(argument * PI / 180);
	}

	ComplexTrigonometric::ComplexTrigonometric(Complex complex){
		this->real = complex.getReal();
		this->imaginary = complex.getImaginary();
		this->argument = atan2(imaginary, real) * 180 / PI;
		this->radius = sqrt((real*real) + (imaginary * imaginary));
	}
	
	void ComplexTrigonometric::print() {
		std::cout << radius << "(" << "cos("<<argument<<")" << " + " << "sin("<<argument<<")" << "i)" << std::endl;
		std::cout << real << (imaginary>0?"+":"") << imaginary << "i" << std::endl;
	}

	const ComplexTrigonometric ComplexTrigonometric::operator=(Complex complex) {
		this->real = complex.getReal();
		this->imaginary = complex.getImaginary();
		this->argument = atan2(imaginary, real) * 180 / PI;
		this->radius = sqrt((real * real) + (imaginary * imaginary));
		return true;
	}

}