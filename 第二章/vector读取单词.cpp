#include<iostream>
#include <vector>
#include<string>
#include<cctype>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
int main()
{
	vector<string> str;
	string temp;
	while (cin >> temp)
	{
		str.push_back(temp);
	}
	vector<string>::size_type siz = str.size();
	for (int i = 0; i < siz; i++)
	{
		int x = str[i].size();
		for (int j = 0; j < x; j++)
		{
			str[i][j] = toupper(str[i][j]);
		}
	}
	int line = 1;
	for (int i = 0; i < siz; i++)
	{
		if (line == 8)
		{
			cout << str[i] << endl;
			line = 0;
		}
		else {
			cout << str[i]
				<< "  ";
		}
		line++;
	}
}
