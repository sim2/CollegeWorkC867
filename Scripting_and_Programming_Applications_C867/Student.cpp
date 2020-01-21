
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

// do I instantiate one at a time? or do I create a generic "form" and call each of them through that.
Student::Student(int StudentID, string FirstName, string LastName, string EmailAddress, int Age, int DaysToComplete, string DegreeType) {
	StudentID 
	FirstName  
	LastName 
	EmailAddress 
};
	
/*                      "call to action" - calls constructor
int main() {
	Student Student1;  

	Student1.Print();

	Student1.SetNameAndPrice("Soap", 385);
	Student1.Print();

	return 0;
}

*/