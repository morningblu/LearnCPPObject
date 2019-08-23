/*
*/
//
//#include <iostream>
//
//class Asun
//{
//public:
//	int mAsun;
//};


//class CTB
//{
//public:
//	CTB()
//	{
//
//	}
//
//	//int test; //求证拷贝值和拷贝构造函数调用顺序
//
//	CTB(const CTB& ctb)
//	{
//		std::cout << "CTB" << std::endl;
//	}
//
//	/******/
//	//virtual void myVirtyal()
//	//{
//
//	//}
//};
//class CTBSon //: public CTB
//{
//public:
//	virtual void myVirtyal()
//	{
//
//	}
//};

//class CTBSon : public CTB
//{
//public:
//
//};
//
//class A
//{
//public:
//	int mTest;
//	Asun mAsun;
//	CTB mCtb;
//};
///*******/
//class Grand
//{
//public:
//};
//
//class Father1 : virtual public Grand
//{
//public:
//
//};
//
//class Father2 : virtual public Grand
//{
//public:
//
//};
//
//
//class Son : public Father1, public Father2
//{
//public:
//
//};


//int main()
//{
	//传统理解，如果我们没有定义自己的拷贝构造函数，编译器会合成一个可瓯北构造函数
	//合成的拷贝构造函数，也是在必要的时候才会被编译器合成出来

/*	A myA1;
	myA1.mTest = 15;
	myA1.mAsun.mAsun = 120;

	A myA2 = myA1;*/  //这是一个初始化，myA2.mTest = 15,是编译器成员变量初始化手法
	                 //直接按值拷贝过去，编译器不需要合成拷贝构造函数。
	
	//结论：
	//A myA2 = myA1;拷贝构造一个对象
	//我们总控没有写拷贝构造函数，编译器也没有帮助我们生产
	//我们却发现myA1中的值成功拷贝到了myA2中，这是编译器内部的一些直接拷贝数据的手法
	    //比如类A中有Asun成员变量，也会递归式的去拷贝类Asun的成员变量

	//某些情况下，如果不写自己的拷贝构造函数，编译器会合成出拷贝构造函数
	//1.如果一个类A没有拷贝构造函数，但是含有一个类类型CTB的成员变量，该类型含有拷贝构造函数
	    //当代码中涉及到类A的拷贝构造时，会为类A 合成拷贝构造函数
	    //会在类A中合成拷贝构造函数，并安插代码调用类CTB的拷贝构造函数
		//编译器合成的拷贝构造函数都是干一些特殊的事情，如果只是成员变量的值拷贝，编译器是不用专门合成拷贝构造函数实现
	//A myA1;
	//myA1.mTest = 15;
	//myA1.mAsun.mAsun = 120;

	//A myA2 = myA1;
	//	
	//2.如果一个类CTBSon,没有拷贝构造函数，但是父类有拷贝构造函数，当代码中涉及到CTBSon的拷贝构造时
	//编译器会为CTBSon合成拷贝构造函数，调用父类拷贝构造函数
	//CTBSon son1;
	//CTBSon son2 = son1;


	//3.如果一个类CTBSon,没有拷贝构造函数，但是该类声明了或者继承了虚函数
	//声明了虚函数：编译器会为CTBSon合成拷贝构造函数,在拷贝构造函数插入语句，将vftable的首地址给虚表指针
	//继承了虚函数：会调用父类合成的拷贝构造函数，在处理vftable

	//4.如果一个类没有拷贝构造函数，但是该类继承虚基类
	//编译器为该类合成拷贝构造函数
	//Son mySon1;
	//Son mySon2 = mySon1;

	//求证拷贝值和拷贝构造函数调用顺序
	//A a1;
	//a1.mCtb.test = 10;
	//A a2 = a1;


//
//	return 0;
//}