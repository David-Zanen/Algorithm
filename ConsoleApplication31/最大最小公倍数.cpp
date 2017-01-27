/*#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int N = 0;
	cin >> N;
	if (1 <= N&&N <= 1000000)
	{
		__int64 he = 1, shu = 0;
		if (N % 2 == 1)
		{
			for (int i = N; i >= 1; i--)
			{
				he *= i;
				shu++;
				if (shu >= 3)
					break;
			}
			cout << he << endl;
		}
		else
		{
			for (int i = 1; i <= N; i++)
				for (int j = 1; j <= N; j++)
					for (int k = 1; k <= N; k++)
					{
						if (i != j != k)
						{
							he = i*j*k;
						}
						if (he%N == 0 && shu<(he / N))
						{
							shu = he / N;
						}
					}
			cout << shu*N << endl;
		}
	}

	system("pause");
	return 0;
}*/