

#include<iostream>

class X
{
public:
	int mI;
	X(const X& x)
	{
		mI = x.mI;
		std::cout << "拷贝函数被调用" << std::endl;
	}

	X()
	{
		mI = 0;
		std::cout << "构造函数被调用" << std::endl;
	}
	~X()
	{
		std::cout << "析构函数被调用" << std::endl;

	}

	void FuncTest()
	{
		std::cout << "test" << std::endl;
	}
};


//void fun(X temp)
//{
//	return;
//}

X fun()
{
	X x0;
	return x0; //生成临时对象，把x0拷贝构造给临时对象
}

int main()
{
	//程序转化语义
	//我们写的代码，编译器会对代码进行拆分，拆分成编译器更容易理解和实现的代码

	//编译器是如何解析这些代码的
	//两个视角看问题：程序员与编译器

	//1.定义时初始化对象
	//X X0;
	//X0.mI = 15;
	//X X1 = X0; //定义时初始化
	//X x2(X0);
	//X x3 =(X0);

	////切换到编译器角度，编译器会拆分成两个步骤
	////eg: X x3 =(X0);
	//X x3; //定义一个对象，不会调用x的构造函数
	//x3.X::X(X0); //直接调用对象的拷贝构造函数

	//2.参数的初始化
	//X x0;
	//fun(x0);

	//3.返回值初始化
	//X x0 = fun();

	//编译器对上诉代码的理解
	//X x0;//不会调用X的构造函数
	//fun(x0);

	//void fun(X& x)
	//{
	//	X x0; //不会调用X的构造函数
	//	X.X::X(x0);
	//	return;
	//}

	//切换回程序员视角
	//fun().FuncTest();
	
	//换回编译器视角
	//X x0;
	//(func(x0), x0).FuncTest();

	//程序员视角
	//X (*pf)(); //定义函数指针
	//pf = fun;
	//pf().FuncTest();

	//编译器视角
	//X x0;
	//void (*pf)(x0);
	//pf = fun;
	//pf(x0);
	//x0.FuncTest();

	return 0;
}