
class Student {	                   //redundant class from Student.h
public:
	string StudentID;
	string FirstName;
	string LastName;
	string EmailAddress;
	int Age;
	int DaysToComplete<>;
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
	int  GetAge() const;
	array  GetDaysToComplete() const;
	string  GetDegreeType() const;

	return;
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
};

	//2.d

cout << studentData << endl;


	//2.f what do i do? -  virtual getDegreeProgram()
Student.GetDegreeProgram(); 



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