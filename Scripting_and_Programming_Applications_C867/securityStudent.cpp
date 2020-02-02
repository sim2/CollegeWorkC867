
#include "pch.h"
#include "SecurityStudent.h"
#include <iostream>

SecurityStudent::SecurityStudent() {}

SecurityStudent::SecurityStudent(string studentID, string FirstName, string LastName, string EmailAddress, int Age, int *DaysToComplete, Degree DegreeType) : Student(studID, fiName, laName, emAddr, a, nmDays) {
	degree = deg;
}

Degree SecurityStudent::getDegreeType() {
	return degree;
}

void SecurityStudent::print() {
	cout << "\t" << "First Name: " << getFirstName() << "\t" << "Last Name: " << getLastName() << "\t" << "Age: " << getAge()
		<< "\t" << "Days To Complete: {"; cout << getDaysToComplete()[0] << ", " << getDaysToComplete()[1] << ", " << getDaysToComplete()[2] << "}";
	cout << " Degree: Security" << '\n';
}