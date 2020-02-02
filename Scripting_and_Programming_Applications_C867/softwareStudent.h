#pragma once
#include "Student.h"

class SoftwareStudent : public Student {
public:
	SoftwareStudent();

	SoftwareStudent(string, string, string, string, int, int*, Degree);

	Degree getDegreeType() override;

	void print() override;
private:
	Degree degree;
};