#include <iostream>

using namespace std;

class clsPerson {
private:
	string _FirstName;
	string _LastName;
public:
	void SetFirstName(string FirstName) {
		_FirstName = FirstName;
	}
	string GetFirstName() {
		return _FirstName;
	}
	__declspec(property(get = GetFirstName, put = SetFirstName)) string FirstName;
};

int main() {
	clsPerson Person;
	Person.FirstName = "Bah Beyah";
	cout << Person.FirstName;
	return 0;
}