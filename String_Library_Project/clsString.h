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
	/*
	short CountWordsInString(string Value) {
		short Counter = 0, Pos;
		string sWord;
		while ((Pos = sWord.find(" ")) != string::npos) {
			
		}

		return Counter;
	}

	void UpperCase(string Value) {
		string Letter;
		for (string Letter : Value) {
			if 
		}
	}*/
//count words in string
//upercase
//lowercase
//split function
//capitalLettes
//countcapitalletters

};

