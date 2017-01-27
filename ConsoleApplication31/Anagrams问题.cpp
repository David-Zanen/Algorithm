/*#include<iostream>
#include<string>
using namespace std;

int main()
{
	char shuyi[80] = {};
	char er[80] = {};
	cin >> shuyi;
	cin >> er;
	int x = 0, y = 0, js;
	for (int i = 0; shuyi[i] != 0;)
	{
		for (int j = 0; shuyi[j] != 0;)
		{
			if (shuyi[i] >= 97)
			{
				if (shuyi[i] == shuyi[j])
				{
					x++;
				}
				if (shuyi[i] == shuyi[j] + 32)
				{
					x++;
				}
			}
			else
			{
				if (shuyi[i] == shuyi[j])
				{
					x++;
				}
				if (shuyi[i] == shuyi[j] - 32)
				{
					x++;
				}
			}
			j++;
		}
		for (int j = 0; er[j] != 0;)
		{
			if (shuyi[i] >= 97)
			{
				if (er[j] == shuyi[i])
				{
					y++;
				}
				if (er[j] + 32 == shuyi[i])
				{
					y++;
				}
			}
			else
			{
				if (er[j] == shuyi[i])
				{
					y++;
				}
				if (er[j] - 32 == shuyi[i])
				{
					y++;
				}
			}
			j++;
		}
		if (x != y)
		{
			js = 1;
			break;
		}
		i++;
	}
	if (js == 1)
	{
		cout << "N" << endl;
	}
	else
		cout << "Y" << endl;

	system("pause");
	return 0;
}*/