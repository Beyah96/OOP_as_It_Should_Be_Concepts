#pragma warning (disable : 4996)
#include <iostream>
#include "clsDate.h";
using namespace std;

int main() {
	clsDate Date(25, 10, 2012);
	cout << Date.GetNumberOfDaysInAYear();
	system("pause>0");
	return 0;
}