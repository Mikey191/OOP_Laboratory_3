#pragma once
#include <string>
#include <iostream>
using namespace std;

class String
{
private:
	char* str;
	int length;
public:
	String() :
		str(new char[80]),
		length (80)
	{
		cout << "const #1..." << endl;
	}
	String(int value):
		str(new char[value]),
		length(value)
	{
		cout << "const #2..." << endl;
	}
	String(char* temp) :
		str(new char[strlen(temp)+1]),//не прибавил +1
		length(strlen(temp))
	{
		for (int i = 0; i <= strlen(temp); i++)
		{
			str[i] = temp[i];
		}
		cout << "const #3..." << endl;
	}
	String(const String& tempstr) :
		str(new char[tempstr.length + 1]),//не прибавил +1
		length(tempstr.length)
	{
		for (int i = 0; i <= tempstr.length; i++)//либо равно<=
		{
			str[i] = tempstr.str[i];
		}
		cout << "const copy..." << endl;
	}
	~String() { delete[] str; }
	void input();
	void print();
};

