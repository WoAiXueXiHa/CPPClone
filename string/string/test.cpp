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

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


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

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

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

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


//// 2.遍历操作
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

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//// 3.容量操作
//void TestS3() {
//    // size length capacity resize clear
//    string s0("hello, cs!");
//    cout << s0.size() << endl;// 计算一个字符串的长度 单位字节
//    cout << s0.length() << endl;// 计算一个字符串的长度 单位字节
//    cout << s0.capacity() << endl; // 返回当前vector所分配的内存空间 单位字节
//
//    s0.clear();// 将s0的有效字符清空，注意：不改变底层空间大小，仅仅清理字符
//    cout << s0 << endl;
//    cout <<"size:" << s0.size() << "     capacity:"<< s0.capacity()<< endl;
//
//    // 将s1的有效字符增加到12，剩下的用字符'a'填充
//    string s1("I like code to C");
//    s1.resize(18, '++');
//    cout << s1 << endl;
//    cout << "size:" << s1.size() << "    capacity:" << s1.capacity() << endl;
//    // 将s1有效字符增加到20，剩下的用'\0'填充 "I like code to C++\0\0"
//    s1.resize(20);
//    cout << s1 << endl;
//    cout << "size:" << s1.size() << "    capacity:" << s1.capacity() << endl;
//
//    // 将s1有效字符减少到5
//    s1.resize(5);
//    cout << s1 << endl;
//    cout << "size:" << s1.size() << "    capacity:" << s1.capacity()<< endl;
//   
//    // void reserve (size_t n = 0);
//    // 为s2预留额外11个字符的空间，是一种预分配内存的方式
//    // 这意味着在添加字符时，如果新字符的数量不超过预留的空间，就不需要重新分配内存，从而减少了性能开销
//    // 如果 n 大于当前字符串的容量，该函数会使容器将其容量增加到 n 个字符（或更多）
//    string s2("hello");
//    cout << "size:" << s2.size() << "    capacity:" << s2.capacity() << endl;
//    s2.reserve(16);
//    cout << "size:" << s2.size() << "    capacity:" << s2.capacity() << endl;
//    s2 += " C++!";
//    cout << s2 << endl;
//    cout << "size:" << s2.size() << "    capacity:" << s2.capacity() << endl;
//
//    // bool empty() const;
//    // 检测字符串是否为空（即其长度是否为 0） 空返回1 非空返回0
//    string s3 = "";
//    string s4 = "haha";
//    bool ret1 = s3.empty();
//    bool ret2 = s4.empty();
//    cout << "ret1:" << ret1 << "   ret2:" << ret2 << endl;
//
//}

// 4.修改操作
// 4.1. 插入(拼接)方式：push_back  append  operator+= 
// 4.2. 正向和反向查找：find() + rfind()
// 4.3. 截取子串：substr()
// 4.4. 删除：erase

void TestS4() {
    string s0("HELLO C++");
    cout << "origin: " << s0 << endl;
    s0.push_back('!'); // 在s0字符串结尾尾插'!'
    cout << "push_back: " << s0 << endl;
    s0.append("I like C++!");// 结尾追加字符串"I like C++!"
    cout << "append: " << s0 << endl;
    s0 += "\nI like coding"; // 结尾添加字符串"\nI like coding"
    cout << "operator+=: " << s0 << endl;

    cout << s0.c_str() << endl;   // 以C语言的方式打印字符串

    // 获取string.cpp的后缀
    string str("string.cpp");
    size_t pos = str.find('.'); // 找.在str中的位置
    string str_back(str.substr(pos, str.size() - pos)); // 找[pos,str.size()]这个区间的字符串并返回
    cout << str_back << endl;

    string url("https://cplusplus.com/");
    size_t begin = url.find("://");
    if (begin == string::npos) { // npos是一个静态size_t类型全局变量 值为-1 可以理解为整个字符串的结尾，超级超级大
        cout << "无效域名" << endl;
        return;
    }

    begin += 3;
    string url_find(url.substr(begin, url.size() - begin - 1)); // -1去掉结尾'/'
    cout << url_find << endl;

    // 删除url的协议前缀
    pos = url.find("://");
    url.erase(0, pos + 3);
    cout << url << endl;


    // 反向查找 
    string s2("nihao");
    size_t start = s2.rfind('o');
    size_t last = s2.rfind('n');  
    cout << s2.substr(last, start + 1) << endl; // [last,start + 1)

}

int main() {
   // TestS1();
   // TestS2();
   // TestS3();
    TestS4();
    return 0;
}
