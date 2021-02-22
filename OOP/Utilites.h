#pragma once
#include <iostream>
#include <string>

#include "Date.h"
#include "Contacts.h"
#include "Person.h"
#include "Teacher.h"

using namespace std;

void PrintDate(Date date)
{
	cout << date.day << ".";
	cout << date.month << ".";
	cout << date.year << endl;
}

void PrintContacts(Contacts contacts)
{
	cout << "Телефон:\t" << contacts.tel << endl;
	cout << "E-mail:\t" << contacts.email << endl;
	cout << "Адресс:\t" << contacts.address << endl;
}

void PrintPerson(Person person)
{
	cout << "Имя:\t" << person.firstName << endl;
	cout << "Фамилия:\t" << person.lastName << endl;
	cout << "Фамилия:\t" << person.lastName << endl;
	cout << "Дата рождения:\t";
	PrintDate(person.dataOfBirth);
	cout << "Возраст:\t" << person.age << endl;
	PrintContacts(person.contacts);

}

void PrintTeacher(Teacher teacher)
{
	cout << "=== Преподаватель ===" << endl;
	PrintPerson(teacher.personInfo);
	cout << "Специализация:\t" << teacher.subject << endl;
	cout << "Учёная степень:\t" << teacher.degree << endl;
	cout << "=====================" << endl;
}