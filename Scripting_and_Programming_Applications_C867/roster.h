#pragma once

class Roster {

	public:
		Roster();

		virtual ~Roster();

		void printAll();

		void add(string studentID, string FirstName, string LastName, string EmailAddress, int Age, int DaysToComplete1, int DaysToComplete2, int DaysToComplete3, DegreeType);

		void remove(string studentID);

		void printByDegree(string DegreeType);

		void printDaysToComplete(string);

		void printBadEmails();

		int addIndex = 0;

	private:

		Student *classRosterArray[5];
	};
};
