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

	void Print() {
		cout << "Day   : " << _Day << endl;
		cout << "Month : " << _Month << endl;
		cout << "Year  : " << _Year << endl;
	}
	
	clsDate GetDateFromDayOrderInYear(short DayOrderInYear, short Year) {
		clsDate Date;

		return Date;
	}
	
};

