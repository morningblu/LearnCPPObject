/*
thisָ����������ؼ̳�
�����������������Ӷ���
���������ֻ�̳�һ�����࣬���������ĵ�ַ�ͻ������ĵ�ַ��ͬ
���������̳ж�����࣬��һ�������Ӷ���ĵ�ַ�����������ĵ�ַ��ͬ \
������Щ������Ӷ���ĵ�ַ������������СΪ����ǰ��������Ĵ�С
*/

#include <iostream>
#include <iostream>


class A
{
public:
	A()
	{
		printf("A��thisָ���ǣ�%p\n", this);
	}
	void functionA()
	{
		printf("functionA��thisָ����%p\n", this);
	}
	int a;
};

class B
{
public:
	B()
	{
		printf("B��thisָ���ǣ�%p\n", this);
	}
	void functionB()
	{
		printf("functionB��thisָ����%p\n", this);
	}
	int b;
};

class C : public A, public B
{
public:
	C()
	{
		printf("C��thisָ���ǣ�%p\n", this);
	}
	void functionC()
	{
		printf("functionC��thisָ����%p\n", this);
	}

	//void functionB() //����
	//{
	//	printf("functionC��thisָ����%p\n", this);
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