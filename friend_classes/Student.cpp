#include "Student.h"

Student::Student()
{
	name = "";
	age = 0;
}

Student::Student(string name, int age)
{
	this->name = name;
	this->age = age;
}
