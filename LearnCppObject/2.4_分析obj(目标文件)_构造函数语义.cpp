/*
分析obj文件，构造函数语义
*/

//#include <iostream>
//
//class M0TX
//{
//public:
//	M0TX()
//	{
//
//	}
//};
//
//class MATX
//{
//public:
//	MATX() {
//		std::cout << "dfd" << std::endl;
//	}
//
//};
//
//class MBTX
//{
//public:
//	int mA;
//	int mB;
//	MATX ma;
//	M0TX m0;
//	void func()
//	{
//		std::cout << "ddff" << std::endl;
//	}
//};

//int main()
//{
	//传统认识：没有自己定义构造函数，会自动定义一个无参构造函数，我们称之为"合成的构造函数"
	//结论：默认的构造函数只有在必要的时候才会合成而不是必须合成的
	//什么是必要的时候：
	//（1）:该类MBTX没有任何构造函数，但是包含一个类类型的成员ma,该对象所属的类有一个缺省的构造函数
	             //这时候会为MBTX生成一个合成默认构造函数并安插代码，目的是为了调用MATX的默认构造函数


	//一个cpp生成一个obj文件
	//工具，VS2017开发人员命令提示符，输入dumpbin把obj导出为可查看的文件
	//dumpbin /all 2.4_分析obj(目标文件)_构造函数语义.obj >myObj.txt 
	//查看myObj.txt文件中是否合成了默认够着函数


	//MBTX myB;

	//return 0;
//}