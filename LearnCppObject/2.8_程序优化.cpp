#include <iostream>

class CTempValue
{
public:
	int val1;
	int val2;

public:
	CTempValue(int v1 = 0, int v2 = 0) : val1(v1), val2(v2)
	{
		std::cout << "�����˹��캯��" << std::endl;
		std::cout << val1 << "  " << val2 << std::endl;
	}

	CTempValue(const CTempValue& temp) : val1(temp.val1), val2(temp.val2)
	{
		std::cout << "�����˿������캯��" << std::endl;
	}

	virtual ~CTempValue()
	{
		std::cout << "�������������캯��" << std::endl;
	}
};

//�������ӽ�
CTempValue Double(CTempValue& ts)
{
/*	CTempValue temp;
	temp.val1 = ts.val1 * 2;
	temp.val2 = ts.val2 * 2;

	return temp;*/ //������ʱ���󣬽�temp�е����ݿ�������ʱ���󣬷�����ʱ����

	//�Ż�
	return CTempValue(ts.val1 * 2, ts.val2 * 2);
}

//�������ӽ�
void Double(CTempValue& tempObj, CTempValue& ts)
{
	tempObj.CTempValue::CTempValue(ts.val1 * 2, ts.val2 * 2);
}

int main()
{
	//�����Ż�
	//�������Ƕ��Ż��Ϳ����߽Ƕ��Ż�

	//1.�����߲�����Ż�
	//CTempValue ts1(10, 20);
	//Double(ts1); //����ֵû�˽ӻ�������ʱ����
	//CTempValue tsw = Double(ts1); //������ص���ʱ�������˽ӣ�����ʱ������������ᱻ����

	//�������ӽ�
	//CTempValue ts1;
	//ts1.CTempValue::CTempValue(10, 20);
	//CTempValue tempObj;
	//Double(tempObj, ts1);

	//2.���������棬�Ż�

	return 0;
}