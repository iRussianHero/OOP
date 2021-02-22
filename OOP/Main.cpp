#include <iostream>
#include <string>

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