#pragma once
#include <iostream>
#include <ctime>
#include "clsString.h"
#include <string>

using namespace std;
class clsDate
{
private:
	short _Day;
	short _Month;
	short _Year;
public:
	clsDate() {
		time_t t = time(NULL);
		tm* now = localtime(&t);
		this->_Day = now->tm_mday;
		this->_Month = now->tm_mon;
		this->_Year = now->tm_year + 1900;
	}


	clsDate(short Day, short Month, short Year) {
		this->_Day = Day;
		this->_Month = Month;
		this->_Year = Year;
	}

	clsDate(string Date) {
		vector <string> vString = clsString::Split(Date, "/");
		this->_Day = stoi(vString[0]);
		this->_Month = stoi(vString[1]);
		this->_Year = stoi(vString[2]);
	}

	clsDate(short DayOrderInYear, short Year) {
		clsDate Date = GetDateFromDayOrderInYear(DayOrderInYear, Year);
		this->_Day = Date._Day;
		this->_Month = Date._Month;
		this->_Year = Date._Year;
	}



	clsDate GetDateFromDayOrderInYear(short DayOrderInYear, short Year) {
		clsDate Date;

		return Date;
	}

	void setDay(short Day) {
		_Day = Day;
	}

	short getDay() {
		return _Day;
	}

	__declspec(property(get = getDay, put = setDay)) short Day;

	void setMonth(short Month) {
		_Month = Month;
	}

	short getMonth() {
		return _Month;
	}

	__declspec(property(get = getMonth, put = setMonth)) short Month;

	void setYear(short Year) {
		_Year = Year;
	}

	short getYear() {
		return _Year;
	}

	__declspec(property(get = getYear, put = setYear)) short Year;

	void Print() {
		cout << DateToString() << endl;
	}

	string DateToString() {
		return DateToString(*this);
	}

	static string DateToString(clsDate Date) {
		return to_string(Date._Day) + "/" + to_string(Date._Month) + "/" + to_string(Date._Year);
	}

	static clsDate GetSystemDate() {
		time_t t = time(0);
		tm* Now = localtime(&t);

		short Day, Month, Year;
		Day = Now->tm_mday;
		Month = Now->tm_mon + 1;
		Year = Now->tm_year + 1900;

		return clsDate(Day, Month, Year);
	}


	static bool isLeapYear(clsDate Date) {
		return (Date.Year % 4 == 0 && Date.Year % 100 != 0 || Date.Year % 400 == 0) ? true : false;
	}

	bool isLeapYear() {
		return isLeapYear(*this);
	}
	static bool isValidDate(clsDate Date) {
		if ((Date.Year < 0) || (Date.Month > 12 || Date.Month < 1) || (Date.Day < 1 || Date.Day > 31))
			return false;
		if (Date.Month == 2)
			return (isLeapYear(Date) && Date.Day != 29) ? false : (!isLeapYear(Date) && Date.Day != 28) ? false : true;
	}

	bool isValidDate() {
		return isValidDate(*this);
	}


};
