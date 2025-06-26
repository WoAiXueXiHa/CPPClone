#include <iostream>
using namespace std;
//
//// 以前写一个交换函数
//// 限定int类型
//void Swap(int& left, int& right)
//{
//	int tmp = left;
//	left = right;
//	right = tmp;
//}
//// 限定double类型
//void Swap(double& left, double& right)
//{
//	double tmp = left;
//	left = right;
//	right = tmp;
//}
//// 限定int指针类型
//void Swap(int* left, int* right)
//{
//	int tmp = *left;
//	*left = *right;
//	*right = tmp;
//}
//// 过于臃肿，逻辑都一样，只有类型不一样，引入模板减少我们重复写逻辑一样的代码
//
//// T可以是任何类型
//template <typename T>
//void Swap(T& left, T& right)
//{
//	T tmp = left;
//	left = right;
//	right = tmp;
//}
//
//int main()
//{
//	int a = 4, b = 6;
//	Swap(a, b);
//
//	double x = 4.0, y = 6.8;
//	Swap(x, y);
//
//	int* pa = &a, * pb = &b;
//	Swap(pa, pb);
//
//}

//// 写一个加法模板函数
//template <typename T>
//T Add(const T& a,const T& b)
//{
//	return a + b;
//}
//int main()
//{
//	int a = 7, b = 15;
//	double x = 10.2, y = 1.3;
//	/*Add(a, y);
//	Add(x, b);*/
//	/*
//	该语句不能通过编译，因为在编译期间，当编译器看到该实例化时，需要推演其实参类型
//	通过实参a将T推演为int，通过实参将T推演为double类型，但模板参数列表中只有一个T，
//	编译器无法确定此处到底该将T确定为int 或者 double类型而报错
//	*/
//	/*注意：在模板中，编译器一般不会进行类型转换操作，因为一旦转化出问题，编译器就需要背黑锅*/
//	// 有两种处理方式：
//	// 1. 用户强制类型转换 2.用户显式实例化
//	// 1.用户强制类型转换
//	Add(a, (int)y);
//	Add(x, (double)b);
//	cout << Add(a, (int)y) << endl << Add(x, (double)b) << endl;
//
//	// 2.显式实例化
//	Add<int>(a, y);
//	Add<double>(x, b);
//	return 0;
//}
//

//// 专门处理int的加法函数
//int Add(int left, int right)
//{
//	cout << "int Add(int left, int right)" << endl;
//	return left + right;
//}
//// 通用加法函数1
//template<class T>
//T Add(T left, T right)
//{
//	cout << "T Add(const T& left, const T& right)" << endl;
//	return left + right;
//}
//// 通用加法函数2
//template<class T1, class T2>
//auto Add(T1 left, T2 right)
//{
//	cout << "auto Add(T1 left, T2 right)" << endl;
//	return left + right;
//}
//void Test1()
//{
//	Add(1, 2);		  // 与非模板函数匹配，编译器不需要特化
//	Add<int>(1, 2);   // 调用编译器特化的Add版本
//}
//void Test2()
//{
//	Add(1, 2);		// 与非函数模板类型完全匹配，不需要函数模板实例化
//	Add(1, 2.0);    // 模板函数可以生成更加匹配的版本，编译器根据实参生成更加匹配的Add函数
//}
//int main()
//{
//	Test1();
//	Test2();
//	return 0;
//}

// 类模板

// 格式
/*template<class T1, class T2, ..., class Tn>
class 类模板名
{
	// 类内成员定义
};*/

template<typename T>
class Stack
{
public:
    Stack(size_t capacity = 4)
    {
        _array = new T[capacity];
        _capacity = capacity;
        _size = 0;
    }
    void Push(const T& data);
private:
    T* _array;
    size_t _capacity;
    size_t _size;
};
// 模版不建议声明和定义分离到两个文件.h 和.cpp会出现链接错误
template<class T>
void Stack<T>::Push(const T& data)
{
    // 扩容
    _array[_size] = data;
    ++_size;
}
int main()
{
    // 实例化
    Stack<int> st1;    // int
    Stack<double> st2; // double
    return 0;
}
