#include <iostream>
#include <string>
#include "Date.h"
#include "Person.h"

using namespace std;

int main()
{
	Person person_1, person_2;
	person_1.firstName = "Roman";
	person_1.lastName = "Yakushev";
	person_1.age = 33;
	person_1.dataOfBirth.year = 1988;
	person_1.dataOfBirth.month = 01;
	person_1.dataOfBirth.day = 01;
	person_1.height = 184;

	person_2.firstName = "Anna";
	person_2.age = 20;

	printPerson(person_1);
	printPerson(person_2);

	return 0;
}