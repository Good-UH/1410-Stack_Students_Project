#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <string>

using namespace std;
class Student
{
public:
	string Name;
	int ID;
	string DOB; //Date of birth
	Student(); //default constructor. 
	Student(string name, int id, string dob);
	void Print(); // Prints the Name, Id and Dob
};

#endif