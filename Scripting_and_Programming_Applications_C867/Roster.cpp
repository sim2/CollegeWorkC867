
// E.1

class RosterArray{

	const string studentData[] =
	{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	  "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	  "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	  "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	  "A5,Simcha,Hochman,shochm1@wgu.edu,27,40,50,21,SOFTWARE"
	};
};


// F
/*
1.  Print out to the screen, via your application, the course title, the programming language used, your student ID, and your name.

2.  Create an instance of the Roster class called classRoster.

3.  Add each student to classRoster.

4.  Convert the following pseudo code to complete the rest of the main() function :
	classRoster.printAll();
classRoster.printInvalidEmails();
//loop through classRosterArray and for each element:
classRoster.printAverageDaysInCourse(/*current_object's student id*/);  /*
classRoster.printByDegreeProgram(SOFTWARE);
classRoster.remove("A3");
classRoster.remove("A3");
//expected: the above line should print a message saying such a student with this ID was not found.

5.  Call the destructor to release the Roster memory.

*/

void main() {
	Student Student1;

	Student1.Print();

	Student1.Set("Soap", 385);
	Student1.Print();

	delete Student;

	return 0;
}
