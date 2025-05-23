#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <assert.h>
using namespace std;

namespace Vect 
{
	class myString 
	{
	public:

		friend istream& operator>> (istream& is, myString& str);
		friend ostream& operator<< (ostream& os, const myString& str);

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
		size_t size() const;
		char& operator[](size_t pos);
		const char& operator[](size_t pos) const;

		// ����
		~myString();

		// ��posλ�ÿ�ʼ��ѯָ���ַ���ָ���ַ�����λ��
		size_t find(char ch, size_t pos = 0);
		size_t find(const char* sub, size_t pos = 0);
		// ��posλ�ÿ�ʼ��len���ȵ��Ӵ�
		myString substr(size_t pos, size_t len);

		// ����ɾ������
		void reserve(size_t n);
		void insert(size_t pos, char ch);
		void insert(size_t pos, const char* ch);
		void earse(size_t pos, size_t len);
		void push_back(char ch);
		void append(const char* str);

		
		myString& operator+=(char ch);
		myString& operator+=(const char* str);

		bool operator>(const myString& str)const;
		bool operator>=(const myString& str)const;
		bool operator<(const myString& str)const;
		bool operator<=(const myString& str)const;
		bool operator==(const myString& str)const;

		void clear();
	private:
		char* _str;
		size_t _size;
		size_t _capacity;
		const static size_t npos;
	};

	istream& operator>> (istream& is, myString& str);
	ostream& operator<< (ostream& os, const myString& str);
}