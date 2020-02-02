#include "pch.h"
#include <string>
#include <iostream>
#include "Student.h"
#include "Degree.h"

using namespace std;

Student::Student()
{

}

Student::Student(string studentIDVariable, string FirstNameVariable, string LastNameVariable, string EmailAddressVariable, int AgeVariable, int* DaysToCompleteVariable)
{
	studentID = studentIDVariable;
	FirstName = FirstNameVariable;
	LastName = LastNameVariable;
	EmailAddress = EmailAddressVariable;
	Age = AgeVariable;
	DaysToComplete[0] = DaysToCompleteVariable[0];
	DaysToComplete[1] = DaysToCompleteVariable[1];
	DaysToComplete[2] = DaysToCompleteVariable[2];
}

string Student::getFirstName()
{
	return FirstName;
}

void Student::setFirstName(string FirstNameVariable)
{
	FirstName = FirstNameVariable;
}

string Student::getLastName()
{
	return LastName;
}

void Student::setLastName(string LastNameVariable)
{
	LastName = LastNameVariable;
}

string Student::getEmailAddress()
{
	return EmailAddress;
}
void Student::setEmailAddress(string EmailAddressVariable)
{
	EmailAddress = EmailAddressVariable;
}

int Student::getAge()
{
	return Age;
}

void Student::setAge(int AgeVariable)
{
	Age = AgeVariable;
}

string Student::getStudentID() {
	return studentID;
}

void Student::setStudentID(string studentIDVariable) {
	Student::studentID = studentIDVariable;
}

int *Student::getDaysToComplete() {
	return DaysToComplete;
}

void Student::setDaysToComplete(int DaysToComplete1, int DaysToComplete2, int DaysToComplete3)
{
	Student::DaysToComplete[0] = DaysToComplete1;
	Student::DaysToComplete[1] = DaysToComplete2;
	Student::DaysToComplete[2] = DaysToComplete3;
}

void Student::setDegreeType(string DegreeVariable)
{
	DegreeType = DegreeVariable;
}

//Student::Student() {}

Degree Student::getDegree() {
	return Degree::SOFTWARE;
}



void Student::print() {}

// default deconstructor definition
Student::~Student()
{

}

/*


class Student {	                   //redundant class from Student.h
public:
	string StudentID;
	string FirstName;
	string LastName;
	string EmailAddress;
	int Age;
	int DaysToComplete[];
	string DegreeType;

//2.a & b

	void SetStudentID(string StudentID);    // Mutator
	void SetFirstName(string FirstName); 
	void SetLastName(string LastName);
	void SetEmailAddress(string EmailAddress);
	void SetAge(int Age);
	void SetDaysToComplete(array DaysToComplete);
	void SetDegreeType(string DegreeType);


	string  GetStudentID() const;             // Accessor
	string  GetFirstName() const;          
	string  GetLastName() const;
	string  GetEmailAddress() const;
	int		GetAge() const;
	array   GetDaysToComplete() const;
	string  GetDegreeType() const;

};

	// 2.c

Student::Student() {
	
	StudentID = "";
	FirstName = "";
	LastName = "";
	EmailAddress = "";
	Age = "-1";
	DaysToComplete = {};
	DegreeType = "";

	return;
};

	// 2.e

Student::~Student() {

	delete StudentID;
	delete FirstName;
	delete LastName;
	delete EmailAddress;
	delete Age;
	delete DaysToComplete;
	delete DegreeType;

	return;
};

	//2.d
cout << studentData << endl;


	//2.f virtual getDegreeProgram()
string GetDegreeProgram() {};


/*

-Student Data-

const string studentData[] =
	{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	  "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	  "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	  "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	  "A5,Simcha,Hochman,shochm1@wgu.edu,27,40,50,21,SOFTWARE"
	};
*/