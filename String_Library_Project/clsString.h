#pragma once
#include <iostream>
using namespace std;

class clsString
{
private:
	string _Value;

public:
	
	clsString() {
		this->_Value = "";
	}

	clsString(string Value) {
		this->_Value = Value;
	}
	
	void SetValue(string Value) {
		this->_Value = Value;
	}

	string GetValue() {
		return this->_Value;
	}
	
	_declspec(property(get = GetValue, put = SetValue)) string Value;
	
	static short Length(string Value) {
		short Counter = 0;
		for (char c : Value)
			Counter++;
		return Counter;
	}

	short Length() {
		return Length(this->_Value);
	}
	
	static short CountWords(string Value) {
		short Counter = 0, Pos;
		string sWord, Delim = " ";
		while ((Pos = sWord.find(Delim)) != string::npos) {
			sWord = Value.substr(0, Pos);
			if (sWord != " ")
				Counter++;
			sWord.erase(0, Pos + Delim.length());
		}
		if (Value != "")
			Counter++;
		return Counter;
	}

	short CountWords() {
		return CountWords(this->_Value);
	}

	static string UpperCaseFirstLetterOfEachWord(string Value) {
		bool isFirstLetter = true;
		for (int i = 0; i < Value.length(); i++) {
			if (Value[i] != ' ' && isFirstLetter)
				Value[i] = toupper(Value[i]);
			isFirstLetter = (Value[i] == ' ') ? true : false;
		}
		return Value;
	}

	string UpperCaseFirstLetterOfEachWord() {
		return UpperCaseFirstLetterOfEachWord(this->_Value);
	}

	static string LowerCaseFirstLetterOfEachWord(string Value) {
		bool isFirstLetter = true;
		for (int i = 0; i < Value.length(); i++) {
			if (Value[i] != ' ' && isFirstLetter)
				Value[i] = tolower(Value[i]);
			isFirstLetter = (Value[i] = ' ') ? true : false;
		}
		return Value;
	}

	string LowerCaseFirstLetterOfEachWord() {
		return LowerCaseFirstLetterOfEachWord(this->_Value);
	}

	static string UpperAllString(string Value) {
		for (int i = 0; i < Value.length(); i++)
			Value[i] = toupper(Value[i]);
		return Value;
	}

	string UpperAllString() {
		return UpperAllString(this->_Value);
	}

	static string LowerAllString(string Value) {
		string TempValue;
		for (char c : Value)
			TempValue += tolower(c);
		return TempValue;
	}

	string LowerAllString() {
		return LowerAllString(this->_Value);
	}

	static char InvertLetterCase(char Letter) {
		return (isupper(Letter) ? tolower(Letter) : toupper(Letter));
	}

	static string InvertAllLettersCase(string Value) {
		string TempValue;
		for (char Letter : Value)
			TempValue += InvertLetterCase(Letter);
		return TempValue;
	}

	string InvertAllLettersCase() {
		return InvertAllLettersCase(this->_Value);
	}
	
	enum enWhatToCount{ Capital , Small, All};

	static short CountLetters(string Value, enWhatToCount WhatToCount = enWhatToCount::All) {
		short Counter = 0;
		for (char Letter : Value)
			if (Letter != ' ')
				Counter++;
		return Counter;
	}
	
	short CountLetters() {
		return CountLetters(this->_Value);
	}

	static short CountCapitalLetters(string Value, enWhatToCount WhatToCount = enWhatToCount::Capital) {
		short Counter = 0;
		for (char Letter : Value)
			if (Letter != ' ' && isupper(Letter))
				Counter++;
		return Counter;
	}

	short CountCapitalLetters() {
		return CountCapitalLetters(this->_Value);
	}

	static short CountSmallLetters(string Value, enWhatToCount WhatToCount = enWhatToCount::Small) {
		short Counter = 0;
		for (char Letter : Value)
			if (Letter != ' ' && islower(Letter))
				Counter++;
		return Counter;
	}

	short CountSmallLetters() {
		return CountSmallLetters(this->_Value);
	}

	static short CountSpecificLetter(string Value, char SearchedLetter, bool MatchCase = true) {
		short Counter = 0;
		if (MatchCase = true){
			for (char Letter : Value)
				if (Letter == SearchedLetter)
					Counter++;
		}
		else {
			Value = LowerAllString(Value);
			char LowerSearchedLetter = tolower(SearchedLetter);
			for (char Letter : Value)
				if (Letter = LowerSearchedLetter)
					Counter++;
		}
		return Counter;
	}

	short CountSpecificLetter(char SerachedLetter, bool MatchCase) {
		return CountSpecificLetter(this->_Value, SerachedLetter, MatchCase);
	}

	static bool isVowel(char Letter) {
		Letter = tolower(Letter);
		return (Letter == 'a' || Letter == 'e' || Letter == 'i' || Letter == 'u' || Letter == 'o');
	}

	static short CountVowels(string Value) {
		short Counter = 0;
		for (char Letter : Value)
			if (isVowel(Letter))
				Counter++;
		return Counter;
	}

//upercase
//lowercase
//split function
//capitalLettes
//countcapitalletters

};

