/*#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	int n;
	string zfc = "";
	cin >> n;
	if (n > 0)
	{
		int i, max=1, z=0, k=0,g=0;
		int kai = 0, da;
		string *bz, wei[60];
		bz = new string[61];
		cin >> zfc;
		da = 0;
		i = zfc.length();
		if (n > i || i > 60)
		{
			system("pause");
			return 0;
		}
		//transform(zfc.begin(), zfc.end(), zfc.begin(), tolower);
		while (true)
		{
			for (int t = 0; t <= i-n; t++)
			{
				if (k + n > i)
				{
					kai = 1;
					break;
				}
				int s; z = 0;
				for (s = 0; s < n; s++)
				{
					if (zfc[k + s] == zfc[t + s])
						z++;
					bz[s] = zfc[k + s];
				}
				if (z == n)
					g += 1;
				bz[s + 1] = "";
			}
			if (kai == 1)
			{
				for (int b = 0; bz[b] != ""; b++)
					wei[k] += bz[b];
				wei[k] += "";
				break;
			}
			else
			{
				if (max < g)
				{
					max = g;
					da = k;
				}
				for (int b = 0; bz[b] != ""; b++)
					wei[k] += bz[b];
				wei[k] += "";
				k++;
			}
			g = 0;
		}
		cout << wei[da];
		cout << endl;
	}

	system("pause");
	return 0;
}*/
