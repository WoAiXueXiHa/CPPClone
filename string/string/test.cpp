#include <iostream>
#include <string>
using namespace std;

//// C++11 auto相关
//
//int func1() {
//	return 24;
//}
//
//// 1.不能做参数 
////void func2(auto a){}
//
//// 2.可以做返回值，谨慎使用，降低效率
//auto func3(){}
//
//int main() {
//	int a = 10;
//	auto b = a;
//	auto c = 'a';
//	auto d = func1();
//	//// 编译报错C3531 类型包含“auto”的符号必须具有初始值设定项
//	//auto e;
//
//	// typeid用于打印类型名
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;
//	cout << typeid(d).name() << endl;
//
//	int x = 20;
//	// 3.修饰指针变量 auto*和auto没有区别
//	auto* px1 = &x;
//	auto px2 = &x;
//
//	// 4.修饰引用变量 必须加&
//	auto& m = x;
//
//	cout << typeid(px1).name() << endl;
//	cout << typeid(px2).name() << endl;
//	cout << typeid(m).name() << endl;
//
//	auto aa = 0, bb = 1;
//	// 5. 连续声明 列表的类型要一致
//	// 编译报错：C3538 在声明符列表中，auto必须始终推导为同一类型
//	// auto cc = 2, dd = 3.0;
//
//	// 6.auto不能声明数组
//	// 编译报错：C3318 数组不能具有其中包含auto的元素类型
//	// auto arr[10] = { 0 };
//	return 0;
//}

// 范围for 
int main() {
	int arr[5] = { 0,1,2,3,4 };
	// C++ 98
	for (size_t i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		cout << arr[i] << " " ;
	}
	cout << endl;
	// 修改数据
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