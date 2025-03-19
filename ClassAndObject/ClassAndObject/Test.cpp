#define _CRT_SECURE_NO_WARNINGS 1
#include "Show.h"
//// class为类 是CPP的自定义类型
//// 定义一个栈
//// 函数定义和申明在同一个类域中
//class Stack {
//// 接口函数一般公开使用
//public:
//	// 缺省参数，如果不传参，默认_capacity为4
//	void Init(int n = 4) {
//		arr = (int*)malloc(sizeof(int) * n);
//		if (arr == nullptr)
//		{
//			perror("申请空间失败");
//			return;
//		}
//		_capacity = n;
//		_size = 0;
//	}
//
//	void Push(int input = 1) {
//		if (_size == _capacity) {
//			size_t _newcapacity = 2 * sizeof(int);
//			int* tmp = (int*)realloc(arr, _newcapacity * sizeof(int));
//			if (tmp == nullptr) {
//				perror("realloc() err!");
//				return;
//			}
//			arr = tmp;
//			_capacity = _newcapacity;
//		}
//		arr[_size++] = input;
//	}
//
//	int Top() {
//		assert(_size > 0);
//		return arr[_size - 1];
//	}
//
//	void Destroy() {
//		free(arr);
//		arr = nullptr;
//		_size = _capacity = 0;
//	}
//
//// 数据和实现方法一般被保护起来
//private:
//
//	// 为了区分成员变量，⼀般习惯上成员变量
//	// 会加⼀个特殊标识，如_或者m开头
//	size_t _size;
//	size_t _capacity;
//	int* arr;
//};

//class Date {
//public:
//	void Today(int year, int month, int day) {
//		// C2106 “=” 左操作数必须为左值
//		/*this = nullptr;*/
//
//		//this->_year = year
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void Print() {
//		cout << _year << "-" << _month << "-" << _day<<"\n";
//	}
// //仅声明，并未开辟空间，实例化对象时才开辟空间
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main() {
//	 //不用typedef Stack就是一个类 而st是Stack这个类的实例化对象
//	/*Stack st;
//	st.Stack::Init(12);
//	st.Stack::Push(1);
//	st.Stack::Push(2);
//
//	cout << st.Stack::Top();
//
//	st.Stack::Destroy();*/
//
//	Date d1;
//	Date d2;
//
//	d1.Today(2024, 3, 17);
//	d1.Print();
//
//	d2.Today(2026, 3, 18);
//	d2.Print();
//
//
//	return 0;
//
//} 

//// 计算⼀下A / B / C实例化的对象是多⼤？
//
//class A
//{
//public:
//	void Print()
//	{
//		cout << _ch << endl;
//	}
//private:
//	char _ch;
//	int _i;
//};
//
//class B
//{
//public:
//	void Print()
//	{
//		//...
//	}
//};
//
//class C
//{
//	//...
//};
//
//int main() {
//
//	cout << sizeof(A) << "\n" << sizeof(B) << "\n" << sizeof(C);
//	return 0;
//}

// 构造函数

class Info {
public:
	// 无参构造函数
	Info() {
		char* tmp = (char*)malloc(40);
		if (tmp == nullptr) {
			perror("malloc() err!");
			return;
		}

		_name = tmp;
		strcpy(_name, "kunkun");

		_age = 18;
		_score = 2.5;
	}

	// 全缺省构造函数
	Info(char* name = (char*)"k", int age = 10, double score = 5.8) {
		_name = name;
		_age = age;
		_score = score;
	}

	//// 带参构造函数
	//Info(char* name,int age,double score) {
	//	_name = name;
	//	_age = age;
	//	_score = score;
	//}
private:
	char* _name;
	int _age;
	double _score;
};