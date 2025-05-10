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

		// 构造
		/*myString();
		myString(const char* str);*/
		// 给全缺省，声明给，定义时不用
		myString(const char* str = "");
		// 析构
		~myString();
	private:
		char* _str;
		size_t _size;
		size_t _capacity;
	};
}