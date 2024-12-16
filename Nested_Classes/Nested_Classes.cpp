#include <iostream>
using namespace std;

class clsPersonInfo {
	string _FullName;
	class clsAddress {
	private:
		string _AddressLineOne;
		string _City;
		string _ZipCode;
		string _Country;
	public:	
		clsAddress(string AddressLineOne, string City, string ZipCode, string Country) {
			_AddressLineOne = AddressLineOne;
			_City = City;
			_ZipCode = ZipCode;
			_Country = Country;
		}
		void setAddressLineOne(string AddressLineOne) {
			_AddressLineOne = AddressLineOne;
		}
		string getAddressLineOne() {
			return _AddressLineOne;
		}

		void setCity(string City) {
			_City = City;
		}
		string getCity() {
			return _City;
		}

		void setZipCode(string ZipCode) {
			_ZipCode = ZipCode;
		}
		string getZipCode() {
			return _ZipCode;
		}

		void setCountry(string Country) {
			_Country = Country;
		}
		string getCountry() {
			return _Country;
		}

		void Print() {
			cout << endl << "Address Line One : " << _AddressLineOne;
			cout << endl << "City : " << _City;
			cout << endl << "ZipCode : " << _ZipCode;
			cout << endl << "Country : " << _Country;
		}
	};
public:
	void setFullName(string FullName) {
		_FullName = FullName;
	}
	string getFullName() {
		return _FullName;
	}

	clsAddress Address = clsAddress("", "", "", "");

	clsPersonInfo(string FullName, string AddressLineOne, string City, string ZipCode, string Country) {
		setFullName(FullName);
		Address = clsAddress(AddressLineOne, City, ZipCode, Country);
	}
	
};

int main() {
	clsPersonInfo Person("Mohamed Said", "15 Avenue de france", "Massy", "91300", "France");
	Person.Address.Print();
	system("pause>0");
	return 0;
}