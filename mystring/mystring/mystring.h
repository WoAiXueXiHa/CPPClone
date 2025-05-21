#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <assert.h>
using namespace std;

namespace Vect 
{
	class myString 
	{
	public:
		// ������
		typedef char* iterator;
		typedef const char* const_iterator;
		iterator begin();
		iterator end();
		const_iterator begin() const;
		const_iterator end() const;

		// ����
		// ��ȫȱʡ��������������ʱ���ܳ���
		myString(const char* str = "");
		// C��ʽ�ַ��� 
		const char* c_str() const;

		// ��������
		size_t size();
		char& operator[](size_t pos);
		const char& operator[](size_t pos) const;

		// ����
		~myString();

		// ����ɾ������
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