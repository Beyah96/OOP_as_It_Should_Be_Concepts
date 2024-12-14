#include <iostream>
using namespace std;

class clsPersonInfo {
private:
	struct stAddress {
		string AddressLineOne;
		string City;
		string ZipCode;
		string Country;
	};
public:
	string FullName;
	stAddress Address;
	clsPersonInfo() {
		FullName = "Mohamed Said BEYAH";
		Address.AddressLineOne = "15 Avenue de France";
		Address.City = "Massy";
		Address.ZipCode = "91300";
		Address.Country = "France";
	}
	void PrintAddress() {
		cout << endl << "Full Name : " << FullName;
		cout << endl << "Address Line One : " << Address.AddressLineOne;
		cout << endl << "City : " << Address.City;
		cout << endl << "ZipCode : " << Address.ZipCode;
		cout << endl << "Country : " << Address.Country;
	}
};

int main() {
	clsPersonInfo Person;
	Person.Address.City = "Nice";
	Person.PrintAddress();
	system("pause>0");
	return 0;
}