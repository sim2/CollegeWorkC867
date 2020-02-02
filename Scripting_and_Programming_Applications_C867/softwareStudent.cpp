#include "Student.h"
#include "SoftwareStudent.h"
#include <iostream>

SoftwareStudent::SoftwareStudent() {}

SoftwareStudent::SoftwareStudent(string studentID, string FirstName, string LastName, string EmailAddress, int Age, int DaysToComplete, Degree DegreeVariable) : Student(studentID, FirstName, LastName, EmailAddress, Age, DaysToComplete) {
	DegreeType = DegreeVariable;
}

Degree SoftwareStudent::getDegreeType() {
	return DegreeType;
}

void SoftwareStudent::print() {
	cout << "\t" << "First Name: " << getFirstName() << "\t" << "Last Name: " << getLastName() << "\t" << "Age: " << getAge()
		<< "\t" << "Days To Complete: {"; cout << getDaysToComplete()[0] << ", " << getDaysToComplete()[1] << ", " << getDaysToComplete()[2] << "}";
	cout << " Degree: Software" << '\n';
}