#include <iostream>
using namespace std;
//
//// ��ǰдһ����������
//// �޶�int����
//void Swap(int& left, int& right)
//{
//	int tmp = left;
//	left = right;
//	right = tmp;
//}
//// �޶�double����
//void Swap(double& left, double& right)
//{
//	double tmp = left;
//	left = right;
//	right = tmp;
//}
//// �޶�intָ������
//void Swap(int* left, int* right)
//{
//	int tmp = *left;
//	*left = *right;
//	*right = tmp;
//}
//// ����ӷ�ף��߼���һ����ֻ�����Ͳ�һ��������ģ����������ظ�д�߼�һ���Ĵ���
//
//// T�������κ�����
//template <typename T>
//void Swap(T& left, T& right)
//{
//	T tmp = left;
//	left = right;
//	right = tmp;
//}
//
//int main()
//{
//	int a = 4, b = 6;
//	Swap(a, b);
//
//	double x = 4.0, y = 6.8;
//	Swap(x, y);
//
//	int* pa = &a, * pb = &b;
//	Swap(pa, pb);
//
//}

//// дһ���ӷ�ģ�庯��
//template <typename T>
//T Add(const T& a,const T& b)
//{
//	return a + b;
//}
//int main()
//{
//	int a = 7, b = 15;
//	double x = 10.2, y = 1.3;
//	/*Add(a, y);
//	Add(x, b);*/
//	/*
//	����䲻��ͨ�����룬��Ϊ�ڱ����ڼ䣬��������������ʵ����ʱ����Ҫ������ʵ������
//	ͨ��ʵ��a��T����Ϊint��ͨ��ʵ�ν�T����Ϊdouble���ͣ���ģ������б���ֻ��һ��T��
//	�������޷�ȷ���˴����׸ý�Tȷ��Ϊint ���� double���Ͷ�����
//	*/
//	/*ע�⣺��ģ���У�������һ�㲻���������ת����������Ϊһ��ת�������⣬����������Ҫ���ڹ�*/
//	// �����ִ���ʽ��
//	// 1. �û�ǿ������ת�� 2.�û���ʽʵ����
//	// 1.�û�ǿ������ת��
//	Add(a, (int)y);
//	Add(x, (double)b);
//	cout << Add(a, (int)y) << endl << Add(x, (double)b) << endl;
//
//	// 2.��ʽʵ����
//	Add<int>(a, y);
//	Add<double>(x, b);
//	return 0;
//}
//

//// ר�Ŵ���int�ļӷ�����
//int Add(int left, int right)
//{
//	cout << "int Add(int left, int right)" << endl;
//	return left + right;
//}
//// ͨ�üӷ�����1
//template<class T>
//T Add(T left, T right)
//{
//	cout << "T Add(const T& left, const T& right)" << endl;
//	return left + right;
//}
//// ͨ�üӷ�����2
//template<class T1, class T2>
//auto Add(T1 left, T2 right)
//{
//	cout << "auto Add(T1 left, T2 right)" << endl;
//	return left + right;
//}
//void Test1()
//{
//	Add(1, 2);		  // ���ģ�庯��ƥ�䣬����������Ҫ�ػ�
//	Add<int>(1, 2);   // ���ñ������ػ���Add�汾
//}
//void Test2()
//{
//	Add(1, 2);		// ��Ǻ���ģ��������ȫƥ�䣬����Ҫ����ģ��ʵ����
//	Add(1, 2.0);    // ģ�庯���������ɸ���ƥ��İ汾������������ʵ�����ɸ���ƥ���Add����
//}
//int main()
//{
//	Test1();
//	Test2();
//	return 0;
//}

// ��ģ��

// ��ʽ
/*template<class T1, class T2, ..., class Tn>
class ��ģ����
{
	// ���ڳ�Ա����
};*/

template<typename T>
class Stack
{
public:
    Stack(size_t capacity = 4)
    {
        _array = new T[capacity];
        _capacity = capacity;
        _size = 0;
    }
    void Push(const T& data);
private:
    T* _array;
    size_t _capacity;
    size_t _size;
};
// ģ�治���������Ͷ�����뵽�����ļ�.h ��.cpp��������Ӵ���
template<class T>
void Stack<T>::Push(const T& data)
{
    // ����
    _array[_size] = data;
    ++_size;
}
int main()
{
    // ʵ����
    Stack<int> st1;    // int
    Stack<double> st2; // double
    return 0;
}
