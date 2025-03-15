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
//
//#include "decl.h"
//// 函数定义和声明分离时 必须在声明时给
//int main() {
//	List* l;
//	ListInit(l);
//	HeadPush(l);
//}


//#include <iostream>
//using namespace std;
//// 函数重载：在CPP中，支持函数定义重名，但是要保证形参的类型、顺序或者个数不同
//// 函数形参的名字不能作为判定条件
//// 函数的返回值不能作为判定条件,调用时编译器也无法识别到底是哪个函数
//
//// 类型不同
//int Add(int a, int b) {
//	return a + b;
//	cout << "Add(int a, int b)" << endl;
//}
//double Add(double a, double b) {
//	cout << "Add(double a, double b)" << endl;
//	return a + b;
//}
//
//// 顺序不同
//void fuc(int x, double y) {
//	cout << "fuc(int x, double y)" << endl;
//}
//void fuc(double y, int x) {
//	cout << "fuc(double y, int x)" << endl;
//
//}
//
//// 个数不同
//void Print(char c, int x) {
//	cout << "Print(char c, int x)" << endl;
//}
//void Print(char c) {
//	cout << "Print(char c)" << endl;
//}
//
//// 是函数重载，但是编译器不知道匹配谁 存在歧义
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

// &引用

// 相当于给变量起别
//int main() {
//	int a = 0;
//	int& b = a; 
//	int& c = a;
//	int& d = c;
//
//	d++;
//
//	//指针变量起别名
//	int* pa = &a;
//	int*& pb = pa;
//	pb = NULL;
//
//	//引用一旦引用一个实体，再不能引用其他实体
//	int x = 7;
//	int& y = x;
//	int z = 0;
//	// 把z的值拷贝给y
//	y = z;
//	cout << z << " " << x << " " << y;
//	return 0;
//}

//// const修饰引用
//int main() {
//
//	const int a = 10;
//	// 权限放大，不可以 a只读 而b是可修改的
//	/*int& b = a;*/
//
//	// 权限平移
//	const int& b = a;
//
//	int x = 5;
//	//权限缩小 可以
//	const int& y = x;
//
//	int num = 45;
//	const int* pnum = &num;
//	// 权限平移
//	const int*& pr = pnum;
//	// 权限放大 不可以
//	/*int*& pq = pnum;*/
//
//	int* qnum = &num;
//	// 权限平移
//	int*& anum = qnum;
//	// 权限缩小 但是引用的 int* 与const int* 二者类型不匹配 不可以
//	/*const int*& bnum = qnum;*/
//	// CPP允许通过隐式转换创建新指针实现权限缩小
//	const int* bnum = qnum;
//
//	// 类型转换和表达式运算都会产生临时变量 总得有个值来存结果
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
//	// 但底层二者都开辟空间
//	int* pa = &a; // 语法上开辟新空间
//	int& ia = a;  // 语法上不开辟空间
//
//	cout << "sizeof(int*):" << sizeof(int*) << " sizeof(int&):" << sizeof(int&);
//}

// 内联函数 inline 定义和声明在一起，如果多文件分开，inline展开函数并不保存地址，链接时会出错
//inline int Add(int a, int b) {
//	return a + b;
//}
//
//int main() {
//	Add(2, 6);
//
//	return 0;
//}

// NULL是一个宏 
int mian() {
	int* ptr = NULL;
}