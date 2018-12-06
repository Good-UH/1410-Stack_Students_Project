#include "Stack.h"
#include "Student.h"
#include <iostream>

using namespace std;

Stack::Stack() {
	size = 0;
	list = NULL;
} //default constructor.
void Stack::Add(Student st) {
	//Creating a new dynamic array 
	Student *array;
	//Incrementing the size of the array
	array = new Student[size + 1];
	//Creating a for loop to copy the records into the new array 
	for (int index = 0; index < size; index++) {
		array[index] = list[index];
	}
	//Deleting the original array because it it no longer needed
	delete[] list;
	//Making the array equal to initialized class in the main() function
	array[size] = st;
	list = array;
	size++;
} //adds a student record to the end of list
void Stack::Delete() {
	//Deleting the size of the array to eliminate the last record
	size--;
	if (size < 0)//If size is deleted until it is negative, it will make size 0
		size = 0;
}//deletes the last record of the list
void Stack::Show() {
	//For loop to print the records
	for (int index = 0; index < size; index++) {
		list[index].Print();
	}
}//Shows the list records