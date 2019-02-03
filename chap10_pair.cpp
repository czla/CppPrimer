#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

//10.1 pair
//homework_10.1
//读入一系列string和int型数据，将每一组存储在一个pair对象中，然后将这些pair对象存储在vector容器里
//void hw_10_1()
//{
//	string str;
//	int i;
//	vector<pair<string, int>> pvec;
//	while (cin >> str >> i)
//	{
//		pair<string, int> p(str, i);
//		pvec.push_back(p);
//	}
//
//	vector<pair<string, int>>::iterator ix = pvec.begin();
//	while (ix != pvec.end())
//	{
//		cout << (*ix).first << "\t" << (*ix).second << endl; ix++;
//	}
//}

//10.4 set
void set_demo()
{
	vector<int> ivec;
	for (vector<int>::size_type i = 0; i != 10; ++i)
	{
		ivec.push_back(i);
		ivec.push_back(i);
	}

	set<int> iset(ivec.begin(), ivec.end());
	cout << ivec.size() << endl;
	cout << iset.size() << endl;
}

int main()
{
	
	//==================关联容器(associative container)=============//
	////10.1 pair
	//hw_10_1();

	//10.4 set
	set_demo();

	return 0;
}