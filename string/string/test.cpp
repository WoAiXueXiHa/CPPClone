#include <iostream>
#include <string>
using namespace std;

//// C++11 auto���
//
//int func1() {
//	return 24;
//}
//
//// 1.���������� 
////void func2(auto a){}
//
//// 2.����������ֵ������ʹ�ã�����Ч��
//auto func3(){}
//
//int main() {
//	int a = 10;
//	auto b = a;
//	auto c = 'a';
//	auto d = func1();
//	//// ���뱨��C3531 ���Ͱ�����auto���ķ��ű�����г�ʼֵ�趨��
//	//auto e;
//
//	// typeid���ڴ�ӡ������
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;
//	cout << typeid(d).name() << endl;
//
//	int x = 20;
//	// 3.����ָ����� auto*��autoû������
//	auto* px1 = &x;
//	auto px2 = &x;
//
//	// 4.�������ñ��� �����&
//	auto& m = x;
//
//	cout << typeid(px1).name() << endl;
//	cout << typeid(px2).name() << endl;
//	cout << typeid(m).name() << endl;
//
//	auto aa = 0, bb = 1;
//	// 5. �������� �б������Ҫһ��
//	// ���뱨��C3538 ���������б��У�auto����ʼ���Ƶ�Ϊͬһ����
//	// auto cc = 2, dd = 3.0;
//
//	// 6.auto������������
//	// ���뱨��C3318 ���鲻�ܾ������а���auto��Ԫ������
//	// auto arr[10] = { 0 };
//	return 0;
//}

// ��Χfor 
int main() {
	int arr[5] = { 0,1,2,3,4 };
	// C++ 98
	for (size_t i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		cout << arr[i] << " " ;
	}
	cout << endl;
	// �޸�����
	for (size_t i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		cout << arr[i] * 2 << " ";
	}

	// C++ 11
	cout << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	cout << endl;
	for (auto& e : arr) cout << e << " ";
	for (auto& e : arr) e *= 2;
	cout << endl;
	for (auto& e : arr) cout << e << " ";

	cout << endl;

	string str("hello, world!");
	for (auto str : str) cout << str;

	return 0;

}