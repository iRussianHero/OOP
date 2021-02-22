#pragma once
#include <iostream>
#include <string>
#include "Date.h"
#include "Person.h"

using namespace std;

enum Degree {
	Master, PhD
};
enum Subject {
	Math, CS, Ecology
};

struct Teacher {
	Person personInfo;
	Degree degree;
	Subject subject;
};