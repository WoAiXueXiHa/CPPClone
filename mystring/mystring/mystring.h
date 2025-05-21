#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <assert.h>
using namespace std;

namespace Vect 
{
	class myString 
	{
	public:
		// 迭代器
		typedef char* iterator;
		typedef const char* const_iterator;
		iterator begin();
		iterator end();
		const_iterator begin() const;
		const_iterator end() const;

		// 构造
		// 给全缺省，声明给，定义时不能出现
		myString(const char* str = "");
		// C格式字符串 
		const char* c_str() const;

		// 索引操作
		size_t size();
		char& operator[](size_t pos);
		const char& operator[](size_t pos) const;

		// 析构
		~myString();

		// 插入删除操作
		void reserve(size_t n);
		void insert(size_t pos, char ch);
		void insert(size_t pos, const char* ch);
		void earse(size_t pos, size_t len);
		void push_back(char ch);
		void append(const char* str);
	private:
		char* _str;
		size_t _size;
		size_t _capacity;
		const static size_t npos;
	};
}