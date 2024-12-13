#include <iostream>
using namespace std;

class clsA {
private: 
	short _PrivateVar;
protected:
	short ProtectedVar;
public:
	short PublicVar;
	clsA() {
		_PrivateVar = 10;
		ProtectedVar = 20;
		PublicVar = 30;
	};
	friend class clsB;
};

class clsB {
public :
	void display(clsA A) {
		cout << endl << "The value of private variable is : " << A._PrivateVar;
		cout << endl << "The value of protected variable is : " << A.ProtectedVar;
		cout << endl << "The value of public variable is : " << A.PublicVar;
	}
};

int main() {
	clsA A;
	clsB B;
	B.display(A);
	return 0;
}