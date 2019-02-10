#include<iostream>
#include<string>

using namespace std;

// homework 
// 12.1:��дһ����ΪPerson���࣬��ʾ�˵����ֺ͵�ַ��ʹ��string������ÿ��Ԫ�ء�
// 12.2:ΪPerson�ṩһ����������string�����Ĺ��캯����
// 12.3:�ṩ�������ֺ͵�ַ�Ĳ�����
//class Person
//{
//public:
//	Person():Name("Eren"), Address("Japan Wall Maria") {}  // 12.2
//	string GetName() const	// 12.3 const only read
//	{
//		return Name;
//	}
//	string GetAddress() const
//	{
//		return Address;
//	}
//private:
//	string Name;
//	string Address;
//
//};
//void hw_12_1()
//{
//	Person eren;
//	cout << "Name: " << eren.GetName() << "\nAddress: " << eren.GetAddress() << endl;
//}

// 12.13 ��չScreen���԰���move��set��display����
// move cursor to given position, set that character and display the screen
// myScreen.move(4,0).set('#').display(cout);
class Screen {
public:
	typedef string::size_type index;
	char get() const { return contents[cursor]; }
	inline char get(index ht, index wd) const;
	index get_cursor() const;
	Screen(index hght, index wdth, const string &cntnts);

	// ����3����Ա����
	Screen& move(index r, index c);
	Screen& set(char);
	Screen& display(ostream &os);
private:	
	string contents;
	index cursor;
	index height, width;
};
Screen::Screen(index hght, index wdth, const string &cntnts = ""):
	contents(cntnts), cursor(0), height(hght), width(wdth) {
	contents.assign(hght*wdth, 'x');
	if (cntnts.size() != 0)
		contents.replace(0, cntnts.size(), cntnts);
}
char Screen::get(index r, index c) const
{
	index row = r * width;
	return contents[row + c];
}
inline Screen::index Screen::get_cursor() const
{
	return cursor;
}
//���ӵ�3����Ա�����Ķ���
Screen& Screen::set(char c)
{
	contents[cursor] = c;
	return *this;
}
Screen& Screen::move(index r, index c)
{
	// �С��кž���0��ʼ
	if (r >= height || c >= width)
	{
		cerr << "invalid row or column" << endl;
		throw EXIT_FAILURE;
	}
	index row = r * width;
	cursor = row + c;
	return *this;
}
Screen& Screen::display(ostream &os)
{
	string::size_type index = 0;
	while (index != contents.size()) {
		os << contents[index];
		if ((index + 1) % width == 0) {
			os << '\n';
		}
		++index;
	}
	return *this;
}
void hw_12_13()
{
	Screen myScreen(5, 6);
	myScreen.move(4, 0).set('#').display(cout);
}
int main()
{
	//===================chap 12 class=======================//
	//hw_12_1();
	hw_12_13();
	
	return 0;
}