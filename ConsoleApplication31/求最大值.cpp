/*#include <iostream>  
#include <stdio.h>  
#include <iomanip>  
#include <cmath>  
#include <cstring>  
#include <string>  
#include<iostream>  
#include<algorithm>  
#include<cstring>  
#include <cstdio>  
using namespace std;
int d[400005];
int a[400005], b[400005];
int main()
{
	int n;
	while (cin >> n)
	{
		memset(d, -1, sizeof(d));
		int x, y;
		int s;
		d[200000] = 1; //以20w的中间值作为数轴的0点  
		for (int i = 0; i<n; i++)
		{
			cin >> x >> y;
			if (x + y>0)   //当输出的两个数的和为整数的时候，倒着放 和01背包相同  
			{
				for (int j = 400000; j >= 0; j--)
				{
					if (j - x - y >= 0 && j - x - y <= 400000)
					{
						if (d[j] == 1 && d[j - x - y] == 1)
						{
							a[j] = max(a[j], a[j - x - y] + x);
							b[j] = max(b[j], b[j - x - y] + y);
						}
						else if (d[j]<d[j - x - y])
						{
							a[j] = a[j - x - y] + x;
							b[j] = b[j - x - y] + y;
						}

						d[j] = max(d[j], d[j - x - y]);

						if (d[j] == 1)
						{
							// cout<<j<<' '<<x<<' '<<y<<' '<<j-x-y<<' '<<a[j]<<' '<<b[j]<<endl;  
						}
					}
				}
			}
			else //然后呢  小于0的时候 正着放  和01背包相同  
			{
				for (int j = 0; j <= 400000; j++)
				{
					if (j - x - y >= 0 && j - x - y <= 400000)
					{
						if (d[j] == 1 && d[j - x - y] == 1)
						{
							a[j] = max(a[j], a[j - x - y] + x);
							b[j] = max(b[j], b[j - x - y] + y);
						}
						else if (d[j]<d[j - x - y])
						{
							a[j] = a[j - x - y] + x;
							b[j] = b[j - x - y] + y;
						}

						d[j] = max(d[j], d[j - x - y]);

						if (d[j] == 1)
						{
							//cout<<j<<' '<<x<<' '<<y<<' '<<j-x-y<<' '<<a[j]<<' '<<b[j]<<endl;  
						}
					}
				}
			}
		}
		int i;
		for (i = 400000; i>200000; i--)
		{
			if (d[i] == 1 && a[i] >= 0 && b[i] >= 0) //这时候就是找，最大的值  
			{
				cout << i - 200000 << endl;
				break;
			}
		}
		if (i <= 200000)
		{
			cout << "0" << endl;
		}
	}
}*/