// Testing.cpp : Defines the entry point for the console application.
//
// LOL

// Include libraries and header files
#include "stdafx.h"
#include <iostream>

void voidValue(int x) // some test void function for shits and gigs
{
	using namespace std;
	cout << "The value of this one is: " << x << endl;
}

int varCalc() // Calculate space of variables
{
	using namespace std;
	cout << "bool:\t\t" << sizeof(bool) << " bytes" << endl;
	cout << "char:\t\t" << sizeof(char) << " bytes" << endl;
	cout << "wchar_t:\t" << sizeof(wchar_t) << " bytes" << endl;
	cout << "char16_t:\t" << sizeof(char16_t) << " bytes" << endl; // C++11, may not be supported by your compiler
	cout << "char32_t:\t" << sizeof(char32_t) << " bytes" << endl; // C++11, may not be supported by your compiler
	cout << "short:\t\t" << sizeof(short) << " bytes" << endl;
	cout << "int:\t\t" << sizeof(int) << " bytes" << endl;
	cout << "long:\t\t" << sizeof(long) << " bytes" << endl;
	cout << "long long:\t" << sizeof(long long) << " bytes" << endl; // C++11, may not be supported by your compiler
	cout << "float:\t\t" << sizeof(float) << " bytes" << endl;
	cout << "double:\t\t" << sizeof(double) << " bytes" << endl;
	cout << "long double:\t" << sizeof(long double) << " bytes\n" << endl;
	printf("pingas is the best\n");
	return(0);
}

int main()
{
	int printValue{ 5 };
	using namespace std;
	cout << "The Value set currently is: " << printValue << endl;
	cout << voidValue << endl;
	varCalc();
	return 0;
}

