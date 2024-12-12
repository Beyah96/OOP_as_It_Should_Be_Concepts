#include <iostream>

using namespace std;

class clsA {
private:
	short var1;
	void Function1() {
		cout << "Private : Fuction 1 From class A" << endl;
	}
protected:
	short var2;
	void Function2() {
		cout << "Protected : Fuction 2 From class A" << endl;
	}
public:
	short var3;
	void Function3() {
		cout << "Public : Fuction 3 From class A" << endl;

	}
};

class clsB : protected clsA {
public:
	int varB;
	void FunctionB() {
		clsA::Function2();
		clsA::Function3();
		cout << clsA::var2 + var3 + varB;
	}
};

class clsC : public clsB {
public:
	int varC;
	void FunctionC() {
		clsB::Function3();
	}
};
int main() {

	clsA B;
	B.Function3();

	system("pause>0");
	return 0;
}

