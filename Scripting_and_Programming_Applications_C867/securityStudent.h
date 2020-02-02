#pragma once
#include "Student.h"

class SecurityStudent : public Student {
public:
	SecurityStudent();

	SecurityStudent(string, string, string, string, int, int*, Degree);

	Degree getDegreeType() override;

	void print() override;
private:
	Degree DegreeType;
};