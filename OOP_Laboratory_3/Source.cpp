//
//
#include <iostream>
#include "String.h"
using namespace std;

int main()
{
	String a;
	a.input();
	String b(100);
	b.input();

	cout << "enter str: ";
	char temp[100];
	cin.getline(temp, 100);
	String c(temp);

	String d{ c };

	a.print();
	b.print();
	c.print();
	d.print();

	return 0;
}