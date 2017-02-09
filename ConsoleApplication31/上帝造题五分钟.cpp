/*#include<iostream>
using namespace std;

int main()
{
	int n, Q;
	cin >> n >> Q;
	int *sz = new int[n];
	bool op = false;
	for (int i = 0; i < n; i++)
	{
		cin >> sz[i];
		if (sz[i] > 1000)
			op = true;
	}
	if (op == true)
	{
		system("pause");
		return 0;
	}
	int *cx = new int[Q];
	for (int l = 0; l < Q; l++)
	{
		int min = 1001;
		cx[l] = 0;
		int lo, hi;
		cin >> lo >> hi;
		if (0 <= lo&&hi <= n - 1)
		{
			for (int j = lo; j <= hi; j++)
			{
				if (min > sz[j])
					min = sz[j];
			}
			cx[l] = min;
		}
	}
	for (int o = 0; o < Q; o++)
		cout << cx[o] << endl;
	delete []cx;
	delete []sz;
	system("pause");
	return 0;
}*/