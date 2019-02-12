#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//homework 14.33
//使用标准库算法和GT_cls类，编写一个程序查找序列中第一个比指定值大的元素。
class GT_cls {
public:
	GT_cls(int val = 0): bound(val) {}
	bool operator() (const int &ival)
	{
		return ival > bound;
	}
private:
	int bound;
};
void hw_14_33()
{
	vector<int> ivec;
	int ival;
	cout << "Enter numbetrs(Ctrl+Z to end): " << endl;
	while (cin >> ival)
		ivec.push_back(ival);

	cin.clear();	//使流重新有效
	int spval;
	cout << "Enter a specified value: " << endl;
	cin >> spval;

	// 查找第一个大于指定值的vector元素
	vector<int>::iterator iter;
	iter = find_if(ivec.begin(), ivec.end(), GT_cls(spval));

	// 输出结果
	if (iter != ivec.end())
		cout << "The first element that is larger than "
		<< spval << " : " << *iter << endl;
	else
		cout << "No element is larger than " << spval << endl;
}

//homework 14.34
//编写类似于GT_cls的函数对象类，但测试两个值是否相等。
class isEqual {
public:
	isEqual(int val = 0):spValue(val)  {}
	bool operator() (const int &val)
	{
		return val == spValue;
	}
private:
	int spValue;
};
void hw_14_34()
{
	isEqual cls;
	cout << cls(3) << endl;

}


int main()
{
	//=======================chap 14 overload operator====================//
	//homework
	//hw_14_33();

	hw_14_34();

	return 0;
}