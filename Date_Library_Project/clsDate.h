#pragma once
#include <iostream>
#include <ctime>

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
		this->_Month= Month;
		this->_Year = Year;
	}


	void Print() {
		cout << "Day   : " << _Day << endl;
		cout << "Month : " << _Month << endl;
		cout << "Year  : " << _Year << endl;
	}
};

