#include <iostream>
using namespace std;

namespace Vect 
{
	class myString 
	{
	public:
		typedef char* iterator;
		iterator begin();
		iterator end();

		// ����
		/*myString();
		myString(const char* str);*/
		// ��ȫȱʡ��������������ʱ����
		myString(const char* str = "");
		// ����
		~myString();
	private:
		char* _str;
		size_t _size;
		size_t _capacity;
	};
}