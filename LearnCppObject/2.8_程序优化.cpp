#include <iostream>

class CTempValue
{
public:
	int val1;
	int val2;

public:
	CTempValue(int v1 = 0, int v2 = 0) : val1(v1), val2(v2)
	{
		std::cout << "调用了构造函数" << std::endl;
		std::cout << val1 << "  " << val2 << std::endl;
	}

	CTempValue(const CTempValue& temp) : val1(temp.val1), val2(temp.val2)
	{
		std::cout << "调用了拷贝构造函数" << std::endl;
	}

	virtual ~CTempValue()
	{
		std::cout << "调用了析构构造函数" << std::endl;
	}
};

CTempValue Double(CTempValue& ts)
{
	CTempValue temp;
	temp.val1 = ts.val1 * 2;
	temp.val2 = ts.val2 * 2;

	return temp; //生成临时对象，将temp中的数据拷贝到临时对象，返回临时对象
}

int main()
{
	//程序优化
	//编译器角度优化和开发者角度优化

	//1.开发者层面的优化
	CTempValue ts1(10, 20);
	Double(ts1); //返回值没人接会析构临时对象
	CTempValue tsw = Double(ts1); //如果返回的临时对象有人接，则临时对象的析构不会被调用

	return 0;
}