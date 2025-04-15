
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

//// 拷贝构造函数
//class Date {
//public:
//	Date(int year = 1, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	// err: “Date”: 非法的复制构造函数: 第一个参数不应是“Date”
//	// Date(Date d);
//	// 
//	// 拷贝构造函数
//	Date(const Date& d) {
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//		cout << "拷贝构造函数被调用！" << endl;
//	}
//
//	// 严重的错误，将新对象赋值给已经存在的d的对象
//	// 新对象未初始化，原对象被修改
//	/*Date(Date& d) {
//		d._year = _year;
//		d._month = _month;
//		d._day = _day;
//	}*/
//
//	void Print() {
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//	// 指针类型
//	Date(Date* d){
//		_year = d->_year;
//		_month = d->_month;
//		_day = d->_day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//void AddressPrint(Date d) {
//	cout <<"函数调用："<< & d << endl;
//	d.Print();
//}
//// 传值返回
//Date Func1() {
//	Date tmp(2024, 7, 5);
//	tmp.Print();
//	return tmp;
//}
//// 传引用返回
//Date& Func2(){
//	Date tmp(2024, 7, 5);
//	tmp.Print();
//	return tmp;
//}
//int main() {
//
//	//Date d1(2024, 3, 26);
//	//// 这⾥的d1传值传参给d要调用拷贝构造完成拷贝，传引用传参可以减少拷贝
//	//AddressPrint(d1);
//	//cout << "***************************************" << endl; // 用于分隔
//	//cout << "主函数中显式写：" << &d1 << endl;
//	//cout << "***************************************" << endl; // 用于分隔
//
//	////这里可以完成拷贝，但不是拷贝构造，只是一个简单的初始化 
//	//Date d2(&d1);
//	//d1.Print();
//	//d2.Print();
//
//	//cout << "***************************************" << endl; // 用于分隔
//
//	//// 拷贝构造这样写
//	//// 两种写法 更推荐第二种
//	//Date d3(d1);
//	//Date d4 = d2;
//	//d3.Print();
//	//d4.Print();
//
//	// Func返回了一个局部对象tmp的引用作为返回值
//	// Func2函数结束，tmp对象被销毁，相当于野引用
//	Date ret2 = Func2();
//	ret2.Print();
//	cout << "*******************************" << endl;
//	Date ret1 = Func1();
//	ret1.Print();
//
//	return 0;
//}
//
////// 浅拷贝和深拷贝
////class Stack {
////public:
////	// 没有显式写拷贝构造，默认生成的拷贝构造：
////	Stack(Stack& ST) {
////		_a = ST._a; // 直接复制指针地址，浅拷贝
////		_size = ST._size;
////		_capacity = ST._capacity;
////	}
////private:
////	int* _a;
////	int _size;
////	int _capacity;
////};
////
////int main() {
////	Stack st1;
////	st1.Push(1);
////	st1.Push(2);
////
////	Stack st2 = st1;  // 调用默认拷贝构造函数（浅拷贝）
////
////}

// 运算符重载
//
//class Date {
//public:
//	// 非法使用运算符重载 .* :: sizeof . ?: 这五个操作符不可重载
//	// void operator::() {}
//	// 构造函数
//	Date(int year = 2025, int month = 1, int day = 1) {
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	// 判断两天是否相等
//	bool operator==(const Date& d) {
//		return _year == d._year
//			&&_month == d._month
//			&&_day == d._day;
//	}
//
//	// 前置++
//	Date& operator++( ) {
//		cout <<"前置" << endl;
//		++_day;
//		return *this;
//	}
//	// 后置++
//	Date& operator++(int){
//		cout << "后置" << endl;
//		Date tmp = *this;
//		++_day;
//		return tmp;
//	}
//
//	// 打印数据
//	void Print() {
//		cout << "_year" << "-" << "_month" << "-" << "_day" << endl;
//	}
//  
//private:
//	int _year;
//	int _month;
//	int _day;
//
//};
//
//int mian() {
//	Date d1(2025, 3, 30);
//	Date d2(2024, 3, 30);
//	
//	// 运算符重载可以显式调用
//	d1.operator==(d2);
//	// 这样更能体现CPP的优势 转换成调用 d1.operator==(d2)
//	d1 == d2;
//
//	++d1;
//	d2++;
//	return 0;
//}

// 初始化列表
class Time {
public:
	// 构造函数
	// 初始化列表 ":"开始 ","分隔 本质是每个对象中的成员定义的地方
	Time()
		:_hour(1)
	{
		cout << "Time()构造调用\n";
	}
private:
	int _hour;
};

class Date {
public:
	Date()
		:_day(15)
		,_month(4)
		,_year(2025)
	{
		cout << "Date()构造调用成功   ";
		cout << _year << "-" << _month << "-" << _day;
	}
private:
	int _day;
	int _month;
	int _year;

	Time _h;
};