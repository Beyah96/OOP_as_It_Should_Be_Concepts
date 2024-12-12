#include <iostream>
using namespace std;

class clsPerson {
public:
	string FullName = "Mohamed Said";
};

class clsEmploye : public clsPerson {
public:
	string Title = "CEO";
};

int main() {

	clsEmploye Employe;
	cout << Employe.FullName << endl;

	// up Casting :
	clsPerson* Person = &Employe;
	cout << Person->FullName << endl;
	

	clsPerson Person2;
	cout << Person2.FullName << endl;


	//down casting : not authorized
	
	//clsEmploye* Employe = &Person2;


	return 0;
}