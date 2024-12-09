#include <iostream>
using namespace std;

class clsPersonInfo {
private:
	short static _ID;
	string _FirstName, _LastName, _FullName, _Email, _Phone;
public:
	// ID
	short GetID() {
		return _ID;
	}

	
	// First Name
	string GetFirstName() {
		return _FirstName;
	}
	void SetFirstName(string FirstName) {
		_FirstName = FirstName;
	}

	// Last Name
	string GetLastName() {
		return _LastName;
	}
	void SetLastName(string LastName) {
		_LastName = LastName;
	}

	// Email
	string GetEmail() {
		return _Email;
	}
	void SetEmail(string Email) {
		_Email = Email;

	}

	// Phone
	string GetPhone() {
		return _Phone;
	}
	void SetPhone(string Phone) {
		_Phone = Phone;

	}
	_declspec(property(get = GetFirstName, put = SetFirstName)) string FirstName;
	_declspec(property(get = GetLastName, put = SetLastName)) string LastName;
	_declspec(property(get = GetEmail, put = SetEmail)) string Email;
	_declspec(property(get = GetPhone, put = SetPhone)) string Phone;

	clsPersonInfo(string FirstName, string LastName, string Email, string Phone){
		_ID += 1;
		SetFirstName(FirstName);
		SetLastName(LastName);
		SetEmail(Email);
		SetPhone(Phone);
		_FullName = FirstName + " " + LastName;
	}
	void Print(){
		cout << "info : " << endl;
		cout << "*****************************************";

		cout << endl << "ID         : " << GetID();
		cout << endl << "First Name : " << GetFirstName();
		cout << endl << "Last Name  : " << GetLastName();
		cout << endl << "Full Name  : " << _FullName;
		cout << endl << "Email      : " << GetEmail();
		cout << endl << "Phone      : " << GetPhone();
		cout << endl << "*****************************************" << endl<< endl;
	}

	void SendEmail(string Subject, string Body) {
		cout << "The following message sent successfully to email : " << _Email << endl;
		cout << "Subject : " << Subject << endl;
		cout << "Body : " << Body << endl << endl;
	}
	void SendSMS(string SMS) {
		cout << "The following SMS sent successfully to phone : " << _Phone << endl;
		cout << "Subject : " << SMS << endl;
	}

};

short clsPersonInfo::_ID = 0;

int main() {
	clsPersonInfo Person("Mohamed Said", "Beyah", "Said@gmail.com", "0215478936");
	Person.Print();
	Person.SendEmail("Hi", "How are you");
	Person.SendSMS("How are you");

	clsPersonInfo Person2("Did", "Beyah", "Didi@gmail.com", "0516878936");
	Person2.Print();
	Person2.SendEmail("Hi", "How are you!!");
	Person2.SendSMS("Hey, where are you?");
	system("pause>0");
	return 0;
}