#include "mystring.h"

namespace Vect 
{
	//// �޲ι���
	//myString::myString() 
	//{
	//	_str = new char[1] {""};
	//	_size = 0;
	//	_capacity = 0;
	//}
	//// �вι���
	//myString::myString(const char* str)
	//	:_size(strlen(str))
	//{
	//	// Ĭ�ϳ�ʼ���ӿ��ַ�����������\0��������Ҫ��һ����\0�Ŀռ�
	//	_str = new char[1] {""}; 
	//	_capacity = _size;
	//	// ��str�����ݿ�����_str��
	//	strcpy_s(_str,_size,str);
	//}
	// ���߿��Խ�ϳ�ȫȱʡ
	myString::myString(const char* str)
		:_size(strlen(str))
	{
		_str = new char[_size + 1];
		_capacity = _size;
		strcpy_s(_str, _size, str);
	}

	myString::iterator begin() {

	}
	// ����
	myString::~myString() 
	{
		_str = nullptr;
		_size = _capacity = 0;
	}

}