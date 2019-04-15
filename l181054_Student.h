#include<iostream>
#include<string>
#include"Person.h"
using namespace std;
#pragma once
class Student:private Person
{
	string fyp_name;
	float cgpa;
public:
	Student();
	Student(string,string,int,float);
	void printStudent();
	~Student();

};
