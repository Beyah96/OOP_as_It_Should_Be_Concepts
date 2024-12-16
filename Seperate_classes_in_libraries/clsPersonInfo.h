#pragma once
#include <iostream>
using namespace std;

class clsPersonInfo {
private:
	short static _ID;
	string _FirstName, _LastName, _FullName, _Email, _Phone;
public:
	// ID
	short GetID() {
		return _ID++;
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

	// FullName
	string GetFullName() {
		return _FirstName + " " + _LastName;
	}

	clsPersonInfo(string FirstName, string LastName, string Email, string Phone) {
		SetFirstName(FirstName);
		SetLastName(LastName);
		SetEmail(Email);
		SetPhone(Phone);

	}
	void Print() {
		cout << "info : " << endl;
		cout << "*****************************************";

		cout << endl << "ID         : " << GetID();
		cout << endl << "First Name : " << GetFirstName();
		cout << endl << "Last Name  : " << GetLastName();
		cout << endl << "Full Name  : " << GetFullName();
		cout << endl << "Email      : " << GetEmail();
		cout << endl << "Phone      : " << GetPhone();
		cout << endl << "*****************************************" << endl << endl;
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
