#include "pch.h"
#include <string>
#include <iostream>
#include "Student.h"
#include "Degree.h"
#include using namespace std;

Student::Student()
{

}

Student::Student(string studID, string fiName, string laName, string emAddr, int a, int* nmDays)
{
	studentID = studID;
	firstName = fiName;
	lastName = laName;
	emailAddress = emAddr;
	age = a;
	numDays[0] = nmDays[0];
	numDays[1] = nmDays[1];
	numDays[2] = nmDays[2];
}

string Student::getFirstName()
{
	return firstName;
}

void Student::setFirstName(string fiName)
{
	firstName = fiName;
}

string Student::getLastName()
{
	return lastName;
}

void Student::setLastName(string laName)
{
	lastName = laName;
}

string Student::getEmailAddress()
{
	return emailAddress;
}
void Student::setEmailAddress(string emAddr)
{
	emailAddress = emAddr;
}

int Student::getAge()
{
	return age;
}

void Student::setAge(int a)
{
	age = a;
}

string Student::getStudentID() {
	return studentID;
}

void Student::setStudentID(string studentID) {
	Student::studentID = studentID;
}

int *Student::getNumDays() {
	return numDays;
}

void Student::setNumDays(int day0, int day1, int day2)
{
	Student::numDays[0] = day0;
	Student::numDays[1] = day1;
	Student::numDays[2] = day2;
}

void Student::setDegree(string degree)
{
	degree = degree;
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