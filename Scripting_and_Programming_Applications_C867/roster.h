#pragma once
#include "Student.h"
#include <array>

class Roster {

	public:
		Roster();

		virtual ~Roster();

		void printAll();

		void add(string studentIDVariable, string FirstNameVariable, string LastNameVariable, string EmailAddressVariable, int AgeVariable, int DaysToComplete1Variable, int DaysToComplete2Variable, int DaysToComplete3Variable, Degree);

		void remove(string studentID);

		void printByDegree(string DegreeType);

		void printDaysToComplete(string);

		void printBadEmails();

		int addIndex = 0;

	private:

		Student *classRosterArray[5];
	};
};
