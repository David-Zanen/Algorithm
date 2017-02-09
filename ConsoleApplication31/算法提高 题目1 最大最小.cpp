/*#include<iostream>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	if (1 <= n&&n <= 10000)
	{
		int max = 0, min = 1000000;
		for (int i = 0; i < n; i++)
		{
			int shu = 0;
			cin >> shu;
			if (shu <= 1000000)
			{
				if (max < shu)
					max = shu;
				if (min > shu)
					min = shu;
			}
			else {
				system("pause");
				return 0;
			}
		}
		cout << max << " " << min << endl;
	}

	system("pause");
	return 0;
}*/