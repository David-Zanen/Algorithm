/*#include<iostream>
//#include<string.h>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	if (1 < n&&n <= 100)
	{
		int *N = new int[100];
		int db = 0;
		for (int w = 0; w < n; w++)
		{
			cin >> N[w];
		}
		int max = N[0];
		for (int rc = 0; rc < n; rc++)
		{
			if (max < N[rc])
			{
				max = N[rc];
				db = rc;
			}
		}
		cout << max << " " << db << endl;
	}

	system("pause");
	return 0;
}*/