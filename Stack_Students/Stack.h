#ifndef __STACK1_H__
#define __STACK1_H__
#include "Student.h"

#include <string>
//using namespace std;

class Stack
{
private:
	int size; //size of the list
	Student* list; //list of Student
public:
	Stack(); //default constructor. 
	Stack(int size, Student* list);
	void Add(Student st); //adds a student record to the end of list
	void Delete(); //deletes the last record of the list
	void Show(); //Shows the list records
};
#endif