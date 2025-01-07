#pragma warning (disable : 4996)
#include <iostream>
#include "clsDate.h";
using namespace std;

int main() {
	clsDate Date(25, 10, 2011);
	clsDate DateTwo;
	//DateTwo.Print();
	//Date.Print();
	clsDate::GetSystemDate().Print();
	system("pause>0");
	return 0;
}