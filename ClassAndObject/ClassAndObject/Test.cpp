
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

//class Info {
//public:
//	// 无参的默认构造函数
//	Info() {
//		_name = "UnKnow";
//		_age = 0;
//	}
//	//// C2668 对重载函数的调用不明确 两种默认构造函数不能同时存在
//	//// 全缺省的默认构造函数
//	//Info(string name = "KUNKUN", int age = 18) {
//	//	_name = name;
//	//	_age = age;
//	//}
//	// 带参数的构造函数
//	Info(string name, int age) {
//		_name = name;
//		_age = age;
//	}
//
//	void Print() {
//		cout << " 默认构造函数被调用" << endl;
//		cout << _name << "  " << _age << endl;
//	}
//private:
//	string _name;
//	int _age;
//};

//int main() {
//	//Info I1;
//	//I1.Print();
//	
//	// 调用带参数的构造函数
//	Info I2("kunkun", 18);
//	
//	I2.Print();
//}

//class Time {
//public:
//	Time() {
//		cout << "构造函数调用成功" << endl;
//		_hour = 0;
//		_minute = 0;
//		_second = 0;
//	}
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//
//class Date {
//public:
//	/*Date(int year, int month, int day) {
//		_year = year;
//		_month = month;
//		_day = day;
//	}*/
//
//	void Print() {
//		cout << "构造函数成功调用" << endl;
//		cout << _year <<"-" << _month << "-" << _day << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//	// 添加自定义类型
//	Time _t;
//};
//
//int main() {
//	Date D1;
//	D1.Print();
//
//	return 0;
//}

//// 析构函数
//class Test {
//public:
//	Test() {
//		cout << "构造函数调用成功" << endl;
//	}
//	~Test() {
//		cout << "析构函数调用成功" << endl;
//	}
//private:
//};
//
//int main() {
//	cout << "程序开始运行" << endl;
//	{
//		Test T;// 构造函数被调用
//	}// T生命周期结束
//	cout << "程序运行结束";
//}

// 拷贝构造函数