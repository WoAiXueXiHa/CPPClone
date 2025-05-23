#include "mystring.h"

namespace Vect 
{

	void myString::clear()
	{
		_str[0] = '\0';
		_size = 0;
	}

	istream& operator>> (istream& is, myString& str)
	{
		str.clear();
		char ch = is.get();
		while (ch != '\n' && ch != ' ')
		{
			str += ch;
			ch = is.get();
		}
		return is;
	}
	ostream& operator<< (ostream& os, const myString& str)
	{
		for (size_t i = 0; i < str.size(); i++)
		{
			os << str[i];
		}

		return os;
	}


	const size_t myString::npos = -1;

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
	size_t myString::size() const
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
	size_t myString::find(const char* sub, size_t pos)
	{
		// 在一个字符串中查找子字符串的第一次出现位置 第一个参数：要搜索的主字符串， 第二个参数：要搜索的子字符串
		const char* tmp = strstr(_str + pos, sub);
		if (tmp == nullptr)
		{
			return npos;
		}
		else
		{
			return tmp - _str;
		}
	}
	
	// 从pos位置开始找len长度的子串
	myString myString::substr(size_t pos, size_t len) 
	{
		assert(pos <= _size);
		// 要取得子串长度大于母串，有多少取多少
		if (len - pos >= _size)
		{
			myString ret(_str + pos);
			return ret;
		}
		else
		{
			myString ret;
			ret.reserve(len);
			for (size_t i = 0; i < len; i++)
			{
				ret += _str[pos + i];
			}
			return ret;
		}
	
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
	
	// s1.operator(s2)
	bool myString::operator>(const myString& str)const
	{
		return strcmp(_str, str._str) > 0;
	}
	bool myString::operator>=(const myString& str)const
	{
		return *this > str|| *this == str;
	}
	bool myString:: operator< (const myString& str)const
	{
		return !(*this >= str);
	}
	bool myString::operator<=(const myString& str)const
	{
		return (*this < str);
	}
	bool myString::operator==(const myString& str)const
	{
		return strcmp(_str, str._str) == 0;
	}
}
	
