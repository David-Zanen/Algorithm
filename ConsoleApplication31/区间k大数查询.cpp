/*#include<iostream>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	if (n <= 1000)
	{
		int da = 0, xiao = 1000000, m;
		int *xl = new int[n];
		for (int h = 0; h < n; h++)
		{
			cin >> xl[h];
		}
		int l, r, k;
		cin >> m;
		if (m <= 1000)
		{
			int *z = new int[m];
			for (int c = 0; c < m; c++)
			{
				cin >> l >> r >> k;
				if (k <= (r - l + 1))
				{
					int *p = new int[r - l + 1]; int ge = r - l;
					for (int a = l - 1, b = 0; a < r; a++)
					{
						p[b] = xl[a];
						b++;
					}
					for (int chu = 0; chu < r - l + 1; chu++)
					{
						for (int xb = chu + 1; xb < r - l + 1; xb++)
						{
							if (p[xb] < p[chu])
							{
								int e = p[xb];
								p[xb] = p[chu];
								p[chu] = e;
							}
						}
					}
					for (; k; k--)
					{
						z[c] = p[ge];
						ge--;
					}
					delete []p;
				}
			}
			for (int shu = 0; shu < m; shu++)
				cout << z[shu] << endl;
			delete []z;
		}
		delete []xl;
	}
	

	system("pause");
	return 0;
}*/