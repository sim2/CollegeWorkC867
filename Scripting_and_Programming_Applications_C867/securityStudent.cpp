
#include "pch.h"
#include "SecurityStudent.h"
#include <iostream>

SecurityStudent::SecurityStudent() {}

SecurityStudent::SecurityStudent(string studentID, string FirstName, string LastName, string EmailAddress, int Age, int *DaysToComplete, Degree DegreeType) : Student(studentID, FirstName, LastName, EmailAddress, Age, DaysToComplete) {
	degree = DegreeType;
}

Degree SecurityStudent::getDegreeType() {
	return DegreeType;
}

void SecurityStudent::print() {
	cout << "\t" << "First Name: " << getFirstName() << "\t" << "Last Name: " << getLastName() << "\t" << "Age: " << getAge()
		<< "\t" << "Days To Complete: {"; cout << getDaysToComplete()[0] << ", " << getDaysToComplete()[1] << ", " << getDaysToComplete()[2] << "}";
	cout << " Degree: Security" << '\n';
}