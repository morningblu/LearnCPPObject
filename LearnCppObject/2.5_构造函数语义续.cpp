

//#include <iostream>

//class MBTXBASE
//{
//public:
//	MBTXBASE()
//	{
//		std::cout << "Base" << std::endl;
//	}
//};

//class MBTX : public MBTXBASE
//{
//public:
//	int mA;
//	int mB;
//	void func()
//	{
//		std::cout << "ddff" << std::endl;
//	}
//};

/***********************/

//class MBTX
//{
//public:
//	int mA;
//	int mB;
//	void func()
//	{
//		std::cout << "ddff" << std::endl;
//	}
//
//	virtual void MyVirtual()
//	{
//		std::cout << "MyVirtual" << std::endl;
//	}
//};

/*************/
//class MBTX : public MBTXBASE
//{
//public:
//	int mA;
//	int mB;
//
//	MBTX()
//	{
//		mA = 15; //打断点，debug->窗口->反汇编可以看里面的东西
//	}
//
//	void func()
//	{
//		std::cout << "ddff" << std::endl;
//	}
//
//	virtual void MyVirtual()
//	{
//		std::cout << "MyVirtual" << std::endl;
//	}
//};

/*************************/

//class BaseBase
//{
//public:
//
//};
//
//class Base1 : virtual public BaseBase
//{
//public:
//
//};
//
//class Base2 : virtual public BaseBase
//{
//public:
//
//};
//
//class MBTX : public Base1, public Base2
//{
//public:
//
//};
//
//
//int main()
//{
//	//父类带缺省构造函数，子类没有任何构造函数，因为父类的构造函数要被调用，编译器会为子类合成默认构造函数
//	//在其中安插代码，调用父类构造函数
//
//	//MBTX mbtx;
//
//	//如果一个类含有虚函数，但是该类没有任何构造函数时
//	//因为虚函数的存在，编译器会为该类生成一个虚函数表vftable
//	//系统合成构造函数插入代码，把类的虚函数表的地址赋给该类对象的虚函数表指针
//	//MBTX mbtx;
//
//	//如果我们自己定义构造函数
//	//(1)生成类的虚函数表
//	//(2)调用父类的构造函数
//	//(3)把虚函数表的地址赋给对象的虚函数表指针
//	//当我们有自己的构造函数时，编译器会根据我们的需要扩充我们自己写的构造函数的代码
//
//	//如果一个类带有虚基类，编译器也会为他合成一个默认构造函数
//	//虚基类：通过两个直接基类继承同一个间接基类
//	MBTX mbtx;
//	//vbtable：虚基类表，有虚基类才会出现
//	//编译器为直接基类和该类生成合成默认构造函数
//
//	return 0;
//}