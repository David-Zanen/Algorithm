/*#include<iostream>
using namespace std;

int main()
{
	int jgg[3][3] = {};
	for (int f = 0; f < 3; f++)
	{
		cin >> jgg[f][0] >> jgg[f][1] >> jgg[f][2];
	}
	int x = 0, y = 0, z = 0;
	int shi = 1;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			x += jgg[i][j];
			y += jgg[j][i];
			z += jgg[j][j];
		}
		if (x == y&&y == z&&x == z)
		{
			x = 0, y = 0, z = 0;
			continue;
		}
		else
		{
			shi = 0;
			break;
		}
	}
	if (shi == 0)
		cout << 0 << endl;
	else
		cout << 1 << endl;
	system("pause");
	return 0;
}*/