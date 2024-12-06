#include <iostream>

using namespace std;

class clsPerson {
private:
	string _FirstName;
	string _LastName;
public:
	//Property Set
	void SetFirstName(string FirstName) {
		_FirstName = FirstName;
	}
	//Property Get
	string GetFirstName() {
		return _FirstName;
	}
	//Property Set
	void SetLastName(string LastName) {
		_LastName = LastName;
	}
	//Property Get
	string GetLastName() {
		return _LastName;
	}
	string GetFullName() {
		return _FirstName + " " + _LastName;
	}
};

int main() {

	clsPerson Person;
	
	Person.SetFirstName("Mohamed Said");
	Person.SetLastName("Beyah");

	cout << endl << "First Name : " << Person.GetFirstName();
	cout << endl << "Last Name : " << Person.GetLastName();
	
	cout << endl << "Full Name : " << Person.GetFullName();
	return 0;
}