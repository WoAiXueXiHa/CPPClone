//#include <stdio.h>
//// �������ͷ�ļ���Ϊʲô�����ˣ�
//// ������ȫ�ֱ����;ֲ���������ͬ����ͬ������ѭ�ֲ�����ԭ��
//// rand��stdlib����ĺ������������������������ͬ������������
//#include <stdlib.h>
//int rand = 10;
//int main() {
//	int rand = 1;
//
//	return 0;
//}

//namespace name {
//	//fuction type variable
//}
//cpp��ͷ�ļ� io��
//#include <iostream>

//// ����
//namespace vect{
//
//	int rand = 10;
//	double d = 1.1;
//
//	struct ListNode {
//		int val;
//		struct ListNode* next;
//	};
//
//	void Swap(int* pa, int* pb);
//}
//
//int main() {
//
//	//// Ĭ�Ϸ��ʺ���ָ��ĵ�ַ
//	//printf("%p\n", rand);
//	//// ����vect�е�rand
//	//printf("%d\n", vect::rand);
//
//	return 0;
//}

//// �����ռ����Ƕ��
//namespace byte {
//	namespace bit {
//
//	}
//}
//
//// �����ռ�ͬ������ͬһ�������ռ�
//#include "head1.h"
//#include "head2.h"
//
//int main() {
//	MyLib::funcA();
//	MyLib::funcB();
//	return 0;
//}

// ָ���ռ����
//namespace bit {
//	int val = 1;
//}
//
//int val = 10;
//
//void fuc() {
//	int val = 11;
//	// ���ʺ����ڲ�����
//	printf("%d\n", val);
//	// ����ȫ�ֱ���
//	printf("%d\n", ::val);
//}
//int main() {
//
//	int val = 9;
//	// ���ʾֲ�����
//	printf("%d\n", val);
//	// ����ȫ�ֱ���
//	printf("%d\n", ::val);
//	// ���������ռ����
//	printf("%d\n", bit::val);
//	printf("\n");
//	fuc();
//	return 0;
//}


//// using�������ռ䲿�ֳ�Աչ������
//namespace bit {
//	int val = 1;
//	int num = 30;
//}
//using bit::num;
//
//int main() {
//
//	printf("%d\n", num);
//	printf("%d\n", bit::val);
//	return 0;
//}

// չ�������ռ�ȫ����Ա
//namespace bit {
//	int val = 1;
//	int num = 30;
//}
//using namespace bit;
//
//int main() {
//
//	printf("%d\n", num);
//	printf("%d\n", val);
//	return 0;
//}


// ��һ��CPP���� 
#include <iostream> // io��
using namespace std;// չ��std��׼��

//int main() {
//	cout << "HELLO,CS!" << endl; // << ����� ���Զ�ƥ������
//	return 0;
//}

// ���뼸�����ݲ���ӡ

//int main() {
//	int a = 0;
//	double b = 0;
//	char c = 'm';
//	string s = "hello";
//
//	// �����Զ�ʶ������
//	cin >> a;
//	cin >> b;
//	cin >> c >> s;
//
//	cout << a << "\n" << b << "\n" << c << "  " << s;
//
//	return 0;
//
//}

//// ȱʡ����
//void fuc(int a = 1) {
//	cout << a << endl;
//}
//
//int main() {
//	fuc(); // ʵ��δ����ʵ�ʵ�ֵ ȱʡ���� Ĭ��a == 1
//	fuc(9);// ʵ�δ���ʵ�ʵ�ֵ9 ��ȱʡ���� a == 9
//
//	return 0;
//}
//
//// ȫȱʡ
//void display1(int x = 9, string msg = "Hello", double ratio = 1.5) {
//    cout << "x=" << x
//         << ", msg=" << msg
//         << ", ratio=" << ratio << endl;
//}
//// ��ȱʡ ����ȱʡ���� ���������� ��������Ծ
//void display2(int x, string msg, double ratio = 1.5) {
//    cout << "x=" << x
//        << ", msg=" << msg
//        << ", ratio=" << ratio << endl;
//}
//int main() {
//    // ��ȱʡ���� ��������
//    display1();
//    display1(99);
//    display1(99,"cs");
//    display1(99,"cs",8.9);
//
//
//    display2(1,"hahahaha");
//    display2(1,"hahahaha",8.2);
//
//    return 0;
//
//}
//
//#include "decl.h"
//// �����������������ʱ ����������ʱ��
//int main() {
//	List* l;
//	ListInit(l);
//	HeadPush(l);
//}


//#include <iostream>
//using namespace std;
//// �������أ���CPP�У�֧�ֺ�����������������Ҫ��֤�βε����͡�˳����߸�����ͬ
//// �����βε����ֲ�����Ϊ�ж�����
//// �����ķ���ֵ������Ϊ�ж�����,����ʱ������Ҳ�޷�ʶ�𵽵����ĸ�����
//
//// ���Ͳ�ͬ
//int Add(int a, int b) {
//	return a + b;
//	cout << "Add(int a, int b)" << endl;
//}
//double Add(double a, double b) {
//	cout << "Add(double a, double b)" << endl;
//	return a + b;
//}
//
//// ˳��ͬ
//void fuc(int x, double y) {
//	cout << "fuc(int x, double y)" << endl;
//}
//void fuc(double y, int x) {
//	cout << "fuc(double y, int x)" << endl;
//
//}
//
//// ������ͬ
//void Print(char c, int x) {
//	cout << "Print(char c, int x)" << endl;
//}
//void Print(char c) {
//	cout << "Print(char c)" << endl;
//}
//
//// �Ǻ������أ����Ǳ�������֪��ƥ��˭ ��������
//void f() {
//	cout << "f()" << endl;
//}
//void f(int a = 2) {
//	cout << "f(int a)" << endl;
//}
//int main() {
//	Add(6, 7);
//	Add(1.3, 8.1);
//
//	fuc(7, 8.6);
//	fuc(8.6, 7);
//
//	Print('a',8);
//	Print('a');
//
//	//f();
//	//f(1);
//
//	return 0;
//
//}

// &����

// �൱�ڸ��������
//int main() {
//	int a = 0;
//	int& b = a; 
//	int& c = a;
//	int& d = c;
//
//	d++;
//
//	//ָ����������
//	int* pa = &a;
//	int*& pb = pa;
//	pb = NULL;
//
//	//����һ������һ��ʵ�壬�ٲ�����������ʵ��
//	int x = 7;
//	int& y = x;
//	int z = 0;
//	// ��z��ֵ������y
//	y = z;
//	cout << z << " " << x << " " << y;
//	return 0;
//}

//// const��������
//int main() {
//
//	const int a = 10;
//	// Ȩ�޷Ŵ󣬲����� aֻ�� ��b�ǿ��޸ĵ�
//	/*int& b = a;*/
//
//	// Ȩ��ƽ��
//	const int& b = a;
//
//	int x = 5;
//	//Ȩ����С ����
//	const int& y = x;
//
//	int num = 45;
//	const int* pnum = &num;
//	// Ȩ��ƽ��
//	const int*& pr = pnum;
//	// Ȩ�޷Ŵ� ������
//	/*int*& pq = pnum;*/
//
//	int* qnum = &num;
//	// Ȩ��ƽ��
//	int*& anum = qnum;
//	// Ȩ����С �������õ� int* ��const int* �������Ͳ�ƥ�� ������
//	/*const int*& bnum = qnum;*/
//	// CPP����ͨ����ʽת��������ָ��ʵ��Ȩ����С
//	const int* bnum = qnum;
//
//	// ����ת���ͱ��ʽ���㶼�������ʱ���� �ܵ��и�ֵ������
//
//	double val1 = 1.2, val2 = 2.4;
//
//	const double& sum = val1 + val2;
//
//	int num1 = 5;
//	float f = num1; 
//
//	const float& ff = f;
//
//}

//int main() {
//	int a = 2;
//	// ���ײ���߶����ٿռ�
//	int* pa = &a; // �﷨�Ͽ����¿ռ�
//	int& ia = a;  // �﷨�ϲ����ٿռ�
//
//	cout << "sizeof(int*):" << sizeof(int*) << " sizeof(int&):" << sizeof(int&);
//}

// �������� inline �����������һ��������ļ��ֿ���inlineչ���������������ַ������ʱ�����
//inline int Add(int a, int b) {
//	return a + b;
//}
//
//int main() {
//	Add(2, 6);
//
//	return 0;
//}

// NULL��һ���� 
int mian() {
	int* ptr = NULL;
}