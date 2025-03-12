//#include <stdio.h>
//// 加了这个头文件，为什么报错了？
//// 理论上全局变量和局部变量可以同名，同名就遵循局部优先原则
//// rand是stdlib库里的函数名，我们命名与这个函数同名，引发错误
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
//cpp的头文件 io流
//#include <iostream>

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


// 第一个CPP程序 
#include <iostream> // io流
using namespace std;// 展开std标准库

//int main() {
//	cout << "HELLO,CS!" << endl; // << 输出符 可自动匹配类型
//	return 0;
//}

// 输入几个数据并打印

//int main() {
//	int a = 0;
//	double b = 0;
//	char c = 'm';
//	string s = "hello";
//
//	// 可以自动识别类型
//	cin >> a;
//	cin >> b;
//	cin >> c >> s;
//
//	cout << a << "\n" << b << "\n" << c << "  " << s;
//
//	return 0;
//
//}

//// 缺省参数
//void fuc(int a = 1) {
//	cout << a << endl;
//}
//
//int main() {
//	fuc(); // 实参未传递实际的值 缺省参数 默认a == 1
//	fuc(9);// 实参传递实际的值9 非缺省参数 a == 9
//
//	return 0;
//}
//
//// 全缺省
//void display1(int x = 9, string msg = "Hello", double ratio = 1.5) {
//    cout << "x=" << x
//         << ", msg=" << msg
//         << ", ratio=" << ratio << endl;
//}
//// 半缺省 定义缺省参数 从右往左定义 不可以跳跃
//void display2(int x, string msg, double ratio = 1.5) {
//    cout << "x=" << x
//        << ", msg=" << msg
//        << ", ratio=" << ratio << endl;
//}
//int main() {
//    // 传缺省参数 从左往右
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
// 函数定义和声明分离时 必须在声明时给
int main() {
	List* l;
	ListInit(l);
	HeadPush(l);
}