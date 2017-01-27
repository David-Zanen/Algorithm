/*#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int m = 0, s = 0, n = 0;
	cin >> m >> s >> n;
	if (m <= 200 && s <= 200 && n <= 200)
	{
		int A[200][200] = {};
		int B[200][200] = {};
		int C[200][200] = {}, he = 0;
		for (int x = 0; x < m; x++)
		{
			for (int y = 0; y < s; y++)
			{
				cin >> A[x][y];
			}
		}
		for (int x = 0; x < s; x++)
		{
			for (int y = 0; y < n; y++)
			{
				cin >> B[x][y];
			}
		}
		for (int x = 0; x < m; x++)
		{
			for (int y = 0, z = 0; y < n;)
			{	
					he += (A[x][z] * B[z][y]);
					z++;
					C[x][y] = he;
					if (z >= s)
					{
						y++;
						z = 0;
						he = 0;
					}
			}
		}
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << C[i][j] << " ";
			}
			cout << endl;
		}
	}

	system("pause");
	return 0;
}*/