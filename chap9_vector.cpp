#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <deque>
#include <algorithm>
#include <stack>
#include <queue>

using namespace std;

//homework 9.41
// greet函数功能：对于字符串form，将其中Daisy替换为lastname， 将其中的Ms替换为字符串title中
//从pos下标开始的length个字符。
string greet(string form, string lastname, string title, string::size_type pos, int length)
{
	form.replace(form.find("Daisy"), 5, lastname);
	form.replace(form.find("Ms"), 2, title, pos, length);

	return form;
}
void run_9_41()
{
	string generic1("Dear Ms Daisy:");
	string generic2("MrsMsMissPeople");
	string lastName("AnnaP");
	string salute = greet(generic1, lastName, generic2, 5, 4);

	cout << salute << endl;
}

//=====9.7 容器适配器(adaptor)==========//
void adaptor_demo()
{
	//顺序容器适配器：queue、priority_queue、stack
	deque<int> deq;
	stack<int> stk(deq);//初始化
}

int main()
{
	// ===================chap9 sequential container(顺序容器）==================//
	//homework 9.41
	run_9_41();

	//=====9.7 容器适配器(adaptor)==========//
	//(1)--------tutorial------------------
	



	return 0;
}