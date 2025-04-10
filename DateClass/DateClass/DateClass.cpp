#include "DateClass.h"

bool Date::DateCheck() {
	if (_month < 0 || _month > 12 || _day < 0 || _day > GetMonthDay(_year, _month)) {
		return false;
	}
	else {
		return true;
	}
}

ostream& operator<<(ostream& out, const Date& d) {
	out << d._year << "-" << d._month << "-" << d._day;
	return out;
}
istream& operator>>(istream& in, Date& d) {
	cout << "���������������գ�<" << endl;
	in >> d._year >> d._month >> d._day;
	if (!d.DateCheck()) {
		cout << "���ڷǷ���";
	}
	return in;
}
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
Date Date::operator+(int day) const {
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
		// ����һ���µ�������������Զ<0����ѭ��
		_day += GetMonthDay(_year, _month);
	}
	return *this;
}
//
Date Date::operator-(int day) const {
	Date tmp = *this;
	tmp -= day;
	return tmp;
}
bool Date::operator>(const Date& d) const {
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
bool Date::operator>=(const Date& d) const {
	return !(*this < d);
}
bool Date::operator<(const Date& d)const {
	return !(*this > d || *this == d);
}
bool Date::operator<=(const Date& d) const {
	return !(*this > d);
}
bool Date::operator==(const Date& d) const {
	return _year == d._year
		&& _month == d._month
		&& _day == d._day;
}
bool Date::operator!=(const Date& d) const {
	return !(*this == d);
}

// ǰ��++
Date& Date::operator++(){
	*this += 1;
	return *this;
}
// ����++
Date Date::operator++(int) {
	Date tmp = *this;
	tmp += 1;
	return tmp;
}
// ǰ��--
Date& Date::operator--() {
	*this -= 1;
	return *this;
}
// ����--
Date Date::operator--(int) {
	Date tmp = *this;
	tmp -= 1;
	return tmp;
}

int Date::operator-(const Date& d) const {
	Date max = *this;
	Date min = d;
	int flag = 1;
	if (*this < d) {
		max = d;
		min = *this;
		flag = -1;
	}
	int cnt = 0;
	while (min != max) {
		++min;
		++cnt;
	}
	return cnt * flag;

}
