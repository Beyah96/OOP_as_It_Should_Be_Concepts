#include <iostream>
using namespace std;

class clsEmployee {
public:
	string Id, Name;
	double Salary;

	clsEmployee(string Id, string Name, double Salary) {
		this->Id = Id;
		this->Name = Name;
		this->Salary = Salary;
	}

	static void F1( clsEmployee Employee) {
		Employee.Print();
	}
	void F2() {
		F1(*this);
	}
	void Print() {
		cout << this->Id << "  " << this->Name << "  " << this->Salary << endl;
	}
};

int main() {
	clsEmployee Employee("1", "Ali", 5000);
	Employee.Print();
	Employee.F2();
	system("pause>0");
	return 0;
}