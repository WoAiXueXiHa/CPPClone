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

#include "decl.h"
// �����������������ʱ ����������ʱ��
int main() {
	List* l;
	ListInit(l);
	HeadPush(l);
}