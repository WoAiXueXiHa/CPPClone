#include "DateClass.h"

Date& Date::operator+=(int day) {
	if (day < 0) {
		return *this -= -day;
	}
	_day += day;
	while (_day > GetMonthDay(_year, _month)) {
		_day -= GetMonthDay(_year, _month);
		++_month;
		if (_month == 13) {
			++_year;
			_month = 1;
		}
	}
	return *this;
}
Date Date::operator+(int day) {
	Date tmp = *this;
	tmp += day;
	return tmp;
}
Date& Date::operator-=(int day) {
	_day -= day;
	while (_day <= 0) {
		_day + GetMonthDay(_year, _month);
		--_month;
		if (_month == 0) {
			_month = 12;
			--_year;
		}
		// 借上一个月的天数，不借永远<0，死循环
		_day += GetMonthDay(_year, _month);
	}
	return *this;
}
//
Date Date::operator-(int day) {
	Date tmp = *this;
	tmp -= day;
	return tmp;
}
bool Date::operator>(const Date& d) {
	if (_year > d._year) {
		return true;
	}
	else if (_month > d._month) {
		return true;
	}
	else if (_day > d._day) {
		return true;
	}
	else {
		return false;
	}
}
bool Date::operator>=(const Date& d) {
	return !(*this < d);
}
bool Date::operator<(const Date& d){
	return !(*this > d || *this == d);
}
bool Date::operator<=(const Date& d) {
	return !(*this > d);
}
bool Date::operator==(const Date& d) {
	return _year == d._year
		&& _month == d._month
		&& _day == d._day;
}
bool Date::operator!=(const Date& d) {
	return !(*this == d);
}

// 前置++
Date& Date::operator++(){
	*this += 1;
	return *this;
}
// 后置++
Date Date::operator++(int) {
	Date tmp = *this;
	tmp += 1;
	return tmp;
}
// 前置--
Date& Date::operator--() {
	*this -= 1;
	return *this;
}
// 后置--
Date Date::operator--(int) {
	Date tmp = *this;
	tmp -= 1;
	return tmp;
}

Date& operator-(const Date& d) {

}
