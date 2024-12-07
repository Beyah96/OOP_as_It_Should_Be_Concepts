#include <iostream>
using namespace std;

class clsProduct {
public:
	short Price;
	short static Sales;
	clsProduct() {
		Sales++;
	}
	void Print() {
		cout << "Price : " << Price << endl;
		cout << "Sales : " << Sales << endl;
	}
};
short clsProduct::Sales = 0;
int main() {
	clsProduct ProductOne, ProductTwo, ProductThree;
	ProductOne.Price = 40;
	cout << "************ Product One : ************" << endl;
	ProductOne.Print();
	ProductTwo.Price = 60;
	cout << endl << "************ Product One : ************" << endl;
	ProductTwo.Print();
	ProductThree.Price = 170;
	cout << endl << "************ Product One : ************" << endl;
	ProductThree.Print();
}