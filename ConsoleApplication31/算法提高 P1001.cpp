/*#include<iostream>
using namespace std;

int main()
{
	char bcs[9]; int cs;
	cin >> cs;
	cin >> bcs;
	long long jg = 0;
	//int q;
	//for (q = 0; cs[q] != '\0'; q++);
	int h;
	for (h = 0; bcs[h] != '\0'; h++);
	int z = 0;
	long long wei;
	for (int x = h - 1; x >= 0; x--,z++)
	{
		wei = 1;
		if (z >= 1)
		{
			for (int y = 0; y < z; y++)
			{
				wei *= 10;
			}
			jg += (wei *cs*(bcs[x] - 48));
		}
		else
		{
			jg += (cs*(bcs[x] - 48));
		}
	}
	//for (int o = 0; o < 17; o++)
	cout << jg << endl;
	system("pause");
	return 0;
}*/