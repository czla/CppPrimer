#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//homework 14.33
//ʹ�ñ�׼���㷨��GT_cls�࣬��дһ��������������е�һ����ָ��ֵ���Ԫ�ء�
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

	cin.clear();	//ʹ��������Ч
	int spval;
	cout << "Enter a specified value: " << endl;
	cin >> spval;

	// ���ҵ�һ������ָ��ֵ��vectorԪ��
	vector<int>::iterator iter;
	iter = find_if(ivec.begin(), ivec.end(), GT_cls(spval));

	// ������
	if (iter != ivec.end())
		cout << "The first element that is larger than "
		<< spval << " : " << *iter << endl;
	else
		cout << "No element is larger than " << spval << endl;
}

//homework 14.34
//��д������GT_cls�ĺ��������࣬����������ֵ�Ƿ���ȡ�
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