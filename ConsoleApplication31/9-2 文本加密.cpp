/*#include<iostream>
using namespace std;

int main()
{
	char wb[50] = {};
	cin >> wb;
	for (int o = 0; wb[o] != 0; o++)
	{
		if (97 <= wb[o] && wb[o] <= 122)
		{
			if (wb[o] == 122)
			{
				wb[o] = 65;
			}
			else
				wb[o] += 1;
		}
		else
		{
			if (65 <= wb[o] && wb[o] <= 90)
			{
				if (wb[o] == 90)
				{
					wb[o] = 97;
				}
				else
					wb[o] += 1;
			}
		}
		
		cout << wb[o];
	}
	cout << endl;
	system("pause");
	return 0;
}*/