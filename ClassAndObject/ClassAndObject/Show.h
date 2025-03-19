
#include <iostream>
#include <assert.h>
using namespace std;


// 函数声明
class Stack {
public:
	// 成员函数
	void Init(int n = 4);
	void Push(int input);
	int Top();
	void Destroy();
private:
	// 成员变量
	int* _arr;
	size_t _top;
	size_t _capacity;
};