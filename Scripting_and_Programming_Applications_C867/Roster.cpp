
// E.1

class Roster{

public:
	Student classRosterArray[5];
	
};


// F
/*

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

	const string studentData[] =
	{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	  "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	  "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	  "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	  "A5,Simcha,Hochman,shochm1@wgu.edu,27,40,50,21,SOFTWARE"
	};

	// F.1
	cout << "Scripting and Programming Applications using C++" << endl; 
	cout << "Student ID = 858824 Name = Simcha Hochman" endl;

	
	Student Student1;

	Student1.Print();

	Student1.Set("Soap", 385);
	Student1.Print();

	delete Student;

	return 0;
}


//for each string in studentData{
//	take each string and break it up into individual strings
//};
// classRoster.printAll will cout (print to console) each object, each student class (networkStudent, softwareStudent, securityStudent)