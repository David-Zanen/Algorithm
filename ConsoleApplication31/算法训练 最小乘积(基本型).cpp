/*#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int *zu = new int[N];

	for (int ci = 0; ci < N; ci++)
	{
		zu[ci] = 0;
		int cd = 0;
		cin >> cd;
		if (cd <= 8)
		{
			int *yi = new int[cd];
			int *er = new int[cd];
			int m1 = 0, m2 = 0;
			for (int i = 0; i < cd; i++)
			{
				cin >> yi[i];
				if (m1 < yi[i])
					m1 = yi[i];
			}
			for (int i = 0; i < cd; i++)
			{
				cin >> er[i];
				if (m2 < er[i])
					m2 = er[i];
			}
			if (m1 > m2)
			{
				for (int j = 0; j < cd; j++)
				{
					for (int k = 0; k < cd; k++)
					{
						if (yi[j] > yi[k])
						{
							int e = yi[j];
							yi[j] = yi[k];
							yi[k] = e;
						}
					}
				}
				for (int j = 0; j < cd; j++)
				{
					for (int k = 0; k < cd; k++)
					{
						if (er[j] < er[k])
						{
							int e = er[j];
							er[j] = er[k];
							er[k] = e;
						}
					}
				}
				for (int o = 0; o < cd; o++)
				{
					zu[ci] += (yi[o] * er[o]);
				}
			}
			else
			{
				for (int j = 0; j < cd; j++)
				{
					for (int k = 0; k < cd; k++)
					{
						if (yi[j] < yi[k])
						{
							int e = yi[j];
							yi[j] = yi[k];
							yi[k] = e;
						}
					}
				}
				for (int j = 0; j < cd; j++)
				{
					for (int k = 0; k < cd; k++)
					{
						if (er[j] > er[k])
						{
							int e = er[j];
							er[j] = er[k];
							er[k] = e;
						}
					}
				}
				for (int o = 0; o < cd; o++)
				{
					zu[ci] += (yi[o] * er[o]);
				}
			}
			delete[]yi;
			delete[]er;
		}
	}
	for (int s = 0; s < N; s++)
		cout << zu[s] << endl;

	delete[]zu;
	system("pause");
	return 0;
}*/