#include <stdio.h>
//// 加了这个头文件，为什么报错了？
//// 理论上全局变量和局部变量可以同名，同名就遵循局部优先原则
//// rand是stdlib库里的函数名，我们命名与这个函数同名，引发错误
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
//cpp的头文件 io流
#include <iostream>

//// 例如
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
//	//// 默认访问函数指针的地址
//	//printf("%p\n", rand);
//	//// 访问vect中的rand
//	//printf("%d\n", vect::rand);
//
//	return 0;
//}

//// 命名空间可以嵌套
//namespace byte {
//	namespace bit {
//
//	}
//}
//
//// 命名空间同，就是同一个命名空间
//#include "head1.h"
//#include "head2.h"
//
//int main() {
//	MyLib::funcA();
//	MyLib::funcB();
//	return 0;
//}

// 指定空间访问
//namespace bit {
//	int val = 1;
//}
//
//int val = 10;
//
//void fuc() {
//	int val = 11;
//	// 访问函数内部变量
//	printf("%d\n", val);
//	// 访问全局变量
//	printf("%d\n", ::val);
//}
//int main() {
//
//	int val = 9;
//	// 访问局部变量
//	printf("%d\n", val);
//	// 访问全局变量
//	printf("%d\n", ::val);
//	// 访问命名空间变量
//	printf("%d\n", bit::val);
//	printf("\n");
//	fuc();
//	return 0;
//}


//// using将命名空间部分成员展开访问
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

// 展开命名空间全部成员
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