#include "myString.h"

namespace Vect
{
	void test1()
	{
		myString s1("hahaha");
		for (size_t i = 0; i < s1.size(); i++)
		{
			cout << s1[i];
		}
		const myString s2 = s1;
		cout << endl;
		for (size_t i = 0; i < s1.size(); i++)
		{
			cout << s2[i];
		}
	}

	void test_recursion()
	{
		string str1("HELLO, WORLD");
		// 1. Ë÷Òý±éÀú
		for (size_t i = 0; i < str1.size(); i++)
		{
			cout << str1[i] << " ";
		}
		cout << endl;

		// 2. µü´úÆ÷±éÀú
		auto it1 = str1.begin();
		while (it1 != str1.end())
		{
			*it1 += 1;
			cout << *it1 << " ";
			++it1;
		}
		cout << endl;

		// 3. ·¶Î§for±éÀú
		for (auto& e : str1)
		{
			cout << e << " ";
			++e;
		}
	}

	void test_insert()
	{
		myString s2 = "HELLO CPP";
		cout << s2.c_str() << endl;
		s2.insert(3, 'x');
		cout << s2.c_str() << endl;
		s2.insert(5, "yyyyyy");
		cout << s2.c_str() << endl;

		s2.earse(2, 2);
		cout << s2.c_str();

		myString s3 = ("qqq");
		cout << endl << s3.c_str() << endl;
		s3.push_back('x');
		cout << s3.c_str() << endl;
		s3.append("wwwwwwwwwwwwwwwwwww");
		cout << s3.c_str() << endl;
		s3.append("llllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllll");
		cout << s3.c_str() << endl;
	}
}

int main() 
{
	/*Vect::test1();*/
	/*Vect::test_recursion();*/
	Vect::test_insert();
	return 0;
}