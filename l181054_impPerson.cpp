#include"Person.h"

Person::Person():first_name("UNKNOWN"),last_name("UNKNOWN"),age(-1)
{
	cout<<"Person() called"<<endl;
}
Person::Person(string fname,string lname,int age)
{
	cout<<"Person() overloaded called"<<endl;
	this->first_name=fname;
	this->last_name=lname;
	this->age=age;

}
Person::~Person()
{
	cout<<"~Person() invoked"<<endl;
}
void Person::printInformation()
{
	cout<<this->first_name<<" "<<this->last_name<<" "<<"is"<<" "<<this->age<<" "<<" years old"<<endl;
}
string Person::getfirstname()
{
	return this->first_name;
}
string Person::getlastname()
{
	return this->last_name;
}
void Person::setfirstname(string n)
{
	this->first_name=n;
}
void Person::setlastname(string n1)
{
	this->last_name=n1;
}