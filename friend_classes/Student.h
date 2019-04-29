#pragma once
#include<iostream>
#include<string>
#include"Print.h"
using namespace std;

class Student;
class Print;
class Student {
	string name;
	int age;
public:
	Student();
	Student(string name, int age);

	friend Print;
};