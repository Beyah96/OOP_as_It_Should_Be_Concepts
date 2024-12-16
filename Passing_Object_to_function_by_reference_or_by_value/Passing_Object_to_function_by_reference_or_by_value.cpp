#include <iostream>
using namespace std;

class clsA {
public:
	short x;
	void Print() {
		cout << "The value of x is : " << this->x << endl;
	}
};

void F1(clsA A) {
	A.x = 100;
}

void F2(clsA& A) {
	A.x = 200;
}

int main() {
	clsA A;
	A.x = 30;
	cout << "Before Passing the object to the functions : " << endl;
	A.Print();
	cout << "After passing the object by value to the function F1 :" << endl;
	F1(A);
	A.Print();
	cout << "After passing the object by reference to the function F2 :" << endl;
	F2(A);
	A.Print();

	system("pause>0");
	return 0;
}