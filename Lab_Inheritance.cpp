#include <iostream>
#include"Person.h"
#include"Student.h"
#include"Faculty.h"
 void main()
 {
	 Student s("Ted","Thompson",22,3.91);
	Faculty f("Richard","Karp",45,2,420);
		 //here the number of courses is 2
		 //and the extension number is 420
// Person() overloaded called
//Student() overloaded called
//Person() overloaded called
//Faculty() overloaded called
//Ted Thompsonis 22years old, his cgpa is 3.91
//Faculty Member name:Richard Karp Age: 45 Number of courses reacing 2 Extension number: 420
	s.printStudent();
	f.printFaculty();
	system("Pause");
	 
 }