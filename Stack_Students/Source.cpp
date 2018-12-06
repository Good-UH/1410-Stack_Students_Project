#include <iostream>
#include "Stack.h"
#include "Student.h"

using namespace std;

int main()
{
	Student st1("John", 100, "10/11/1988");
	Student st2("Jane", 101, "09/12/1989");
	Student st3("Johnny", 102, "11/01/1990");
	Stack stack;
	stack.Add(st1);
	stack.Add(st2);
	stack.Add(st3);
	stack.Show();
	cout << "--------\n";
	stack.Delete();
	stack.Add(st1);
	stack.Show();
	system("pause");
	return 0;
}