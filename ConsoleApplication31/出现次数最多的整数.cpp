/*#include<iostream>
using namespace std;

int main(void)
{
	int x, max = 0, s = 0,min;
	cin >> x;
	if (x > 0)
	{
		int sj[20] = {}, gs[20], shu[20];
		for (int i = 0; i < x; i++)
		{
			cin >> sj[i];
		}

		int tb = sj[0];
		shu[s] = sj[0];
		gs[s] = 0;
		for (int j = 0; j < x; j++)
		{	
			if (sj[j] != tb)
			{
				++s;
				gs[s] = 0;
				tb = sj[j];
				shu[s] = sj[j];
			}
			else
			{
			
			}
		}
		for (int l = 0; l<=s; l++)
		{
			for (int k = 0; k < x; k++)
			{
				if (sj[k] == shu[l])
				{
					++gs[l];
				}

			}
		}

		max = gs[0];
	
		for (int l = 0; l<=s; l++)
		{
			if (max <= gs[l])
			{
				max = gs[l];
				min = shu[l];
			}
		}

		for (int m = 0, n = 0; m <= s; m++)
		{
			if (max == gs[m] && n < 2)
			{
				n++;
				if (min > shu[m])
					min = shu[m];
			}
		}

		cout << min << endl;
	}

	system("pause");
	return 0;
}*/