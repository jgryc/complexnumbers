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
	


	const ComplexTrigonometric ComplexTrigonometric::operator=(Complex complex) {
		this->real = complex.getReal();
		this->imaginary = complex.getImaginary();
		this->argument = atan2(imaginary, real) * 180 / PI;
		this->radius = sqrt((real * real) + (imaginary * imaginary));
		return true;
	}

	void ComplexTrigonometric::scanFrom(std::istream& strm) {
		strm >> radius;
		if (strm.peek() == ',') {
			strm.ignore();
				strm >> argument;
		}else {
			argument = 0;
		}
		this->real = radius * cos(argument * PI / 180);
		this->imaginary = radius * sin(argument * PI / 180);
	}
/*
	void ComplexTrigonometric::print(std::ostream& strm) {
		Complex::print(strm);
		
	}
	*/
}