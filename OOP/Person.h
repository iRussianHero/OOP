#pragma once
#include <iostream>
using namespace std;

struct Person
{
	string firstName;
	string lastName;
	int age;
	Date dataOfBirth;
	double height;
};

void printPerson(Person person)
{
	cout << "=== ���������� � �������� ===" << endl;
	cout << "���:\t" << person.firstName << endl;
	cout << "�������:\t" << person.lastName << endl;
	cout << "�������:\t" << person.age << endl;
	PrintDate(person.dataOfBirth);
	cout << "����:\t" << person.height << endl;
	cout << "=============================" << endl;
}