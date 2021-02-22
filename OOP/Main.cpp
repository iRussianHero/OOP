#include <iostream>
#include <string>

using namespace std;

struct Person
{
	string firstName;
	string lastName;
	int age;
	double height;
}; 

void printPerson(Person person)
{
	cout << "=== ���������� � �������� ===" << endl;
	cout << "���:\t" << person.firstName << endl;
	cout << "�������:\t" << person.lastName << endl;
	cout << "�������:\t" << person.age << endl;
	cout << "����:\t" << person.height << endl;
	cout << "=============================" << endl;
}
int main()
{
	Person person_1, person_2;
	person_1.firstName = "Roman";
	person_1.lastName = "Yakushev";
	person_1.age = 33;
	person_1.height = 184;

	person_2.firstName = "Anna";
	person_2.age = 20;

	printPerson(person_1);
	printPerson(person_2);

	return 0;
}