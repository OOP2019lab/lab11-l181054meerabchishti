#include"Student.h"

Student::Student():Person("UNKNOWN","UNKNOWN",-1),fyp_name("UNKNOWN"),cgpa(-1)
{
	cout<<"Student() called"<<endl;
	
}
Student::Student(string fname,string lname,int age, float cgpain):Person(fname,lname,age)
{
	cout<<"Student() overloaded called"<<endl;
	this->fyp_name="UNKNOWN";
	this->cgpa=cgpain;
}
Student::~Student()
{
	cout<<"~Student() invoked"<<endl;
}
void Student::printStudent()
{

	cout << getfirstname() << " "  << getlastname()
		<< "is " << age <<"years old, his cgpa is " << cgpa<<endl;


}