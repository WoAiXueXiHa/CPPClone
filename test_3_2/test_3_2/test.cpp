#include <stdio.h>
//// �������ͷ�ļ���Ϊʲô�����ˣ�
//// ������ȫ�ֱ����;ֲ���������ͬ����ͬ������ѭ�ֲ�����ԭ��
//// rand��stdlib����ĺ������������������������ͬ������������
#include <stdlib.h>
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
#include <iostream>

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
namespace bit {
	int val = 1;
	int num = 30;
}
using namespace bit;

int main() {

	printf("%d\n", num);
	printf("%d\n", val);
	return 0;
}