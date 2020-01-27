#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <array>

class Student {
public:
	string StudentID;
	string FirstName;
	string LastName;
	string EmailAddress;
	int Age;
	int DaysToComplete<>;
	string DegreeType;  //Note: Degree type should be populated in subclasses only.

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