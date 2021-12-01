#include<iostream>
using std::cin;
using std::cout;
using std::string;
using std::endl;
int main()
{
	string s;
	int i = 0;
	while (cin >> s)
	{
		i++;
		cout << "第"
			<< i
			<< "次读取单词 "
			<< s
			<< " " << endl;
	}
}
