#pragma once
#include <iostream>
#include <vector>

class Student {
public:
	void FirstName;
	void LastName;
	void EmailAddress;
	void Age;
	void DaysToComplete;
	void DegreeType;  //Note: Degree type should be populated in subclasses only.

};


/*                      "call to action" - makes everthing happen.
void main() {
	Student Student1;

	Student1.Print();

	Student1.SetNameAndPrice("Soap", 385);
	Student1.Print();

	delete Student;

	return 0;
}

*/