/*#include<iostream>
using namespace std;

int main()
{
	int zs[20];
	int i = 0;
	while (true)
	{
		cin >> zs[i];
		if (zs[i] == 0)
			break;
		i++;
	}
	for (int q = 0; q < i; q++)
	{
		for (int h = 0; h < i; h++)
		{
			if (zs[q] > zs[h])
			{
				int w = zs[q];
				zs[q] = zs[h];
				zs[h] = w;
			}
		}
	}
	cout << zs[1] << endl;
	system("pause");
	return 0;
}*/
#include <cstdio>
#include <cstring>
#include <algorithm>
#define LL long long
using namespace std;

int main()
{
	LL a[20];
	int num = 0;
	while (1)
	{
		LL t;
		scanf_s("%I64d", &t);
		if (t == 0)break;
		else a[num] = t;
		num++;
	}
	sort(a, a + num);
	printf("%I64d", a[num - 2]);
	return 0;
}