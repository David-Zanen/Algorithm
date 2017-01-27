#include <iostream>
#include<math.h>
using namespace std;

int main()
{
	int n = 0;
	int S[100][2] = {};
	cin >> n;
	if (1 <= n&&n <= 100)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				if (-1000 <= S[i][j] && S[i][j] <= 1000)
				{
					cin >> S[i][j];
				}
				else
				{
					system("pause");
					return 0;
				}
			}
		}
		int max = 0;
		for (int x = 0; x < n; x++)
		{
			for (int y = 0; y < n; y++)
			{
				if (max < S[x][0] + S[y][1])
				{
					max = S[x][0] + S[y][1];
				}
			}
		}
		cout << max << endl;
	}

	system("pause");
	return 0;
}