#include<iostream>
#include<fstream>
#include<string>

using namespace std;

// homework
// 16.1: ��дһ��ģ�巵���βεľ���ֵ�����������ֲ�ͬ���͵�ֵ����ģ�塣
template <typename T>
//T absVal(T val)
//{
//	return val > 0 ? val : -val;
//}
//void hw_16_1()
//{
//
//	double dval = 0.88;
//	float fval = -12.3;
//
//	cout << absVal(-3) << endl;
//	cout << absVal(dval) << endl;
//	cout << absVal(fval) << endl;
//}

// 16.2: ��дһ������ģ�壬����һ��ostream���ú�һ��ֵ������ֵд������
void myWrite(ostream& os, T val)
{
	os << val;
}
void hw_16_2()
{
	ofstream output;
	output.open("output.txt");
	string str("test string");
	myWrite(cout, str);
	myWrite(output, 3);
}
int main()
{
	//======================chap16 template===================//
	// homework
	//hw_16_1();

	hw_16_2();
	return 0;
}