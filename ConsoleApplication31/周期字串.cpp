/*#include<iostream>
#include<string>
using namespace std;

int main()
{
	char zfc[100] = "";
	cin >> zfc;
	int cd = strlen(zfc);
	int ci = 0, min = 1;
	for (int i = 0; i < cd; i++)
	{
		string wei="";
		int op = 0;
		for (int k=0; k <= i; k++)
		{
			wei += zfc[k];
			min = i + 1;
		}
		string ge="";
		for (int j = i + 1, l = 0; j < cd; l++)
		{
			if (zfc[j] == 0)
			{
				op = 1;
				break;
			}
			if (l == min)
			{
				if (ge != wei)
				{
					ci = 0;
					break;
				}
				else
					ci = 1;
				ge = "";
				l = 0;
				j += min;
			}
			if (j + i < cd)
			{
				ge += zfc[j + l];
			}
			if (j + i >= cd && ci == 0)
			{
				cout << cd << endl;
				system("pause");
				return 0;
			}
			
		}
		if (op == 1)
			break;
		if (ci == 1)
		{
			break;
		}
	}
	cout << min << endl;
	system("pause");
	return 0;
}*/
/*
#include<cstdio>
#include<cstring>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	string str, ans, s1, s2;
	int cnt;
	while (cin >> str) {
		int len = str.length();
		ans = str;
		cnt = len;

		for (int i = 1; i <= len; i++) {
			if (len%i != 0)
				continue;
			s1 = str.substr(0, i);

			int flag = 1;
			for (int j = i; j < len; j += i) {
				s2 = str.substr(j, i);
				if (s1 != s2) {
					flag = 0;
					break;
				}
			}
			if (flag) {
				cnt = i;
				ans = s1;
				break;
			}
		}
		printf("%d\n", cnt);
	}
	return 0;
}*/