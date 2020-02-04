#include <string>
#include <array>
#include <vector>
#include <sstream>
#include <iostream>
#include "degree.h"
#include "Student.h"
#include "roster.h"
#include "networkStudent.h"
#include "securityStudent.h"
#include "softwareStudent.h"
#include "pch.h"

using namespace std;

Roster::Roster(){

}

void Roster::add(string studentIDVariable, string FirstNameVariable, string LastNameVariable, string EmailAddressVariable, int AgeVariable, int DaysToComplete1Variable, int DaysToComplete2Variable, int DaysToComplete3Variable, Degree DegreeTypeVariable) {
	int DaysToComplete[] = { DaysToComplete1Variable, DaysToComplete2Variable, DaysToComplete3Variable };
	if (DegreeTypeVariable == Degree::NETWORKING) {
		classRosterArray[addIndex++] = new NetworkStudent(studentIDVariable, FirstNameVariable, LastNameVariable, EmailAddressVariable, AgeVariable, DaysToComplete, DegreeTypeVariable);
	}
	if (DegreeTypeVariable == Degree::SECURITY) {
		classRosterArray[addIndex++] = new SecurityStudent(studentIDVariable, FirstNameVariable, LastNameVariable, EmailAddressVariable, AgeVariable, DaysToComplete, DegreeTypeVariable);
	}
	if (DegreeTypeVariable == Degree::SOFTWARE) {
		classRosterArray[addIndex++] = new SoftwareStudent(studentIDVariable, FirstNameVariable, LastNameVariable, EmailAddressVariable, AgeVariable, DaysToComplete, DegreeTypeVariable);
	}
}

//Print Roster
void Roster::printAll() {
	cout << "Roster:" << '\n';
	cout << endl;
	for (int i = 0; i < 5; i++) {
		(*classRosterArray[i]).print();
	}
	cout << '\n';
}

//Print Average DaysToComplete
void Roster::printDaysInCourse(string studentIDVariable) {
	for (int i = 0; i < 5; i++) {
		if ((*classRosterArray[i]).getStudentID() == studentIDVariable) {
			int avg = 0;
			avg = ((*classRosterArray[i]).getDaysToComplete()[0] + (*classRosterArray[i]).getDaysToComplete()[1]
				+ (*classRosterArray[i]).getDaysToComplete()[2]) / 3;
			cout << "Average days for studentID: " << studentIDVariable << " to complete: " << avg << '\n';
		}
		cout << '\n';
	}

// Print by Degree Type
void Roster::printByDegreeProgram(int DegreeType) {
	Degree testDeg = Degree::SOFTWARE;
	if (degree == "SECURITY") {
		testDeg = Degree::SECURITY;
		cout << "Security Degree: " << endl;
	}
	if (degree == "NETWORKING") {
		testDeg = Degree::NETWORKING;
		cout << "Networking Degree: " << endl;
	}
	if (degree == "SOFTWARE") {
		testDeg = Degree::SOFTWARE;
		cout << "Software Degree: " << endl;
	}
	cout << endl;
	for (int i = 0; i < 5; i++) {
		if (testDeg == (*classRosterArray[i]).getDegree()) {
			(*classRosterArray[i]).print();
		}
	}
	cout << '\n';
}

// Reconcile Emails
void Roster::printInvalidEmails() {
	cout << "Incorrect email formats:" << '\n';
	cout << endl;
	for (int i = 0; i < 5; i++) {
		bool foundCharAt = false;
		bool foundCharPeriod = false;
		bool foundCharSpace = false;
		string email = "";
		email = (*classRosterArray[i]).getEmailAddress();
		for (char &c : email) {
			if (c == '@') {
				foundCharAt = true;
			}
			if (c == '.') {
				foundCharPeriod = true;
			}
			if (c == ' ') {
				foundCharSpace = true;
			}
		}
		if (foundCharAt == false || foundCharPeriod == false || foundCharSpace == true) {
			cout << (*classRosterArray[i]).getEmailAddress() << '\n';
		}
	}
	cout << '\n';
}

// Removing by studentID
void Roster::remove(string studentIDVariable) {
	bool removed = false;
	for (int i = 0; i < 5; i++) {
		if (classRosterArray[i] != NULL) {
			if (studentID == classRosterArray[i]->getStudentID()) {
				classRosterArray[i] = nullptr;
				removed = true;
			}
		}
	}
	if (!removed) {
		cout << "Student with ID Number: " << studentIDVariable << " not found." << '\n';
	}
}

// F

void main() {

	// F.1
	cout << "Scripting and Programming Applications using C++" << endl;
	cout << "Student ID = 858824 Name = Simcha Hochman" endl;

	const string studentData[] =
	{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	  "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	  "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	  "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	  "A5,Simcha,Hochman,shochm1@wgu.edu,27,40,50,21,SOFTWARE"
	};


	// iterate through student data
	std::string studentData = "";
	std::istringstream eachStudent(studentData);
	std::string token;


	// Copy studentData to New strings
	for (i = 0; i < 5; i++) {
		stringstream eachStudent(studentData[i])

			array <string > endString;

			while (eachStudent.good()) {
				string indivString;
					getline(eachStudent, endString, ",");
					result.push_back(indivString);
			}

	}

	if (endString[8] == "SECURITY") {
		myDegree = Degree::SECURITY;
	}
	if (endString[8] == "SOFTWARE") {
		myDegree = Degree::SOFTWARE;
	}
	if (endString[8] == "NETWORK") {
		myDegree = Degree::NETWORKING;
	}
	classRoster.add(endString[0], endString[1], endString[2], endString[3], stoi(endString[4]), stoi(endString[5]),
		stoi(endString[6]), stoi(endString[7]), myDegree);
}


// print everything
classRoster.printAll();

classRoster.printInvalidEmails();

classRoster.printDaysToComplete("A1");

classRoster.printByDegreeType("SOFTWARE");

classRoster.remove("A3");

classRoster.remove("A3");
}

//Deconstructor
Roster::~Roster() {}