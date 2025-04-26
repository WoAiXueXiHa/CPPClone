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

//// 范围for 
//int main() {
//	int arr[5] = { 0,1,2,3,4 };
//	// C++ 98
//	for (size_t i = 0; i < sizeof(arr) / sizeof(int); i++)
//	{
//		cout << arr[i] << " " ;
//	}
//	cout << endl;
//	// 修改数据
//	for (size_t i = 0; i < sizeof(arr) / sizeof(int); i++)
//	{
//		cout << arr[i] * 2 << " ";
//	}
//
//	// C++ 11
//	cout << endl;
//	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
//	cout << endl;
//	for (auto& e : arr) cout << e << " ";
//	for (auto& e : arr) e *= 2;
//	cout << endl;
//	for (auto& e : arr) cout << e << " ";
//
//	cout << endl;
//
//	string str("hello, world!");
//	for (auto str : str) cout << str;
//
//	return 0;
//
//}

// string类的常用接口

// //1. 拷贝构造之类
//void TestS1() {
//     初始化字符串对象 s0
//    string s0("Initing string.");
//
//     创建一个空字符串对象 s1
//    string s1;
//
//     创建一个string的空类 s11
//    string s11();
//
//     使用 s0 拷贝构造，s2 内容和 s0 完全一样
//    string s2(s0);
//
//     从 s0 的位置 5 开始，创建一个新的字符串 s3，内容是 s0 从索引 5 开始到末尾的字符串
//    string s3(s0, 5);
//
//    cout << s0 << endl;
//    cout << s1 << endl;
//     是一个类 cout<<s11会报错
//    cout << s11 << endl;
//    cout << s2 << endl;
//    cout << s3 << endl;
//}

//// 遍历操作
//void TestS2() {
//    string s("hello world");
//    // 1. 下标+[]
//    cout << "operator[]:";
//    for (size_t i = 0; i < s.size(); i++)
//    {
//        cout << s[i];
//    }
//    cout << endl;
//
//    // 2.迭代器begin+end
//    // iterator begin();const_iterator begin() const; 返回迭代器指向的字符串字符的第一个位置
//    // iterator end();const_iterator end() const;     返回迭代器指向的字符串字符最后位置的下一个位置
//    // 迭代器范围[begin,end+1)
//    cout << "迭代器begin+end :";
//
//    string::iterator it = s.begin(); // 可以将it理解成指针，但他不是指针
//    while (it != s.end()) {
//        cout << *it;
//        ++it;
//    }
//    cout << endl;
//
//    // 3. 反向迭代器rbegin+rend
//    // string::reverse_iterator rit = s.rbegin();
//    // C++11可以用auto自动识别类型
//    cout << "反向迭代器rbegin+rend :";
//    auto rit = s.rbegin();
//    while (rit != s.rend()) {
//        cout << *rit;
//        ++rit;
//    }
//    cout << endl;
//
//    // 4. 范围for
//    cout << "范围for: ";
//    for (auto ch : s) cout << ch;
//}
//
int main() {
   // TestS1();
   // TestS2();

    return 0;
}
