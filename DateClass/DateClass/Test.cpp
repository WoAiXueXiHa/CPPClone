#include "DateClass.h"
void TestDate1() {
	Date d1(2025, 4, 8);
	Date d2 = d1 - 5000;
	Date d3 = d1 + 5000;
	d1.Print();
	d2.Print();
	d3.Print();
}
void TestDate2() {
	Date d1(2024, 4, 8);
	Date d2(2024, 4, 7);

	bool ret1 = d1 > d2;
	bool ret2 = d1 < d2;
	bool ret3 = d1 == d2;
	bool ret4 = d1 >= d2;
	bool ret5 = d1 <= d2;
	bool ret6 = d1 != d2;
	cout << ret1 << endl;
	cout << ret2 << endl;
	cout << ret3 << endl;
	cout << ret4 << endl;
	cout << ret5 << endl;
	cout << ret6 << endl;
}

void TestDate3() {
	Date d1(2024, 4, 8);
	d1++;
	++d1;
}

int main() {
	TestDate3();
	return 0;
}