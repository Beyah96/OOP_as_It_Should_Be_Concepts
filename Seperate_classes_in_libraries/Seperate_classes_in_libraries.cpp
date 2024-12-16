#include <iostream>
#include "clsPersonInfo.h";
#include "clsEmployeeInfo.h":

using namespace std;

short clsPersonInfo::_ID = 0;

int main() {
	clsEmployeeInfo Employee("Mohamed", "Yacine", "Lamin@Lamin.com", "0352467468", "CEO", "Signusk", 7000);
	Employee.Print();

	system("pause>0");
	return 0;
}