/*#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	char xl[10] = { '0','1','2','3','4','5','6','7','8','9' };
	int q = 0,n;
	cin >> n;
	for (int a = 0; a < 10; a++)
	{
		for (int b = 0; b < 10; b++)
		{
			for (int c = 0; c < 10; c++)
			{
				for (int d = 0; d < 10; d++)
				{
					for (int e = 0; e < 10; e++)
					{
						for (int f = 0; f < 10; f++)
						{
							for (int g = 0; g < 10; g++)
							{
								for (int h = 0; h < 10; h++)
								{
									for (int i = 0; i < 10; i++)
									{
										for (int j = 0; j < 10; j++)
										{
											char sc = 0;
											if (xl[j]!=xl[i] != xl[h] != xl[g] != xl[f] != xl[e] != xl[d] != xl[c] != xl[b] != xl[a])
											{
												q++;
												sc = xl[a] + xl[b] + xl[c] + xl[d] + xl[e] + xl[f] + xl[g] + xl[h] + xl[i] + xl[j];
											}
											if (q == n)
											{
												cout << sc << endl;
												break;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

	system("pause");
	return 0;
}*/
/*
#include<stdio.h>  
#include<string.h>  
long long n, sum;
int vis[10];//�����������i�Ƿ����ˣ����Ƿ��ѱ�������������  
int a[10];
void dfs(int pos)
{
	if (pos == 10)//��ʾ��ǰ����a������10������  
	{
		sum++;
		if (sum == n)
		{
			for (int i = 0; i<10; i++)
				printf("%d", a[i]);
			printf("\n");
		}
	}
	for (int i = 0; i <= 9; i++)//ö������0������9  
	{
		if (!vis[i])//������i��û�����ڵ�ǰ������  
		{
			a[pos] = i;//��i������ǰ����a����ĵ�posλ��  
			vis[i] = 1;//����i�ѷ��������У����Ϊ1  
			dfs(pos + 1);//����������һ��λ��  
			vis[i] = 0;//������  
		}
	}
}
int main()
{
	while (~scanf_s("%lld", &n))
	{
		memset(vis, 0, sizeof(vis));
		sum = 0;
		dfs(0);
	}
	return 0;
}
*/