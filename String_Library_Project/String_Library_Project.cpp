#include <iostream>
#include "clsString.h";
using namespace std;

int main() {
	clsString String1;
	cout << endl << String1.GetValue() << endl;
	String1.Value = "Mohamed";
	cout << endl << String1.GetValue() << endl;
	cout << endl << String1.Length() << endl;
	cout << endl << String1.Length("Bah") << endl;
	system("pause>0");
	return 0;
}



//CountLetters
//CountSmallLetters
//CountSpecificLetters
//CountVowels
//CountWords
//GetValue
//InvertAllLettersCase
//InvertLetterCase
//IsVowel
//JoinString
//Length
//LowerAllString
//LowerFirstLetterOfEachWord
//RemovePunctuation
//ReplaceWord
//ReverseWordsInString
//SetValue
//SmallLetters
//Split
//Trim
//TrimLeft
//TrimRight
//UpperFirstLetterOfEachWord
//Value