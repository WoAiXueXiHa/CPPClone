#include<iostream>
//using std::cout;
//namespace MyLib {
//    void funcA() { cout << "Function A\n"; }
//}

typedef struct SeqList {
	int* arr;
	size_t szie;
	size_t capacity;
}List;

void HeadPush(List* ps, int x); // ��ȱʡ ��������
void ListInit(List* ps);