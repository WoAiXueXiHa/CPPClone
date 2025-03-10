#include<iostream>
using namespace std;

// 不同作用域 可以同名
//namespace bit1
//{
//	void Swap(int* pa, int* pb)
//	{
//		cout << "void Swap(int* pa, int* pb)" << endl;
//	}
//}
//
//namespace bit2
//{
//	void Swap(int* px, int* py)
//	{
//		cout << "void Swap(int* pa, int* pb)" << endl;
//	}
//}
//
//
//// 同一作用域 可以同名，满足重载规则
//void Swap(double* pa, double* pb)
//{
//	cout << "void Swap(double* pa, double* pb)" << endl;
//}
//
//using namespace bit1;
//using namespace bit2;
//// 他们两依旧是ok，不是重载关系
//
//int main()
//{
//	int a = 0, b = 1;
//	double c = 0.1, d = 1.1;
//	// 调用歧义
//	//Swap(&a, &b);
//
//	Swap(&c, &d);
//
//	return 0;
//}


void Swap(int* pa, int* pb)
{
	cout << "void Swap(int* pa, int* pb)" << endl;
}

// 同一作用域 可以同名，满足重载规则
void Swap(double* pa, double* pb)
{
	cout << "void Swap(double* pa, double* pb)" << endl;
}

//int f()
//{
//	cout << "f()" << endl;
//	return 0;
//}

// 下面两个构造函数重载
// f()但是这样调用存在歧义
void f()
{
	cout << "f()" << endl;
}

void f(int a = 10)
{
	cout << "f(int a)" << endl;
}

//void f(int a, char b)
//{
//	cout << "f(int a,char b)" << endl;
//}
//
//void f(char b, int a)
//{
//	cout << "f(char b, int a)" << endl;
//}

//int main()
//{
//	int a = 0, b = 1;
//	double c = 0.1, d = 1.1;
//	Swap(&a, &b);
//	Swap(&c, &d);
//
//	//f();
//	f(1);
//
//	f(1, 'a');
//	f('a', 1);
//
//	// f('a', 'b');
//
//	// 返回值不同，无法区分，返回值不是重载的条件
//	//f();
//	//int ret = f();
//
//	return 0;
//}

//#include"Stack.h"
//
//int main()
//{
//	struct Stack st;
//	StackInit(&st, 10);
//	f(1, 'a');
//	f('b', 10);
//	f(1, 1);
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//
//	// 引用：b是a的别名
//	int& b = a;
//	int& c = a;
//	int& d = b;
//	++d;
//
//	cout << &a << endl;
//	cout << &b << endl;
//	cout << &c << endl;
//	cout << &d << endl;
//
//
//	return 0;
//}

void Swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

typedef struct SeqList
{
	int* a;
	// ...
}SLT;

//void SeqPushBack(struct SeqList& sl, int x) 
void SeqPushBack(SLT& sl, int x)
{
}

typedef struct ListNode
{
	int val;
	struct ListNode* next;
}LTNode, * PNode;

// 21:17
// typedef struct ListNode* PNode;

//void ListPushBack(LTNode** phead, int x)
//void ListPushBack(LTNode*& phead, int x)
void ListPushBack(PNode& phead, int x)
{
	if (phead == NULL)
	{
		// phead = newnode;
	}
}

//int main()
//{
//	int x = 0, y = 1;
//	Swap(x, y);
//	cout << x << ":" << y << endl;
//
//	struct SeqList s;
//	SeqPushBack(s, 1);
//
//	int* p1 = &x;
//	// 指针变量取别名
//	int*& pr = p1;
//	pr = NULL;
//
//	LTNode* plist = NULL;
//	ListPushBack(plist, 1);
//	ListPushBack(plist, 2);
//	ListPushBack(plist, 2);
//
//
//	return 0;
//}

//int main()
//{
//	// int& a;
//
//	int x = 0;
//	int& y = x;
//	int z = 1;
//	// y变成z的别名呢？
//	// 还是z赋值给y
//	y = z;
//
//	return 0;
//}

int main()
{
	// 权限的平移
	int x = 0;
	int& y = x;

	// 权限的缩小，可以
	const int& z = x;
	//z++; // 不可以
	y++;

	// 权限的方法
	// m只读
	// n变成我的别名，n的权限是可读可写
	// 权限的放大，不可以
	const int m = 0;
	// int& n = m;

	const int& n = m;

	// 可以，不是权限的放大
	// m拷贝的给p，p的修改不影响m
	int p = m;

	// 权限的放大
	// p1可以修改 *p1不可以，const修饰是的*p1
	const int* p1 = &m;
	// p1++;
	// int* p2 = p1;
	const int* p2 = p1;

	// 权限的缩小
	int* p3 = &x;
	const int* p4 = p3;

	return 0;
}