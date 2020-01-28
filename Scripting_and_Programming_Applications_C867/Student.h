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
	int DaysToComplete[];
	string DegreeType;  //Note: Degree type should be populated in subclasses only.

};
