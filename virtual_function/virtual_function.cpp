#include <iostream>
using namespace std;

class clsPerson {
public:
	virtual void Print() {
		cout << "Hi, I'm a Person." << endl;
	}
};

class clsEmployee : public clsPerson{
public:
	void Print() {
		cout << "Hi, I'm a clsEmployee." << endl;
	}
};

class clsStudent : public clsPerson {
public:
	void Print() {
		cout << "Hi, I'm a clsStudent." << endl;
	}
};

int main() {

	// Person :
	clsPerson Person;
	Person.Print();

	// Employee :
	clsEmployee Employee;
	Employee.Print();

	// Student :
	clsStudent Student;
	Student.Print();

	// Up Casting:
	clsPerson* Person1 = & Employee;
	clsPerson* Person2 = & Student;
	
	//Testing prints:
	Person1->Print();
	Person2->Print();

	return 0;
}