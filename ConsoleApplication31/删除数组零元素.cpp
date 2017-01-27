/*#include<iostream>
using namespace std;

int CompactIntegers(int *sz, int len)
{
	int fact = 0, xb, i = 0, j = 0;
	for (int i = 0; i < len; i++)
	{
		if (sz[i] != 0)
		{
			fact++;
		}
	}
	cout << fact << endl;
	if (fact >= 1)
	{
		int *X = new int[fact];
		for (int i = 0; i < len; i++)
		{
			if (sz[i] != 0)
			{
				X[j] = sz[i];
				j++;
			}
		}
		for (int j = 0; j < fact; j++)
			cout << X[j] << " ";

		delete []X;
	}
	
	return 1;
}

int main(void)
{
	int n = 0;
	cin >> n;
	int *N = new int[n];
	for (int i = 0; i < n; i++)
		cin >> N[i];
	CompactIntegers(N, n);
	cout << endl;
	delete []N;
	system("pause");
	return 0;
}*/