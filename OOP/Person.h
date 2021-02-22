#pragma once
#include <iostream>
#include "Date.h"
#include "Contacts.h"

using namespace std;

struct Person
{
	string firstName;
	string lastName;
	Date dataOfBirth;
	int age;
	Contacts contacts;
};