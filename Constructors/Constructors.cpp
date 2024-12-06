#include <iostream>

using namespace std;

class clsAddress {

private:
	string _AddressLineOne, _AddressLineTwo, _POBox, _ZipCode;

public:
	clsAddress(string AdressLineOne, string AdressLineTwo, string POBox, string ZipCode) {
		_AddressLineOne = AdressLineOne;
		_AddressLineTwo = AdressLineTwo;
		_POBox = POBox;
		_ZipCode = ZipCode;
	}

	// The code of copy constructor is implemented by default
	clsAddress(clsAddress& OldObject) {
		_AddressLineOne = OldObject.GetAddressLineOne();
		_AddressLineTwo = OldObject.GetAddressLineTwo();
		_POBox = OldObject.GetPOBox();
		_ZipCode = OldObject.GetZipCode();
	}

	void SetAddressLineOne(string AddressLineOne) {
		_AddressLineOne = AddressLineOne;
	}
	string GetAddressLineOne() {
		return _AddressLineOne;
	}


	void SetAddressLineTwo(string AddressLineTwo) {
		_AddressLineTwo = AddressLineTwo;
	}
	string GetAddressLineTwo() {
		return _AddressLineTwo;
	}


	void SetPOBox(string POBox) {
		_POBox = POBox;
	}
	string GetPOBox() {
		return _POBox;
	}


	void SetZipCode(string ZipCode) {
		_ZipCode = ZipCode;
	}
	string GetZipCode() {
		return _ZipCode;
	}

	void Print() {
		cout << endl << "Address Line One : " <<_AddressLineOne;
		cout << endl << "Address Line Two : " <<_AddressLineTwo;
		cout << endl << "POBox :  " <<_POBox;
		cout << endl << "Zip Code : " <<_ZipCode;
	}

};

int main() {
	clsAddress Address("S5, 54", "15 avenu de France", "Massy", "91300");
	Address.Print();

	//copy constructor code :
	clsAddress CopiedAddress = Address;
	Address.Print();
	system("pause>0");
	return 0;
}