#include <iostream>
#include <string>
using namespace std;

//// C++11 auto���
//
//int func1() {
//	return 24;
//}
//
//// 1.���������� 
////void func2(auto a){}
//
//// 2.����������ֵ������ʹ�ã�����Ч��
//auto func3(){}
//
//int main() {
//	int a = 10;
//	auto b = a;
//	auto c = 'a';
//	auto d = func1();
//	//// ���뱨��C3531 ���Ͱ�����auto���ķ��ű�����г�ʼֵ�趨��
//	//auto e;
//
//	// typeid���ڴ�ӡ������
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;
//	cout << typeid(d).name() << endl;
//
//	int x = 20;
//	// 3.����ָ����� auto*��autoû������
//	auto* px1 = &x;
//	auto px2 = &x;
//
//	// 4.�������ñ��� �����&
//	auto& m = x;
//
//	cout << typeid(px1).name() << endl;
//	cout << typeid(px2).name() << endl;
//	cout << typeid(m).name() << endl;
//
//	auto aa = 0, bb = 1;
//	// 5. �������� �б������Ҫһ��
//	// ���뱨��C3538 ���������б��У�auto����ʼ���Ƶ�Ϊͬһ����
//	// auto cc = 2, dd = 3.0;
//
//	// 6.auto������������
//	// ���뱨��C3318 ���鲻�ܾ������а���auto��Ԫ������
//	// auto arr[10] = { 0 };
//	return 0;
//}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


//// ��Χfor 
//int main() {
//	int arr[5] = { 0,1,2,3,4 };
//	// C++ 98
//	for (size_t i = 0; i < sizeof(arr) / sizeof(int); i++)
//	{
//		cout << arr[i] << " " ;
//	}
//	cout << endl;
//	// �޸�����
//	for (size_t i = 0; i < sizeof(arr) / sizeof(int); i++)
//	{
//		cout << arr[i] * 2 << " ";
//	}
//
//	// C++ 11
//	cout << endl;
//	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
//	cout << endl;
//	for (auto& e : arr) cout << e << " ";
//	for (auto& e : arr) e *= 2;
//	cout << endl;
//	for (auto& e : arr) cout << e << " ";
//
//	cout << endl;
//
//	string str("hello, world!");
//	for (auto str : str) cout << str;
//
//	return 0;
//
//}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// string��ĳ��ýӿ�

// //1. ��������֮��
//void TestS1() {
//     ��ʼ���ַ������� s0
//    string s0("Initing string.");
//
//     ����һ�����ַ������� s1
//    string s1;
//
//     ����һ��string�Ŀ��� s11
//    string s11();
//
//     ʹ�� s0 �������죬s2 ���ݺ� s0 ��ȫһ��
//    string s2(s0);
//
//     �� s0 ��λ�� 5 ��ʼ������һ���µ��ַ��� s3�������� s0 ������ 5 ��ʼ��ĩβ���ַ���
//    string s3(s0, 5);
//
//    cout << s0 << endl;
//    cout << s1 << endl;
//     ��һ���� cout<<s11�ᱨ��
//    cout << s11 << endl;
//    cout << s2 << endl;
//    cout << s3 << endl;
//}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


//// 2.��������
//void TestS2() {
//    string s("hello world");
//    // 1. �±�+[]
//    cout << "operator[]:";
//    for (size_t i = 0; i < s.size(); i++)
//    {
//        cout << s[i];
//    }
//    cout << endl;
//
//    // 2.������begin+end
//    // iterator begin();const_iterator begin() const; ���ص�����ָ����ַ����ַ��ĵ�һ��λ��
//    // iterator end();const_iterator end() const;     ���ص�����ָ����ַ����ַ����λ�õ���һ��λ��
//    // ��������Χ[begin,end+1)
//    cout << "������begin+end :";
//
//    string::iterator it = s.begin(); // ���Խ�it����ָ�룬��������ָ��
//    while (it != s.end()) {
//        cout << *it;
//        ++it;
//    }
//    cout << endl;
//
//    // 3. ���������rbegin+rend
//    // string::reverse_iterator rit = s.rbegin();
//    // C++11������auto�Զ�ʶ������
//    cout << "���������rbegin+rend :";
//    auto rit = s.rbegin();
//    while (rit != s.rend()) {
//        cout << *rit;
//        ++rit;
//    }
//    cout << endl;
//
//    // 4. ��Χfor
//    cout << "��Χfor: ";
//    for (auto ch : s) cout << ch;
//}
//

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//// 3.��������
//void TestS3() {
//    // size length capacity resize clear
//    string s0("hello, cs!");
//    cout << s0.size() << endl;// ����һ���ַ����ĳ��� ��λ�ֽ�
//    cout << s0.length() << endl;// ����һ���ַ����ĳ��� ��λ�ֽ�
//    cout << s0.capacity() << endl; // ���ص�ǰvector��������ڴ�ռ� ��λ�ֽ�
//
//    s0.clear();// ��s0����Ч�ַ���գ�ע�⣺���ı�ײ�ռ��С�����������ַ�
//    cout << s0 << endl;
//    cout <<"size:" << s0.size() << "     capacity:"<< s0.capacity()<< endl;
//
//    // ��s1����Ч�ַ����ӵ�12��ʣ�µ����ַ�'a'���
//    string s1("I like code to C");
//    s1.resize(18, '++');
//    cout << s1 << endl;
//    cout << "size:" << s1.size() << "    capacity:" << s1.capacity() << endl;
//    // ��s1��Ч�ַ����ӵ�20��ʣ�µ���'\0'��� "I like code to C++\0\0"
//    s1.resize(20);
//    cout << s1 << endl;
//    cout << "size:" << s1.size() << "    capacity:" << s1.capacity() << endl;
//
//    // ��s1��Ч�ַ����ٵ�5
//    s1.resize(5);
//    cout << s1 << endl;
//    cout << "size:" << s1.size() << "    capacity:" << s1.capacity()<< endl;
//   
//    // void reserve (size_t n = 0);
//    // Ϊs2Ԥ������11���ַ��Ŀռ䣬��һ��Ԥ�����ڴ�ķ�ʽ
//    // ����ζ��������ַ�ʱ��������ַ�������������Ԥ���Ŀռ䣬�Ͳ���Ҫ���·����ڴ棬�Ӷ����������ܿ���
//    // ��� n ���ڵ�ǰ�ַ������������ú�����ʹ���������������ӵ� n ���ַ�������ࣩ
//    string s2("hello");
//    cout << "size:" << s2.size() << "    capacity:" << s2.capacity() << endl;
//    s2.reserve(16);
//    cout << "size:" << s2.size() << "    capacity:" << s2.capacity() << endl;
//    s2 += " C++!";
//    cout << s2 << endl;
//    cout << "size:" << s2.size() << "    capacity:" << s2.capacity() << endl;
//
//    // bool empty() const;
//    // ����ַ����Ƿ�Ϊ�գ����䳤���Ƿ�Ϊ 0�� �շ���1 �ǿշ���0
//    string s3 = "";
//    string s4 = "haha";
//    bool ret1 = s3.empty();
//    bool ret2 = s4.empty();
//    cout << "ret1:" << ret1 << "   ret2:" << ret2 << endl;
//
//}

// 4.�޸Ĳ���
// 4.1. ����(ƴ��)��ʽ��push_back  append  operator+= 
// 4.2. ����ͷ�����ң�find() + rfind()
// 4.3. ��ȡ�Ӵ���substr()
// 4.4. ɾ����erase

void TestS4() {
    string s0("HELLO C++");
    cout << "origin: " << s0 << endl;
    s0.push_back('!'); // ��s0�ַ�����ββ��'!'
    cout << "push_back: " << s0 << endl;
    s0.append("I like C++!");// ��β׷���ַ���"I like C++!"
    cout << "append: " << s0 << endl;
    s0 += "\nI like coding"; // ��β����ַ���"\nI like coding"
    cout << "operator+=: " << s0 << endl;

    cout << s0.c_str() << endl;   // ��C���Եķ�ʽ��ӡ�ַ���

    // ��ȡstring.cpp�ĺ�׺
    string str("string.cpp");
    size_t pos = str.find('.'); // ��.��str�е�λ��
    string str_back(str.substr(pos, str.size() - pos)); // ��[pos,str.size()]���������ַ���������
    cout << str_back << endl;

    string url("https://cplusplus.com/");
    size_t begin = url.find("://");
    if (begin == string::npos) { // npos��һ����̬size_t����ȫ�ֱ��� ֵΪ-1 �������Ϊ�����ַ����Ľ�β������������
        cout << "��Ч����" << endl;
        return;
    }

    begin += 3;
    string url_find(url.substr(begin, url.size() - begin - 1)); // -1ȥ����β'/'
    cout << url_find << endl;

    // ɾ��url��Э��ǰ׺
    pos = url.find("://");
    url.erase(0, pos + 3);
    cout << url << endl;


    // ������� 
    string s2("nihao");
    size_t start = s2.rfind('o');
    size_t last = s2.rfind('n');  
    cout << s2.substr(last, start + 1) << endl; // [last,start + 1)

}

int main() {
   // TestS1();
   // TestS2();
   // TestS3();
    TestS4();
    return 0;
}
