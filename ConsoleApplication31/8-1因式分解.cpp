/*#include<iostream>
using namespace std;
int di = 2;
void ys(int s)
{
	int j = s;
	for (int i = 2; i<=j;)
	{
		int op = 0;
		if (s%i == 0)
		{
			cout << i;
			if (s / i != 1)
			{
				op = 1;
			}
			s /= i;
		}
		else
			i++;
		if (op == 1)
		{
			cout << '*';
		}
	}
}
void ysfj(int s)
{
	if (s % di == 0)
	{
		cout << di;
		if (s / di != 1)
		{
			cout << '*';
			s /= di;
			ysfj(s);
		}
	}
	else
	{
		di++;
		ysfj(s);
	}
}

int main()
{
	int shu;
	cin >> shu;
	ysfj(shu);

	system("pause");
	return 0;
}*/