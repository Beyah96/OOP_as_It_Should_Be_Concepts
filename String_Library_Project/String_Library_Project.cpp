#include <iostream>
#include "clsString.h";
#include <vector>
using namespace std;

int main() {
	clsString String1;
	vector <string> vString;
	cout << "Start : " << endl;
	vString = clsString::Split("Mohamed Said Beyah", " ");
	for (string sWord : vString) cout << sWord << endl;
	cout << "End !!";
	system("pause>0");
	return 0;
}


//CountVowels
//IsVowel
//JoinString
//RemovePunctuation
//ReplaceWord
//ReverseWordsInString
//Split
//Trim
//TrimLeft
//TrimRight
