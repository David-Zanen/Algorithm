/*#include<iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	long long *sj = new long long[N];
	for (int ci = 0; ci < N; ci++)
	{
		sj[ci] = 1;
		int n, m;
		cin >> n >> m;
		if (1 <= m&&m <= n&&n <= 15)
		{
			int *sz = new int[n];
			for (int i = 0; i < n; i++)
				cin >> sz[i];
			for (int j = 0; j < n; j++)
			{
				for (int k = 0; k < n; k++)
				{
					if (sz[k] < sz[j])
					{
						int e = sz[k];
						sz[k] = sz[j];
						sz[j] = e;
					}
				}
			}
			int i = 0, j = 0;
			while (m) {
				int a = sz[i] * sz[i + 1];
				int b = sz[n - j - 1] * sz[n - j - 2];
				if (a >= b&& m >= 2) {
					sj[ci] *= a;
					i += 2;
					m -= 2;
				}
				else {
					sj[ci] *= sz[n - j - 1];
					j++;
					m--;
				}
			}
			delete []sz;
		}
	}
	for (int hu = 0; hu < N; hu++)
		cout << sj[hu] << endl;
	delete []sj;
	system("pause");
	return 0;
}*/