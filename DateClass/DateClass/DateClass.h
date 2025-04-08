#include <iostream>
#include <assert.h>
using namespace std;

class Date {
public:
	Date(int year = 1900, int month = 1, int day = 1) {
		_year = year;
		_month = month;
		_day = day;
	}

	int GetMonthDay(int year, int month) {
		assert(month > 0 && month < 13);
		static int GetMonthDay[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
		if ((month == 2) && (year % 4 == 0 && year % 100 != 0) || (year % 400 == 100)) {
			return 29;
		}
		else {
			return GetMonthDay[month];
		}
	}
	void Print() {
		cout << _year << "-" << _month << "-" << _day << endl;
	}

	Date& operator+=(int day);
	Date operator+(int day);
	Date& operator-=(int day);
	Date operator-(int day);


	bool operator>(const Date& d);
	bool operator>=(const Date& d);
	bool operator<(const Date& d);
	bool operator<=(const Date& d);
	bool operator==(const Date& d);
	bool operator!=(const Date& d);

	// ǰ��++
	Date& operator++();
	// ����++
	Date operator++(int);
	// ǰ��--
	Date& operator--();
	// ����--
	Date operator--(int);

	Date& operator-(const Date& d);
private:
	int _year;
	int _month;
	int _day;
};