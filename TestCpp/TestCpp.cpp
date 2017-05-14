// TestCpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>


using namespace std;

class MyClass
{
public:
	string a;
	int b;

	int getDouble() const
	{
		return b * 2;
	}
};

int test(int c)
{
	cout << c;
	return c + 1;
}

int main()
{
	MyClass c = MyClass();
	c.a = "something";
	c.a.c_str();
	int x = c.getDouble();
	cout << x;
	cout << c.a;

	int *mi = new int;
	*mi = 3;
	int **mr = &mi;

	cout << test(3);

	return 0;
}

