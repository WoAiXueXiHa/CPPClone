
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

// 流插入 流提取的运算符重载
// 内置类型可以直接使用，因为库里面已经写好了
// int i = 1;
// cout << i;
// 我们可以将流插入进行运算符重载
// cout.operator<<(i);// 自动识别类型，本质是流插入重载成函数重载了

//class Date {
//public:
//	friend ostream& operator<<(ostream& out, const Date& d);
//	friend istream& operator>>(istream& in, Date& d);
//	Date(int year, int month, int day)
//		:_year(2025)
//		, _month(4)
//		, _day(15) 
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	// void operator<<(const Date* this, ostream& out)
//	// 参数的顺序和操作数要保持一致
//	//void operator<<(ostream& out) {
//	//	out << "<< 运算符重载成功";
//	//	out << _year << "-" << _month << "-" << _day<<endl;
//	//}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//ostream& operator<<(ostream& out, const Date& d) {
//	out << "<<重载成功";
//	out << d._year << "-" << d._month << "-" << d._day << endl;;
//	return out;
//}
//istream& operator>>(istream& in, Date& d) {
//	cout << "请依次输入年月日：<" << endl;
//	in >> d._year >> d._month >> d._day;
//	return in;
//}
//int main() {
//	Date d1(2025,4,15);
//	// void operator<<(const Date* this, ostream& out)
//	// 参数的顺序和操作数要保持一致
//	/*d1.operator<<(cout);
//	d1 << cout;*/
//	// 这样使用很不符合正常逻辑 cout << d1这样才符合我们的习惯
//	/*cout << d1;*/
//	// 那就需要我们强制设计成 ostream& operator(ostream& out, const Date& d)这样的格式 ，将这个函数设置成全局函数
//	cin >> d1;
//	cout<<d1;
//}

//// 初始化列表
//// 实现一个栈
//typedef int DataType;
//class Stack {
//public:
//	// 默认构造
//	Stack(size_t capacity = 4) {
//		_arr = (DataType*)malloc(sizeof(DataType) * capacity);
//		if (_arr == nullptr) {
//			perror("_arr malloc err!");
//			return;
//		}
//		_capacity = capacity;
//		_top = 0;
//	}
//	void Push(DataType val) {
//		_arr[_top++] = val;
//	}
//
//	// 其他方法实现
//	~Stack() {
//		if (_arr) {
//			free(_arr);
//			_arr = nullptr;
//			_top = _capacity = 0;
//		}
//	}
//private:
//	DataType* _arr;
//	int _top;
//	size_t _capacity;
//};
//// 两个栈实现一个队列
//class MyQueue {
//public:
//	// 若Stack不具备默认构造，那么MyQueue也无法生成默认构造
//	// 1、引用 2、const 3、没有默认构造自定义类型成员(必须显示传参调构造)
//	MyQueue(int n, int& rr)
//		:_pushst(n)
//		, _popst(n)
//		, _top(0)
//		,_val(1)
//		,_ref(rr)
//	{
//	
//	}
//// 声明成员变量
//private:
//	Stack _pushst;
//	Stack _popst;
//	int _top;
//
//	// 必须在定义时初始化
//	// C++11给缺省值 
//	const int _val = 0;
//	char s = '0';
//	int& _ref;
//};
//int main() {
//	int aa = 0;
//	MyQueue q1(10,aa);
//	return 0;
//}

//class A
//{
//public:
//	A(int a)
//		:_a1(a)
//		, _a2(_a1) 
//	{
//	}
//	void Print() {
//		cout << _a1 << " " << _a2 << endl;
//	}
//private:
//	int _a2 = 2;
//	int _a1 = 2;
//};
//int main()
//{
//	A aa(1);
//	aa.Print();
//}

//// 类型转换
//class classA {
//public:
//	// 单参数构造
//	classA(int a)
//	:_aa(a)
//	{
//		cout << "classA(int a)\n";
//	}
//	// 多参数构造
//	classA(int a1, int a2)
//		:_a1(a1)
//		, _a2(a2)
//	{
//		cout << "classA(int a1, int a2)\n";
//	}
//private:
//	// 声明给缺省值
//	int _aa = 0;
//	int _a1 = 1;
//	int _a2 = 3;
//};
//
//int main() {
//	classA a1(1);
//	// 拷贝构造
//	classA a2 = a1;
//
//	// 隐式类型转换
//	// 3构造了一个classA的临时对象，再用这个临时对象拷贝构造a3
//	// 这里经历了构造、拷贝两个过程，编译器优化为一步，直接构造
//	classA a3 = 3;
//
//	// raa 引用的是类型转换中用3构造的临时对象 
//	const classA& raa = 3;
//
//	// 多参数传参用大括号
//	classA aa1 = { 1 , 2 };
//	const classA& raaa = { 1 , 3 };
//
//	return 0;
//}

//// 实现一个类 计算创建出了多少类对象
//// 有对象的创建就++ 有析构就-- ，用静态变量存储这个值，最后返回最终值
//class classB {
//public:
//	classB() {
//		++_SumCnt;
//	}
//	classB(const classB& t) {
//		++_SumCnt;
//	}
//	~classB() {
//		--_SumCnt;
//	}
//	static int GetBCount() {
//		return _SumCnt;
//	}
//	// 类里面声明
//	// 不能给缺省值，因为缺省值是给初始化列表
//	// 在静态区而不在对象中，不走初始化列表
//	static int _SumCnt;
//private:
//	int _b1;
//	int _b2;
//};
//classB func() {
//	classB bb4;
//	return bb4;
//}
//
//// 类外面初始化 即定义
//int classB::_SumCnt = 0;
//
//int main() {
//	classB bb1;
//	cout << sizeof(bb1) << endl;
//
//	classB bb2;
//	classB bb3(bb2);
//
//	func();
//	// 直接访问
//	cout << classB::GetBCount() << endl;
//
//}

//class Time {
//	// 声明Date是Time的友元，但是Time不是Date的友元
//	// Date类中可以访问Time类中的成员，但是Time类中不能访问Date中的成员
//	friend class Date;
//public:
//	Time(int hour = 10, int minute = 12, int second = 24)
//		:_hour(hour)
//		, _minute(minute)
//		, _second(second)
//	{
//
//	}
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//class Date {
//public:
//	Date(int year = 2025, int month = 4, int day = 16)
//		:_year(year)
//		, _month(month)
//		, _day(day) 
//	{
//		// 直接在Date类中访问Time类的_hour
//		_t._hour = 0;
//	}
//
//	void SetTimeOfDate(int hour, int minute, int second) {
//		// 直接访问Time类的成员
//		_t._hour = hour;
//		_t._minute = minute;
//		_t._second = second;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//	// 在Date类中声明Time类
//	Time _t;
//};

class B {
public:
	// A是B的内部类
	// 仅仅是将A放到B中，还受到类域和访问限定符的限制
	class A { // A天生是B的友元
	private:
		int a1;
	};
private:
	int b1;
	char b2;
};