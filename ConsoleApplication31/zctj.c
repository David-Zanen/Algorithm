/*#include<stdio.h>  
#include<string.h>  
char b[60][60];
int c[60];
int main()
{
	int l, i1, max = 1, now = 0, maxn = 1, i2, weizhi = 0, i3, i4, weizhi1, changdu1 = -1;

	char a[10000];
	scanf_s("%d", &l);
	getchar();
	gets(a);
	int n = strlen(a);

	for (i1 = n; i1 >= l; i1--)//长度   
	{
		weizhi = 0;
		for (i3 = 0; i3<n - i1; i3++)
			c[i3] = 0;
		for (i2 = 0; i2<n; i2++)//开始位置   
		{
			if (i2 + i1>n)
				break;
			int ok = 1;


			for (i3 = 0; i3<weizhi; i3++)//b的位置   
			{
				int ko = 1;
				for (i4 = 0; i4<i1; i4++)
				{
					if (b[i3][i4] != a[i2 + i4])
						ko = 0;

				}
				if (ko)
				{
					ok = 0;
					c[i3]++;
					if (c[i3]>max)
					{
						max = c[i3];
						changdu1 = i1;
						weizhi1 = i2;
					}
					break;
				}

			}

			if (ok)
			{
				for (i4 = 0; i4<i1; i4++)
				{
					b[weizhi][i4] = a[i2 + i4];
				}
				c[weizhi] = 1;
				weizhi++;
			}
		}
	}

	for (i1 = weizhi1; i1<weizhi1 + changdu1; i1++)
		printf("%c", a[i1]);
	printf("\n");
	return 0;
}*/