#include<iostream>
#include<string>
using namespace std;

#ifndef PERSON_H
#define PERSON_H

class Person
{
	string first_name;
	string last_name;
protected:
	int age;
public:
	Person();
	Person(string,string,int);
	void printInformation();
	string getfirstname();
	void setfirstname(string);
	string getlastname();
	void setlastname(string);
	~Person();
	
};
#endif;