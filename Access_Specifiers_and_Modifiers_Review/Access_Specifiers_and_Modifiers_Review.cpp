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

class clsB : public clsA{
public:
	int varB;
	void FunctionB() {
		clsA::Function2();
		clsA::Function3();
		cout << clsA::var2 + var3 + varB;
	}
};
int main() {
	
	clsA B;
	B.Function3();

	system("pause>0");
	return 0;
}

// cet exemple montre que dans le main, la classe B, elle peut acceder aux membres publiques de la classe (méthodes et variables);
// cet exemple montre aussi qu'on peut acceder aux membres protegés de la classe A dans la classe B, vu que B hérite la classe A;
