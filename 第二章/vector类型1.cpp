#include<iostream>
#include <vector>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
int main()
{
	vector<int> m;
	int i;
	while (cin >> i)
	{
		m.push_back(i);
	}
	cout << "vector类型大小" <<m.size()<<endl;
	vector<int>::size_type x = m.size();
	
	vector<int>::size_type a = 0;
	while (a< x-1)
	{
		cout << "第" << a
		<< "与" << a + 1
		<< "的和是" << (m[a] + m[a + 1])
		<< endl;
		a += 2;
	}
	
}
