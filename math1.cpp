/*********************************************************************************************************************************************
 ** Program Filename: math1.cpp
 ** Author: Joelle Perez
 ** Date: 1/14/2018
 ** Description: Assignment 1 of CS 161
 ** Input: Equations
 ** Output: Solutions
 ********************************************************************************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main() {

		int x;
		int x1;
		int x2;

		cout << "1) Find the cosine of 2/3." << endl;
		cout << "	Adjacent(a) = 2" << endl;
		cout << "	Hypotenuse(h) = 3" << endl;
		cout << "	cos(a/h) = " << cos(2.0/3.0) << endl;

		cout << " " << endl;

		cout << "2) Find the sine of 2/3 all grouped by 2." << endl;
		cout << "	Opposite(o) = 2" << endl;
		cout << "	Hypotenuse(h) = 3" << endl;
		cout << "	sin(o/h) = " << sin(2.0/3.0) << endl;
		cout << "	2*sin(o/h) = " << 2*sin(2.0/3.0) << endl;

		cout << " " << endl;

		cout << "3) Find the tangent of -3/4." << endl;
		cout << "	sin(-3) = " << sin(-3.0) << endl;
		cout << "	cos(4) = " << cos(4.0) << endl;
		cout << "	tan(sin/cos) = " << tan(-3.0/4.0) << endl;

		cout << " " << endl;

		cout << "4) Find the log base 10 of 55." << endl;
		cout << "	Exponent(x): ln(55) = " << log(55.0) << endl;
		cout << "	Base(b): ln(10) = " << log(10.0) << endl;
		cout << "	ln(x)/ln(b) = " << log(55.0)/log(10.0) << endl;
		
		cout << " " << endl;

		cout << "5) Find the natural log of 60." << endl;
		cout << "	ln(60) = " << log(60.0) << endl;
		
		cout << " " << endl;

		cout << "Find the natural logs." << endl;

		cout << " " << endl;

		cout << "log base 2 of 15" << endl;
		cout << "	Exponent(x): ln(15) = " << log(15.0) << endl;
		cout << "	Base(b): ln(2) = " << log(2.0) << endl;
		cout << "	ln(x)/ln(b) = " << log(15.0)/log(2.0) << endl;

		cout << " " << endl;
		
		cout << "log base 4 of 40" << endl;
		cout << "	Exponent(x): ln(40) = " << log(40.0) << endl;
		cout << "	Base(b): ln(4) = " << log(4.0) << endl;
		cout << "	ln(x)/ln(b) = " << log(40.0)/log(4.0) << endl;

		cout << " " << endl;

		cout << "Solve the following equations for x = 1, 10, and 100. " << endl;
		x = 1;
		x1 = 10;
		x2 = 100;
		
		cout << " " << endl;

		cout << "Use x = 1 for 3^sin(x)" << endl;
		cout << "	3^sin(x) = " << pow(3, sin(x)) << endl;

		cout << " " << endl;

		cout << "Use x = 1 for log base 2 (x^2 + 1)" << endl;
		cout << "	Exponent(x): ln(x^2 + 1) = " << log(pow(x, 2) + 1) << endl;
		cout << "	Base(b): ln(2) = " << log(2.0) << endl;
		cout << "	ln(x)/ln(b) = " << log(pow(x, 2) + 1)/log(2.0) << endl;
		
		cout << " " << endl;

		cout << "Use x = 10 for 3^sin(x)" << endl;
		cout << "	3^sin(x) = " << pow(3, sin(x1)) << endl;
		
		cout << " " << endl;

		cout << "Use x = 10 for log base 2 (x^2 + 1)" << endl;
		cout << "	Exponent(x): ln(x^2 + 1) = " << log(pow(x1, 2) + 1) << endl;
		cout << "	Base(b): ln(2) = " << log(2.0) << endl;
		cout << "	ln(x)/ln(b) = " << log(pow(x1, 2) + 1)/log(2.0) << endl;

		cout << " " << endl;

		cout << "Use x = 100 for 3^sin(x)" << endl;
		cout << "	3^sin(x) = " << pow(3, sin(x2)) << endl;

		cout << " " << endl;

		cout << "Use x = 100 for log base 2 (x^2 + 1)" << endl;
		cout << "	Exponent(x): ln(x^2 + 1) = " << log(pow(x2, 2) + 1) << endl;
		cout << "	Base(b): ln(2) = " << log(2.0) << endl;
		cout << "	ln(x)/ln(b) = " << log(pow(x2, 2) + 1)/log(2.0) << endl;

		return 0;

}

