#include "mystring.h"

namespace myString {
	// ����
	myString::myString(const char* str)
		:_size(strlen(str))
	{
		// Ĭ�ϳ�ʼ���ӿ��ַ�����������\0��������Ҫ��һ����\0�Ŀռ�
		_str = new char[1] {""}; 
		_capacity = _size;
		// ��str�����ݿ�����_str��
		strcpy_s(_str,_size,str);
	}

	// ����
	myString::~myString() {
		_str = nullptr;
		_size = _capacity = 0;
	}

}