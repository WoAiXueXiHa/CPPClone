#include <iostream>
using namespace std;


//int globalVar = 1;	// ���ݶ�
//static int staticGlobalVar = 1;  // ���ݶ�
//void Test()
//{
//	static int staticVar = 1;	//���ݶ�
//	int localVar = 1;			// ջ��
//	int num1[10] = { 1, 2, 3, 4 };// num1ջ��
//	char char2[] = "abcd";			// char2ջ��  *char2�洢{'a','b','c','d','\0'}���������׵�ַ ��ջ�� 
//	const char* pChar3 = "abcd";	// ջ�� *pChar3�洢�����ַ�"abcd\0"���׵�ַ �ڴ���������������
//	int* ptr1 = (int*)malloc(sizeof(int) * 4);// ptr1ջ��    *ptr1�洢��̬���ٵ��ڴ��׵�ַ ����
//	int* ptr2 = (int*)calloc(4, sizeof(int)); // ptr2ջ��	 *ptr2�洢��̬���ٵ��ڴ��׵�ַ ����
//	int* ptr3 = (int*)realloc(ptr2, sizeof(int) * 4);// ptr3 ջ��	 *ptr3�洢��̬���ٵ��ڴ��׵�ַ ����
//	free(ptr1);
//	free(ptr3);
//}


class ShowClass {
public:
	// ������Ĭ�Ϲ���
	ShowClass(int val = 0) {
		cout << "ShowClass(int val = 0)" << endl;
	}
	// �����Ĭ�Ϲ���
	ShowClass(int val1, int val2) {
		cout << "ShowClass(int val1 = 0, int val2 = 1)" << endl;
	}

	// ����
	~ShowClass() {
		cout << "~ShowClass()" << endl;
	}
private:
	int _val;
};
//
int main() {
//	// new/delete��malloc/free�����������ǰ�߻���ù�������������߲���
//	ShowClass* p1 = (ShowClass*)malloc(sizeof(ShowClass)); // ���ܳ�ʼ��
//	ShowClass* p2 = new ShowClass(1);// int������ʽת����ShowClass��
//	free(p1);
//	delete p2;
//
//	// ���������Ǽ�����һ����
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
	// ����Ƕ���������أ�
	ShowClass* p7 = new ShowClass[10]{ 1,2,3,{7,8} };

	delete[] p7;

	return 0;
}

//int main() {
//	// ��̬����һ��int���͵Ŀռ�
//	int* p1 = new int;
//
//	// ��̬����һ��int���͵Ŀռ䣬����ʼ��Ϊ0
//	int* p2 = new int(0);
//
//	// ��̬����ʮ��int���͵Ŀռ䣬�������ֳ�ʼ��
//	int* p3 = new int[10] {0, 1, 2, 3};
//
//	// �ڴ�����
//	delete p1;
//	delete p2;
//	delete[] p3;
//
//}

//int main() {
//
//}