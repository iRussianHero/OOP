#pragma once
#include <iostream>
using namespace std;

struct Date {
	int year;
	int month;
	int day;
};

void PrintDate(Date date)
{
	cout << date.day << ".";
	cout << date.month << ".";
	cout << date.year << endl;
}