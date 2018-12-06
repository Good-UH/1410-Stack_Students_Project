#include "Student.h"
#include <iostream>

Student::Student() {
	("", 0, "");
} //default constructor. 
Student::Student(string name, int id, string dob) {
	Name = name;
	ID = id;
	DOB = dob;
}//Initializing the variables to return 
void Student::Print() {
	cout << Name << " " << ID << " " << DOB << endl;
}// Prints the Name, Id and Dob Id and Dob