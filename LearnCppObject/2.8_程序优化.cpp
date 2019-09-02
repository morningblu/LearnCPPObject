//#include <iostream>
//#include <time.h>
//
//class CTempValue
//{
//public:
//	int val1;
//	int val2;
//
//public:
//	CTempValue(int v1 = 0, int v2 = 0) : val1(v1), val2(v2)
//	{
//		std::cout << "调用了构造函数" << std::endl;
//		std::cout << val1 << "  " << val2 << std::endl;
//	}
//
//	CTempValue(const CTempValue& temp) : val1(temp.val1), val2(temp.val2)
//	{
//		std::cout << "调用了拷贝构造函数" << std::endl;
//	}
//
//	virtual ~CTempValue()
//	{
//		std::cout << "调用了析构构造函数" << std::endl;
//	}
//};

//开发者视角
//CTempValue Double(CTempValue& ts)
//{
///*	CTempValue temp;
//	temp.val1 = ts.val1 * 2;
//	temp.val2 = ts.val2 * 2;
//
//	return temp;*/ //生成临时对象，将temp中的数据拷贝到临时对象，返回临时对象
//
//	//优化
//	return CTempValue(ts.val1 * 2, ts.val2 * 2);
//}

//编译器视角
//void Double(CTempValue& tempObj, CTempValue& ts)
//{
//	tempObj.CTempValue::CTempValue(ts.val1 * 2, ts.val2 * 2);
//}
//
//int main()
//{
	//程序优化
	//编译器角度优化和开发者角度优化

	//1.开发者层面的优化
	//CTempValue ts1(10, 20);
	//Double(ts1); //返回值没人接会析构临时对象
	//CTempValue tsw = Double(ts1); //如果返回的临时对象有人接，则临时对象的析构不会被调用

	//编译器视角
	//CTempValue ts1;
	//ts1.CTempValue::CTempValue(10, 20);
	//CTempValue tempObj;
	//Double(tempObj, ts1);

	//2.编译器层面优化
	//如果放到linux,编译器g++或者gcc会自动帮助我们优化，针对于返回临时对象这种情况。NRV优化
	//g++ -fno-elide-constructors xx.cpp -0 xx可以关闭优化

	//visual studio开启优化参数选项也可以进行优化
	
	//3. 可以用下面的数据结构来测试优时间
	//clock_t start, end;
	//start = clock();

	//优化说明
	//（1）编译器是或真优化，不好说，得做测试
	//（2）如果代码复杂，编译器可能不优化
	//（3）不要过度优化
	//（4）优化可能使你犯错误

//
//	return 0;
//}