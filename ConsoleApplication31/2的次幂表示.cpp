/*#include<iostream>
//#include<string>
using namespace std;

void bs(int *c,int di)
{
	//int s = 0;
	int flag = 0;
	int i;
	for (i = 19; i >= 0; i--)
	{
		if (c[i] == 1)
		{
			if (flag == 1)
			{
				cout << "+";
			}
			if (i == 1)
			{
				cout << "2";
			}
			else if (i == 0)
			{
				cout << "2(0)";
			}
			else
			{
				cout << "2(";
				bs(c,i);
				cout << ")";
			}
			flag = 1;
		}
	}
	
	//return bs(c,i);
}

int main()
{
	int com = 0;
	cin >> com;
	if (1 <= com && com <= 20000)
	{
		int x = 0, he = 0, du = 0, s = 0;
		int ci[100], wei[19] = {};
		while (com)
		{
			wei[du] = com % 2;
			if (com % 2 == 1)
			{
				ci[he] = du;
				he++;
				//cout << '+';
			}
			com /= 2;
			du++;
		}
		bs(wei, 19);

		cout << endl;
	}

	system("pause");
	return 0;
}*/
/*#include<iostream>  
#include<stdio.h>  
using namespace std;
int n;
void dfs(int a)
{
	int bin[20] = { 0 };
	int p = 0;
	while (a >= 1)
	{
		bin[p] = a % 2;
		a = a / 2;
		p++;
	}

	int flag = 0;
	for (int i = 19; i >= 0; i--)
	{
		if (bin[i] == 1)
		{
			if (flag == 1)
			{
				printf("+");
			}
			if (i == 1)
			{
				printf("2");
			}
			else if (i == 0)
			{
				printf("2(0)");
			}
			else
			{
				printf("2(");
				dfs(i);
				printf(")");
			}
			flag = 1;
		}
	}

}

int main()
{
	scanf_s("%d", &n);
	dfs(n);
	system("pause");
	return 0;
}*/