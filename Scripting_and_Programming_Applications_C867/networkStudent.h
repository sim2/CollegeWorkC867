#pragma once
#include "Student.h"

class NetworkStudent : public Student {
public:
	NetworkStudent();

	NetworkStudent(string, string, string, string, int, int*, DegreeType);

	Degree getDegreeType() override;

	void print() override;


private:
	Degree DegreeType;
};
