#include <iostream>
using namespace std;

#include <iostream>

using namespace std;

class clsA {
public:
	clsA() {

	};
	clsA(int x) {
		this->x = x;
	}
	int x;
	void Print() {
		cout << "The value of x is : " << this->x << endl;
	}
};

int main() {
	clsA Objects[] = { clsA(10), clsA(30), clsA(50) };
	for (int i = 0; i < 3; i++) {
		Objects[i].Print();
	}

	system("pause>0");
	return 0;
}