

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
//		mA = 15; //��ϵ㣬debug->����->�������Կ�����Ķ���
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
//	//�����ȱʡ���캯��������û���κι��캯������Ϊ����Ĺ��캯��Ҫ�����ã���������Ϊ����ϳ�Ĭ�Ϲ��캯��
//	//�����а�����룬���ø��๹�캯��
//
//	//MBTX mbtx;
//
//	//���һ���ຬ���麯�������Ǹ���û���κι��캯��ʱ
//	//��Ϊ�麯���Ĵ��ڣ���������Ϊ��������һ���麯����vftable
//	//ϵͳ�ϳɹ��캯��������룬������麯����ĵ�ַ�������������麯����ָ��
//	//MBTX mbtx;
//
//	//��������Լ����幹�캯��
//	//(1)��������麯����
//	//(2)���ø���Ĺ��캯��
//	//(3)���麯����ĵ�ַ����������麯����ָ��
//	//���������Լ��Ĺ��캯��ʱ����������������ǵ���Ҫ���������Լ�д�Ĺ��캯���Ĵ���
//
//	//���һ�����������࣬������Ҳ��Ϊ���ϳ�һ��Ĭ�Ϲ��캯��
//	//����ࣺͨ������ֱ�ӻ���̳�ͬһ����ӻ���
//	MBTX mbtx;
//	//vbtable���������������Ż����
//	//������Ϊֱ�ӻ���͸������ɺϳ�Ĭ�Ϲ��캯��
//
//	return 0;
//}