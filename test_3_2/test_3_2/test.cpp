#include<iostream>
using namespace std;

// ��ͬ������ ����ͬ��
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
//// ͬһ������ ����ͬ�����������ع���
//void Swap(double* pa, double* pb)
//{
//	cout << "void Swap(double* pa, double* pb)" << endl;
//}
//
//using namespace bit1;
//using namespace bit2;
//// ������������ok���������ع�ϵ
//
//int main()
//{
//	int a = 0, b = 1;
//	double c = 0.1, d = 1.1;
//	// ��������
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

// ͬһ������ ����ͬ�����������ع���
void Swap(double* pa, double* pb)
{
	cout << "void Swap(double* pa, double* pb)" << endl;
}

//int f()
//{
//	cout << "f()" << endl;
//	return 0;
//}

// �����������캯������
// f()�����������ô�������
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
//	// ����ֵ��ͬ���޷����֣�����ֵ�������ص�����
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
//	// ���ã�b��a�ı���
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
//	// ָ�����ȡ����
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
//	// y���z�ı����أ�
//	// ����z��ֵ��y
//	y = z;
//
//	return 0;
//}

int main()
{
	// Ȩ�޵�ƽ��
	int x = 0;
	int& y = x;

	// Ȩ�޵���С������
	const int& z = x;
	//z++; // ������
	y++;

	// Ȩ�޵ķ���
	// mֻ��
	// n����ҵı�����n��Ȩ���ǿɶ���д
	// Ȩ�޵ķŴ󣬲�����
	const int m = 0;
	// int& n = m;

	const int& n = m;

	// ���ԣ�����Ȩ�޵ķŴ�
	// m�����ĸ�p��p���޸Ĳ�Ӱ��m
	int p = m;

	// Ȩ�޵ķŴ�
	// p1�����޸� *p1�����ԣ�const�����ǵ�*p1
	const int* p1 = &m;
	// p1++;
	// int* p2 = p1;
	const int* p2 = p1;

	// Ȩ�޵���С
	int* p3 = &x;
	const int* p4 = p3;

	return 0;
}