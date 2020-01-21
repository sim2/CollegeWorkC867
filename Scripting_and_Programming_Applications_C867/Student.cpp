
class Student {	                   //redundant class from Student.h
public:
	void StudentID
	void FirstName;
	void LastName;
	void EmailAddress;
	void Age;
	void DaysToComplete;
	void DegreeType;

};

//2.a & b

class Student {
public:
	void SetStudentID(int StudentID);    // Mutator
	void SetFirstName(string FirstName); 
	void SetLastName(string LastName);
	void SetEmailAddress(string EmailAddress);
	void SetAge(int Age);
	void SetDaysToComplete(int DaysToComplete);
	void SetDegreeType(string DegreeType);


	int  GetFirstName() const;          // Accessor
	int  GetLastName() const;
	int  GetEmailAddress() const;
	int  GetAge() const;
	int  GetDaysToComplete() const;
	int  GetDegreeType() const;

};

// 2.c

Student::Student() {
	FN = FirstName;
	LN = LastName;
	EA = EmailAddress;
	Age = Age;
	DaysToComplete = DaysToComplete;
	GetDegreeType = GetDegreeType;

};
	//2.d

cout << Student << endl;

	// 2.e

class MyClass {
public:
	MyClass();
	~MyClass();
private:
	int* subObj;
};

MyClass::MyClass() {
	cout << "Constructor called." << endl;
	subObj = new int; // Allocate mem for data
	*subObj = 0;
	return;
}

MyClass::~MyClass() {
	cout << "Destructor called." << endl;
	delete subObj;
	return;
}

int main() {
	MyClass* tempClassObj;      // Create object of type MyClass

	tempClassObj = new MyClass; // Allocate mem for object
	delete tempClassObj;        // No more memory leak
								// Freed obj's mem, including subObj
	// Rest of program ...
	return 0;
}

	//2.f what do i do? -  virtual getDegreeProgram()
Student.GetDegreeProgram(); 



/*

-Student Data-

const string studentData[] =
	"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	"A5,Simcha,Hochman,shochm1@wgu.edu,27,40,50,21,SOFTWARE"

*/