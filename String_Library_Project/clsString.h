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
	

//upercase
//lowercase
//split function
//capitalLettes
//countcapitalletters

};

