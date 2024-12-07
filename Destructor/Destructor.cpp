#include <iostream>
using namespace std;

class clsPerson {
public:
	clsPerson() {
		cout << "Hi, I'm Constructor." << endl;
	}
	string FullName;
	~clsPerson() {
		cout << "Hi, I'm Destructor." << endl;
	}
};

void FunctionOne() {
	clsPerson Person;
}


void FunctionTwo() {
	clsPerson* Person = new clsPerson;
	delete Person;
}

int main() {
	//Function One:
	FunctionOne();
	//Function Two:
	FunctionTwo();
	return 0;
}