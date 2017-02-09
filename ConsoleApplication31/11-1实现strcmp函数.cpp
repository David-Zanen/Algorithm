/*#include<iostream>
using namespace std;

int myStrcmp(char *s1, char *s2)
{
	int zd = 0;
	for (int i = 0, j = 0;; i++, j++)
	{
		if (s1[i] > s2[j])
		{
			zd = 1;
		}
		if (s1[i] < s2[j])
		{
			zd = -1;
		}
		if (s1[i] == '\0' || s2[j] == '\0')
		{
			break;
		}
	}
	return zd;
}

int main()
{
	char zfc1[100] = {0}, zfc2[100] = {0};
	cin >> zfc1 >> zfc2;

	int jg = myStrcmp(zfc1, zfc2);
	cout << jg << endl;
	
	system("pause");
	return 0;
}*/