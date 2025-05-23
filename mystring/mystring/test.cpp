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

	void test_find()
	{
		myString s0("qweasdzxc");
		cout << s0.c_str() << endl;
		cout << s0.find('a', 2) << endl;
		cout << s0.find('a', 10)<< endl;
		cout << s0.find("asd", 0) << endl;
		cout << s0.find("asd", 10) << endl;

		myString s1 = s0.substr(0, 123);
		cout << s1.c_str() << endl;


		myString s2 =s0.substr(3, 123);
		cout << s2.c_str() << endl;


		myString s3 = s0.substr(1, 2);
		cout << s3.c_str() << endl;
	}

	void test_cmopare()
	{
		myString s0 = "hello,hahahahah";
		bool ret1 = s0 < "abc";
		bool ret2 = s0 <= "abc";
		bool ret3 = s0 == "abc";
		bool ret4 = s0 > "abc";
		bool ret5 = s0 >= "abc";
		cout << ret1 << " " << ret2 << " "<< ret3 << " "<<ret4 << " " <<ret5;

	}
}

int main() 
{
	/*Vect::test1();*/
	/*Vect::test_recursion();*/
	/*Vect::test_insert();*/
	/*Vect::test_find();*/

	Vect::test_cmopare();
	return 0;
}