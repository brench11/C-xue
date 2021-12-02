#include<iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
int main()
{
	vector<int> s;
	int i;
	while (cin >> i)
		s.push_back(i);
	vector<int> ::iterator p = s.begin();
	cout << "当前元素：" << endl;
	while (p != s.end())
	{
		cout << *p
			<< "  ";
		p++;
	}
	p = s.begin();
	cout << endl;
	while (p != s.end())
	{
		*p = *p * 2;
		p++;
	}
	cout << "现在的元素" << endl;
	p = s.begin();
	while (p != s.end())
	{
		cout << *p
			<< "  ";
		p++;
	}
}
