#ifndef ComplexTrigonometric_HPP
#define ComplexTrigonometric_HPP
#pragma once
#include <string>
#include "Complex.h"

namespace CPPComplex {
	class ComplexTrigonometric : public Complex {

	private:
		double radius;

	public:
		ComplexTrigonometric(double argument=0, double radius=0);
		ComplexTrigonometric(Complex);
		const ComplexTrigonometric operator=(const Complex);
		void print();
		

	};
}


#endif // ComplexTrigonometric_HPP
