
#pragma once
#include "Student.h"
#include "SoftwareStudent.h"
#include <iostream>

SoftwareStudent::SoftwareStudent() {}

SoftwareStudent::SoftwareStudent(string studentID, string FirstName, string LastName, string EmailAddress, int Age, int DaysToComplete, Degree DegreeType) : Student(studID, fiName, laName, emAddr, a, nmDays) {
	degree = deg;
}

Degree SoftwareStudent::getDegreeType() {
	return degree;
}

void SoftwareStudent::print() {
	cout << "\t" << "First Name: " << getFirstName() << "\t" << "Last Name: " << getLastName() << "\t" << "Age: " << getAge()
		<< "\t" << "Days To Complete: {"; cout << getDaysToComplete()[0] << ", " << getDaysToComplete()[1] << ", " << getDaysToComplete()[2] << "}";
	cout << " Degree: Software" << '\n';
}