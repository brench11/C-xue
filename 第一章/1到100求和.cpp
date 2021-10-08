#include<iostream>
int main()
{
	int a=1, sum = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		sum += i;
//	}
	//while 重写
	while (a < 101)
	{
		sum+=a;
		a++;
	}
	std::cout << "1到100的和是:" << sum << std::endl;
	return 0;
}
