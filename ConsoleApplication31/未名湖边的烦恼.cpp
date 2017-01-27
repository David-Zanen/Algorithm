/*#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int m, n;
	cin >> m >> n;
	if (1 <= m&&m <= 18 && 1 <= n&&n <= 18)
	{
		int js=1;
		for (int x = m; x > m-n; x--)
		{
			js *= x;
		}
		for (int y = n; y >= 1; y--)
		{
			js /= y;
		}
		js += n;
		cout << js << endl;
	}

	system("pause");
	return 0;
}*/