#include"Faculty.h"

Faculty::Faculty():Person("UNKNOWN","UNKNOWN",-1),course_count(-1)
{
	cout<<"Faculty() called"<<endl;
	
}

Faculty::Faculty(string fname,string lname,int age,int coursecount,int telephone_no):Person(fname,lname,age)
{
	cout<<"Faculty() overloaded called"<<endl;
	this->course_count=coursecount;
	if(telephone_no>=000 && telephone_no<=999)
	{
		this->telephone_no=telephone_no;
	}
	else
	{
		cout<<"Try again with a valid three digit number"<<endl;
	}
}
Faculty::~Faculty()
{
	cout<<"~Faculty() invoked"<<endl;
}
void Faculty::printFaculty()
{
	cout<<"Faculty Member name:"<< getfirstname()<<" "<<getlastname()<< " "<<"Age:"<<" "<<age<<" "<<"Number of courses teaching"<<" "<<course_count<<" "<<"Extension number:"<<" "<<telephone_no<<endl;
}
