#include <iostream>

using namespace std;

class clsPerson {
public:
	string FirstName, LastName;
	string GetFullName() {
		return FirstName + " " + LastName;
	}
};

int main() {
	clsPerson Person;
	Person.FirstName = "Mohamed Said";
	Person.LastName = "Beyah";
	cout << Person.GetFullName();
}