/*
2.1_类对象所占用的空间
空类对象的大小为：1，因为有地址，至少能存一个字节大小的数据
成员函数不占用可对象的内存空间
成员变量占用内存空间，包含在对象之中，每个对象有一份
*/
#include <iostream>

class A
{
public:
	void func1(); //类的成员函数不占用类对象的内存空间
	void func2();
	void func3();

	//char ab;
	int ab;
};

int main()
{
	A a;
	std::cout << sizeof(a) << std::endl;

	//a.ab = 'c';
	a.ab = 6;
	return 0;
}