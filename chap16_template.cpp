#include<iostream>
#include<fstream>
#include<string>

using namespace std;

// homework
// 16.1: 编写一个模板返回形参的绝对值。至少用三种不同类型的值调用模板。
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

// 16.2: 编写一个函数模板，接受一个ostream引用和一个值，将该值写入流。
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