/*#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int sou = 0;
	cin >> sou;
	if (sou <= 100000)
	{
		sou -= 1;
		__int64 ch = 2;
		for (int n = 3; n < 100000; n++)
		{
			int y = 1;
			for (int a = 2; a < n; a++)
			{
				if (n%a == 0)
				{
					y = 0;
					break;
				}
			}
			if (sou < 1)
				break;
			if (y == 1)
			{
				ch *= n;
				sou--;
			}
		}
		cout << ch%50000 << endl;
	}

	system("pause");
	return 0;
}*/