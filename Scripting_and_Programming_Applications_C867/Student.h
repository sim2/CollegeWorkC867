#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <array>
#include "Degree.h"
using namespace std;

class Student
{

public:
	
	Student();

	Student(string, string, string, string, int, int*);

	//getters
	string getStudentID();
	string getFirstName();
	string getLastName();
	string getEmailAddress();
	int getAge();
	int *getDaysToComplete();
	  //Note: Degree type should be populated in subclasses only.
	
	//setters
	void setFirstName(string FirstName);
	void setLastName(string LastName);
	void setEmailAddress(string EmailAddress);
	void setAge(int Age);
	void setStudentID(string studentID);
	void setDaysToComplete(int DaysToComplete1, int DaysToComplete2, int DaysToComplete3);
	void setDegreeType(string DegreeType);

	virtual void print();
	virtual Degree getDegreeType();

	~Student();

private:

	string studentID;
	string FirstName;
	string LastName;
	string EmailAddress;
	int Age;
	int DaysToComplete[3];
};