#include "String.h"
#include <iostream>
using namespace std;

void String::input()
{
	cout << "input";//когда создавал с temp выдавал ошибку!!!
	cin >> str;
}

void String::print()
{
	cout << str << endl;
}
