#include <iostream>
using namespace std;

class clsA {
private:
	short _privateVar;
protected:
	short protectedVar;
public:
	short publicVar;
	clsA() {
		_privateVar = 10;
		protectedVar = 10;
		publicVar = 10;
	}
	friend int MySum(clsA A);
};

int MySum(clsA A) {
	return A.publicVar + A.protectedVar + A._privateVar;
}

int main() {
	clsA A;
	MySum(A);
	system("pause>0");
	return 0;
}