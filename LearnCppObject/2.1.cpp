/*
2.1_�������ռ�õĿռ�
�������Ĵ�СΪ��1����Ϊ�е�ַ�������ܴ�һ���ֽڴ�С������
��Ա������ռ�ÿɶ�����ڴ�ռ�
��Ա����ռ���ڴ�ռ䣬�����ڶ���֮�У�ÿ��������һ��
*/
#include <iostream>

class A
{
public:
	void func1(); //��ĳ�Ա������ռ���������ڴ�ռ�
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