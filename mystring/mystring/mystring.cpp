#include "mystring.h"

namespace Vect 
{
	const static size_t npos = -1;

	// C格式字符串
	const char* myString::c_str() const
	{
		return _str;
	}
	// 迭代器
	myString::iterator myString::begin()
	{
		return _str;
	}
	myString::iterator myString::end()
	{
		return _str + _size;
	}

	// 构造
	myString::myString(const char* str)
		:_size(strlen(str))
	{
		_str = new char[_size + 1];
		_capacity = _size;
		strcpy(_str, str);
	}
	// 析构
	myString::~myString()
	{
		_str = nullptr;
		_size = _capacity = 0;
	}


	// 索引操作
	size_t myString::size()
	{
		return _size;
	}
	char& myString::operator[](size_t pos)
	{
		assert(pos <= _size);
		return _str[pos];
	}
	const char& myString::operator[](size_t pos) const
	{
		assert(pos <= _size);
		return _str[pos];
	}

	// 从pos位置开始查询指定字符，指定字符串的位置
	size_t myString::find(char ch, size_t pos)
	{
		for (size_t i = pos; i < _size; i++)
		{
			if (_str[i] == ch) return i;
		}
		return npos;
	}
	size_t myString::find(const char* str, size_t pos)
	{

	}
	

	// 插入删除操作
	// 首先要判断容量够不够 我们先预留空间
	void  myString::reserve(size_t n)
	{
		if (n > _capacity)
		{
			char* tmp = new char[n + 1];
			strcpy( tmp, _str);
			delete _str;

			_str = tmp;
			_capacity = n;
		}
	}
	void myString::insert(size_t pos, char ch)
	{
		assert(pos <= _size);
		// 先检查容量
		if (_size == _capacity)
		{
			size_t newCapacity = _capacity == 0 ? 4 : 2 * _capacity;
			reserve(newCapacity);
		}
		// 挪动数据
		size_t end = _size + 1;
		while (end > pos)
		{
			_str[end] = _str[end - 1];
			--end;
		}
		++_size;
		_str[pos] = ch;
	}

	void myString::insert(size_t pos, const char* str)
	{
		assert(pos <= _size);
		// 先检查容量
		size_t len = strlen(str);
		if (_size + len >= _capacity)
		{
			reserve(_capacity + len + 1);
		}

		size_t end = _size + len;
		// 挪动数据
		while (end > pos)
		{
			_str[end] = _str[end - len];
			--end;
		}
		memcpy(_str + pos, str, len);
		_size += len;		
	}
	// 从pos位置开始，往后删除len个字符
	void myString::earse(size_t pos, size_t len)
	{
		// len >= 前面字符数，有多少删多少
		if (len >= _size - pos)
		{
			_str[pos] = '\0';
			_size = pos;
		}
		else
		{
			strcpy(_str + pos, _str + pos + len);
			_size -= len;
		}
	}

	void myString::push_back(char ch)
	{
		if (_size == _capacity)
		{
			size_t newCapacity = _capacity == 0 ? 4 : 2 * _capacity;
			reserve(newCapacity);
		}

		//// 传统写法
		//_str[_size] = ch;
		//_str[_size + 1] = '\0';
		//++_size;

		// 复用insert
		insert(_size, ch);


	}
	void myString::append(const char* str)
	{
		// 先检查容量
		size_t len = strlen(str);
		if (_size + len >= _capacity)
		{
			reserve(_capacity + len + 1);
		}
		//// 传统写法
		//memcpy(_str + _size, str, len);
		//_size += len;

		// 复用insert
		insert(_size, str);
	}

	myString& myString::operator+=(char ch)
	{
		push_back(ch);
		return *this;
	}
	myString& myString::operator+=(const char* str)
	{
		append(str);;
		return *this;
	}
}
	
