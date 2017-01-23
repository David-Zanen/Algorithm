#include<iostream>
//#include<string>
using namespace std;

int bs(int c)
{
	char s=0;

	return c;
}

int main()
{
	int com = 0;
	cin >> com;
	if (1 <= com && com <= 20000)
	{
		int x = 0, he = 0, du = 0;
		int ci[100];
		while (com)
		{
			ci[du] = com % 2;
			com /= 2;
			du++;
		}
		for (int i = du-1; i>=0; i--)
			cout << ci[i];
	}

	system("pause");
	return 0;
}