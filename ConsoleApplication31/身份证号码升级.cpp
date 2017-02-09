/*#include<iostream>
using namespace std;

int main()
{
	char jSF[16];
	cin >> jSF;
	int xSF[17];
	for (int o = 0, xb = 0; o < 15; o++, xb++)
	{
		if (o == 6)
		{
			xSF[xb] = 1;
			xSF[xb + 1] = 9;
			xb = 8;
		}
		xSF[xb] = jSF[o] - 48;
	}
	int he = 7 * xSF[0] + 9 * xSF[1] + 10 * xSF[2] + 5 * xSF[3] + 8 * xSF[4] + 4 * xSF[5] + 2 * xSF[6] + 1 * xSF[7] + 6 * xSF[8] + 3 * xSF[9] + 7 * xSF[10] + 9 * xSF[11] + 10 * xSF[12] + 5 * xSF[13] + 8 * xSF[14] + 4 * xSF[15] + 2 * xSF[16];
	char bm[11] = { '1', '0' ,'x' ,'9' ,'8' ,'7' ,'6' ,'5' ,'4' ,'3' ,'2' };
	he %= 11;
	for (int s = 0; s < 17; s++)
		cout << xSF[s];
	cout << bm[he];
	cout << endl;
	system("pause");
	return 0;
}*/