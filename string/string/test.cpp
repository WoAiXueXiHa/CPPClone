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

//// ��Χfor 
//int main() {
//	int arr[5] = { 0,1,2,3,4 };
//	// C++ 98
//	for (size_t i = 0; i < sizeof(arr) / sizeof(int); i++)
//	{
//		cout << arr[i] << " " ;
//	}
//	cout << endl;
//	// �޸�����
//	for (size_t i = 0; i < sizeof(arr) / sizeof(int); i++)
//	{
//		cout << arr[i] * 2 << " ";
//	}
//
//	// C++ 11
//	cout << endl;
//	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
//	cout << endl;
//	for (auto& e : arr) cout << e << " ";
//	for (auto& e : arr) e *= 2;
//	cout << endl;
//	for (auto& e : arr) cout << e << " ";
//
//	cout << endl;
//
//	string str("hello, world!");
//	for (auto str : str) cout << str;
//
//	return 0;
//
//}

// string��ĳ��ýӿ�

// //1. ��������֮��
//void TestS1() {
//     ��ʼ���ַ������� s0
//    string s0("Initing string.");
//
//     ����һ�����ַ������� s1
//    string s1;
//
//     ����һ��string�Ŀ��� s11
//    string s11();
//
//     ʹ�� s0 �������죬s2 ���ݺ� s0 ��ȫһ��
//    string s2(s0);
//
//     �� s0 ��λ�� 5 ��ʼ������һ���µ��ַ��� s3�������� s0 ������ 5 ��ʼ��ĩβ���ַ���
//    string s3(s0, 5);
//
//    cout << s0 << endl;
//    cout << s1 << endl;
//     ��һ���� cout<<s11�ᱨ��
//    cout << s11 << endl;
//    cout << s2 << endl;
//    cout << s3 << endl;
//}

//// ��������
//void TestS2() {
//    string s("hello world");
//    // 1. �±�+[]
//    cout << "operator[]:";
//    for (size_t i = 0; i < s.size(); i++)
//    {
//        cout << s[i];
//    }
//    cout << endl;
//
//    // 2.������begin+end
//    // iterator begin();const_iterator begin() const; ���ص�����ָ����ַ����ַ��ĵ�һ��λ��
//    // iterator end();const_iterator end() const;     ���ص�����ָ����ַ����ַ����λ�õ���һ��λ��
//    // ��������Χ[begin,end+1)
//    cout << "������begin+end :";
//
//    string::iterator it = s.begin(); // ���Խ�it����ָ�룬��������ָ��
//    while (it != s.end()) {
//        cout << *it;
//        ++it;
//    }
//    cout << endl;
//
//    // 3. ���������rbegin+rend
//    // string::reverse_iterator rit = s.rbegin();
//    // C++11������auto�Զ�ʶ������
//    cout << "���������rbegin+rend :";
//    auto rit = s.rbegin();
//    while (rit != s.rend()) {
//        cout << *rit;
//        ++rit;
//    }
//    cout << endl;
//
//    // 4. ��Χfor
//    cout << "��Χfor: ";
//    for (auto ch : s) cout << ch;
//}
//
int main() {
   // TestS1();
   // TestS2();

    return 0;
}
