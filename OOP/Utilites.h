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
	cout << "�������:\t" << contacts.tel << endl;
	cout << "E-mail:\t" << contacts.email << endl;
	cout << "������:\t" << contacts.address << endl;
}

void PrintPerson(Person person)
{
	cout << "���:\t" << person.firstName << endl;
	cout << "�������:\t" << person.lastName << endl;
	cout << "�������:\t" << person.lastName << endl;
	cout << "���� ��������:\t";
	PrintDate(person.dataOfBirth);
	cout << "�������:\t" << person.age << endl;
	PrintContacts(person.contacts);

}

void PrintTeacher(Teacher teacher)
{
	cout << "=== ������������� ===" << endl;
	PrintPerson(teacher.personInfo);
	cout << "�������������:\t" << teacher.subject << endl;
	cout << "������ �������:\t" << teacher.degree << endl;
	cout << "=====================" << endl;
}