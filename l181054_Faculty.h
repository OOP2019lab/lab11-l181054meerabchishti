#include<iostream>
#include"Person.h"
using namespace std;

#pragma once
class Faculty:private Person
{
	int course_count;
	int telephone_no;
public:
	Faculty();
	Faculty(string,string,int,int,int);
	~Faculty();
	void printFaculty();
};