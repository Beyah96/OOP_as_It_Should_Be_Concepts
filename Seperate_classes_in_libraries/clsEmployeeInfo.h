#pragma once
#include <iostream>
#include "clsPersonInfo.h";

using namespace std;


class clsEmployeeInfo : public clsPersonInfo {
private:
	string _Title, _Departement;
	int _Salary;
public:
	clsEmployeeInfo(string FirstName, string LastName, string Email, string Phone, string Title, string Departement, int Salary)
		: clsPersonInfo(FirstName, LastName, Email, Phone) {
		_Title = Title;
		_Departement = Departement;
		_Salary = Salary;
	}
	void setTitle(string Title) {
		_Title = Title;
	}
	string getTitle() {
		return _Title;
	}

	void setDepartement(string Departement) {
		_Departement = Departement;
	}
	string getDepartement() {
		return _Departement;
	}

	void setSalary(int Salary) {
		_Salary = Salary;
	}
	int getSalary() {
		return _Salary;
	}
	
	void Print() {
		cout << "info : " << endl;
		cout << "*****************************************";

		cout << endl << "ID          : " << GetID();
		cout << endl << "First Name  : " << GetFirstName();
		cout << endl << "Last Name   : " << GetLastName();
		cout << endl << "Full Name   : " << GetFullName();
		cout << endl << "Email       : " << GetEmail();
		cout << endl << "Phone       : " << GetPhone();
		cout << endl << "Departement : " << getDepartement();
		cout << endl << "Title       : " << getTitle();
		cout << endl << "salary      : " << getSalary();
		cout << endl << "*****************************************" << endl << endl;
	}
};


