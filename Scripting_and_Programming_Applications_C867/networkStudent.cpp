
#include "pch.h"
#include "NetworkStudent.h"
#include <iostream>

NetworkStudent::NetworkStudent() {}

NetworkStudent::NetworkStudent(string studentID, string FirstName, string LastName, string EmailAddress, int Age, int *DaysToComplete, Degree DegreeType) : Student(studentID, FirstName, LastName, EmailAddress, Age, DaysToComplete) {
	degree = DegreeType;
}

Degree NetworkStudent::getDegree() {
	return DegreeType;
}

void NetworkStudent::print() {
	cout << "\t" << "First Name: " << getFirstName() << "\t" << "Last Name: " << getLastName() << "\t" << "Age: " << getAge()
		<< "\t" << "daysInCourse: {"; cout << getDaysToComplete()[0] << ", " << getDaysToComplete()[1] << ", " << getDaysToComplete()[2] << "}";
	cout << " Degree: Networking" << '\n';
}