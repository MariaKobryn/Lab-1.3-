#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h> 
#include "LongLong.h"

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	LongLong m;
	m.Read();
	m.Display();
	cout << "Addition: " << m.Add() << endl;
	cout << "Multiplication: " << m.Multiply() << endl;
	cout << "Comparison: " << " \n ";
	m.Compare();
	cin.get();
	return 0;
}
