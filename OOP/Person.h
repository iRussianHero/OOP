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
	cout << "=== Информация о человеке ===" << endl;
	cout << "Имя:\t" << person.firstName << endl;
	cout << "Фамилия:\t" << person.lastName << endl;
	cout << "Возраст:\t" << person.age << endl;
	PrintDate(person.dataOfBirth);
	cout << "Рост:\t" << person.height << endl;
	cout << "=============================" << endl;
}