#include <iostream>

using namespace std;

class clsPerson {
private:
	int variable1 = 50;
	int PrivateMethod(){
		return 10;
	}
protected:
	int variable3 = 40;
	int ProtectedMethod() {
		return 20;
	}
public:
	string FirstName, LastName;
	string GetFullName() {
		return FirstName + " " + LastName;
	}
	int GetPublicResult() {
		return ProtectedMethod() * variable1 + variable3;
	}
};

int main() {
	clsPerson Person;
	Person.FirstName = "Bah";
	Person.LastName = "Said";

	
	cout << Person.GetFullName() << endl;
	cout << Person.GetPublicResult();

}