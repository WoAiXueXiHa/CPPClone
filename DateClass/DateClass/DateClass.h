#include <iostream>
#include <assert.h>
using namespace std;

class Date {
public:
	friend ostream& operator<<(ostream& out,const Date& d);
	friend istream& operator>>(istream& in, Date& d);
	Date(int year = 1900, int month = 1, int day = 1) {
		_year = year;
		_month = month;
		_day = day;
	}

	int GetMonthDay(int year, int month) {
		assert(month > 0 && month < 13);
		static int GetMonthDay[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
		if ((month == 2) && ( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ) ) {
			return 29;
		}
		else {
			return GetMonthDay[month];
		}
	}
	bool DateCheck();

	void Print() {
		cout << _year << "-" << _month << "-" << _day << endl;
	}

	Date& operator+=(int day);
	Date operator+(int day) const;
	Date& operator-=(int day);
	Date operator-(int day) const;


	bool operator>(const Date& d) const;
	bool operator>=(const Date& d) const;
	bool operator<(const Date& d) const;
	bool operator<=(const Date& d) const;
	bool operator==(const Date& d) const;
	bool operator!=(const Date& d) const;

	// 前置++
	Date& operator++();
	// 后置++
	Date operator++(int);
	// 前置--
	Date& operator--();
	// 后置--
	Date operator--(int);

	// d1 - d2
	int operator-(const Date& d) const;
private:
	int _year;
	int _month;
	int _day;
};