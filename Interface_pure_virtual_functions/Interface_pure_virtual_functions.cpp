#include <iostream>
using namespace std;

class clsMobil {
	virtual void Dial(string PhoneNumber) = 0;
	virtual void SendSMS(string PhoneNumber, string Text) = 0;
	virtual void TakePicture() = 0;
};

class clsIPhone : public clsMobil {
public:
	void Dial(string PhoneNumber) {
		cout << "Phone Number : " << PhoneNumber << endl;
	}
	void SendSMS(string PhoneNumber, string Text) {

	}
	void TakePicture() {

	}
};

class clsSamsung : public clsMobil {
	void Dial() {

	}

	void SendSMS(string PhoneNumber, string Text) {

	}

	void TakePicture() {

	}
};
int main() {
	clsIPhone IPhone;
	IPhone.Dial("0625496854");
	//clsSamsung Samsung; il peut pas fonctionner vu que la méthode Dial n'a pas été overrider, elle a été overloadé.
	return 0;
}