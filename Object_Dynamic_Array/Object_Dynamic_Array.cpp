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
	short NumberOfObjects = 5;
	clsA * Arr = new clsA[NumberOfObjects] ;
	for (int i = 0; i < NumberOfObjects; i++)
		Arr[i] = clsA(i);
	for (int i = 0; i < NumberOfObjects; i++)
		Arr[i].Print();
	system("pause>0");
	return 0;
}