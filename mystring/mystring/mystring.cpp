#include "mystring.h"

namespace myString {
	// 构造
	myString::myString(const char* str)
		:_size(strlen(str))
	{
		// 默认初始化从空字符串，但是有\0，所以需要给一个存\0的空间
		_str = new char[1] {""}; 
		_capacity = _size;
		// 将str的内容拷贝到_str中
		strcpy_s(_str,_size,str);
	}

	// 析构
	myString::~myString() {
		_str = nullptr;
		_size = _capacity = 0;
	}

}