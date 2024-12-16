#include <iostream>
#include <vector>
using namespace std;

class clsA {
public:
	clsA(int x) {
		this->x = x;
	}
	int x;
	void Print() {
		cout << "The value of x is : " << this->x << endl;
	}
};
int main() {
	vector <clsA> vElments;
	for (int i = 0; i < 5; i++)
		vElments.push_back(clsA(i));
	for (int i = 0; i < 5; i++)
		vElments[i].Print();
	system("pause>0");
	return 0;
}