#include <iostream>
#include "clsString.h";
#include <vector>
using namespace std;

int main() {
	clsString String1;
	String1.Value = "Mohame?d Said!; Beya,h";
	cout << String1.RemovePunctuation();
	system("pause>0");
	return 0;
}