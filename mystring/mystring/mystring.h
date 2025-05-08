#include <iostream>
using namespace std;

namespace myString 
{
	class myString {
	public:
		myString(const char* str);
		~myString();
	private:
		char* _str;
		size_t _size;
		size_t _capacity;
	};
}