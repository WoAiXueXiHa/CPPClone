#include <iostream>
using namespace std;


//int globalVar = 1;	// 数据段
//static int staticGlobalVar = 1;  // 数据段
//void Test()
//{
//	static int staticVar = 1;	//数据段
//	int localVar = 1;			// 栈区
//	int num1[10] = { 1, 2, 3, 4 };// num1栈区
//	char char2[] = "abcd";			// char2栈区  *char2存储{'a','b','c','d','\0'}这个数组的首地址 在栈区 
//	const char* pChar3 = "abcd";	// 栈区 *pChar3存储常量字符"abcd\0"的首地址 在代码区（常量区）
//	int* ptr1 = (int*)malloc(sizeof(int) * 4);// ptr1栈区    *ptr1存储动态开辟的内存首地址 堆区
//	int* ptr2 = (int*)calloc(4, sizeof(int)); // ptr2栈区	 *ptr2存储动态开辟的内存首地址 堆区
//	int* ptr3 = (int*)realloc(ptr2, sizeof(int) * 4);// ptr3 栈区	 *ptr3存储动态开辟的内存首地址 堆区
//	free(ptr1);
//	free(ptr3);
//}


class ShowClass {
public:
	// 单参数默认构造
	ShowClass(int val = 0) {
		cout << "ShowClass(int val = 0)" << endl;
	}
	// 多参数默认构造
	ShowClass(int val1, int val2) {
		cout << "ShowClass(int val1 = 0, int val2 = 1)" << endl;
	}

	// 析构
	~ShowClass() {
		cout << "~ShowClass()" << endl;
	}
private:
	int _val;
};
//
int main() {
//	// new/delete和malloc/free最大的区别就是前者会调用构造和析构，后者不会
//	ShowClass* p1 = (ShowClass*)malloc(sizeof(ShowClass)); // 不能初始化
//	ShowClass* p2 = new ShowClass(1);// int类型隐式转换成ShowClass类
//	free(p1);
//	delete p2;
//
//	// 内置类型是几乎是一样的
//	int* p3 = (int*)malloc(sizeof(int)); 
//	int* p4 = new int;
//	free(p3);
//	delete p4;
//
//	ShowClass* p5 = (ShowClass*)malloc(sizeof(ShowClass) * 10);
	ShowClass* p6 = new ShowClass[10];
//	free(p5);
	delete[] p6;
//
	// 如果是多参数构造呢？
	ShowClass* p7 = new ShowClass[10]{ 1,2,3,{7,8} };

	delete[] p7;

	return 0;
}

//int main() {
//	// 动态申请一个int类型的空间
//	int* p1 = new int;
//
//	// 动态申请一个int类型的空间，并初始化为0
//	int* p2 = new int(0);
//
//	// 动态申请十个int类型的空间，并给部分初始化
//	int* p3 = new int[10] {0, 1, 2, 3};
//
//	// 内存清理
//	delete p1;
//	delete p2;
//	delete[] p3;
//
//}

//int main() {
//
//}