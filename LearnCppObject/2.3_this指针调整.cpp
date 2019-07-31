/*
this指针调整：多重继承
派生类对象包含基类子对象
如果派生类只继承一个基类，派生类对象的地址和基类对象的地址相同
如果派生类继承多个基类，第一个基类子对象的地址和派生类对象的地址相同 \
后续这些基类的子对象的地址和派生类对象大小为排在前面基类对象的大小
*/

#include <iostream>
#include <iostream>


class A
{
public:
	A()
	{
		printf("A的this指针是：%p\n", this);
	}
	void functionA()
	{
		printf("functionA的this指针是%p\n", this);
	}
	int a;
};

class B
{
public:
	B()
	{
		printf("B的this指针是：%p\n", this);
	}
	void functionB()
	{
		printf("functionB的this指针是%p\n", this);
	}
	int b;
};

class C : public A, public B
{
public:
	C()
	{
		printf("C的this指针是：%p\n", this);
	}
	void functionC()
	{
		printf("functionC的this指针是%p\n", this);
	}

	//void functionB() //覆盖
	//{
	//	printf("functionC的this指针是%p\n", this);
	//}

	int c;
};

//int main()
//{
//	std::cout << sizeof(A) << std::endl;
//	std::cout << sizeof(B) << std::endl;
//	std::cout << sizeof(C) << std::endl;
//
//	C myC;
//	myC.functionA();
//	myC.functionB();
//	myC.functionC();
//	
//	return 0;
//}