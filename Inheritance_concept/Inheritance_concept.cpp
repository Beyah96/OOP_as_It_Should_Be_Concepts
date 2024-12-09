#include <iostream>
using namespace std;

class clsPersonInfo {
private:
	short static _ID;
	string _FirstName, _LastName, _FullName, _Email, _Phone;
public:
	clsPersonInfo(){

	};
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

	// FullName
	string GetFullName() {
		return FirstName + " " + LastName;
	}
	_declspec(property(get = GetFirstName, put = SetFirstName)) string FirstName;
	_declspec(property(get = GetLastName, put = SetLastName)) string LastName;
	_declspec(property(get = GetEmail, put = SetEmail)) string Email;
	_declspec(property(get = GetPhone, put = SetPhone)) string Phone;

	clsPersonInfo(string FirstName, string LastName, string Email, string Phone) {
		_ID += 1;
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

class clsEmployeeInfo : public clsPersonInfo {
private :
	string _Title, _Departement;
	int _Salary;
public:
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
};

short clsPersonInfo::_ID = 0;

int main() {
	clsEmployeeInfo Employee;
	Employee.SetFirstName("Mohamed");
	Employee.SetLastName("Yacine");
	Employee.SetPhone("254315374648");
	Employee.SetEmail("Bah@Beyah.com");
	Employee.setSalary(5000);
	Employee.Print();
	cout << "Employee salary is : " << Employee.getSalary();
	system("pause>0");
	return 0;
}