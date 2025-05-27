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
		// ʵ�ֵ�����
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
		// ���õ�����ʵ�����ݲ���
		iterator _start;
		iterator _finish;
		iterator _end_of_storage;
	};


}