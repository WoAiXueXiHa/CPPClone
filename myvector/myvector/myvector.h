#include <iostream>
#include <assert.h>
#include <algorithm>

using namespace std;

namespace Vect
{
	template <class T>
	class myvector
	{
	public:
		// 实现迭代器
		typedef T* iterator;
		typedef const T* const_iterator;

		const iterator begin() const
		{
			return _start;
		}

		const iterator end() const
		{
			return _finish;
		}
		const const_iterator begin() const
		{
			return _start;
		}
		const const_iterator end() const
		{
			return _finish;
		}
	
	private:
		// 利用迭代器实现数据操作
		iterator _start;
		iterator _finish;
		iterator _end_of_storage;
	};


}