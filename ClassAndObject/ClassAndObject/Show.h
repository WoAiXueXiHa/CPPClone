
#include <iostream>
#include <assert.h>
using namespace std;


// ��������
class Stack {
public:
	// ��Ա����
	void Init(int n = 4);
	void Push(int input);
	int Top();
	void Destroy();
private:
	// ��Ա����
	int* _arr;
	size_t _top;
	size_t _capacity;
};