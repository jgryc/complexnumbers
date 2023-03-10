#ifndef COMPLEX_HPP
#define COMPLEX_HPP
#pragma once
#include <string>
#include <iostream>
namespace CPPComplex {
	class Complex
	{
	private: 
		void setArgument();
		   
	protected:
		double real;
		double imaginary;
		double argument;
		
	public:
		Complex(const double&, const double&);
		Complex(const double&, bool);
		Complex();
		virtual ~Complex() {
			//std::cout << "Usunieto obiekt typu complex." << std::endl;
		};
		const Complex operator*(const Complex&) const;
		const Complex operator+(const Complex&) const;
		const Complex operator-(const Complex&) const;
		const Complex operator/(const Complex&) const;
		virtual const Complex operator=(const Complex&);
		bool operator>(Complex);
		bool operator<(Complex);
		bool operator==(Complex);
		double getArgument();
		virtual double getModule();
		double getReal();
		double getImaginary();
		virtual void print(std::ostream& strm);
		virtual void scanFrom(std::istream& strm);
		
	};

	inline std::istream& operator >> (std::istream& strm, Complex& complex)
	{
		complex.scanFrom(strm);
		return strm;
	}
	
	inline std::ostream& operator << (std::ostream& strm, Complex& complex) {
		complex.print(strm);
		return strm;
	}
}

#endif // COMPLEX_HPP

