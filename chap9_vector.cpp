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
// greet�������ܣ������ַ���form��������Daisy�滻Ϊlastname�� �����е�Ms�滻Ϊ�ַ���title��
//��pos�±꿪ʼ��length���ַ���
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

//=====9.7 ����������(adaptor)==========//
void adaptor_demo()
{
	//˳��������������queue��priority_queue��stack
	deque<int> deq;
	stack<int> stk(deq);//��ʼ��
}

int main()
{
	// ===================chap9 sequential container(˳��������==================//
	//homework 9.41
	run_9_41();

	//=====9.7 ����������(adaptor)==========//
	//(1)--------tutorial------------------
	



	return 0;
}