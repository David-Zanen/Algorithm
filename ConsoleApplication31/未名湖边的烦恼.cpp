/*#include<iostream>
#include<math.h>
using namespace std;

int pailie(int m, int n)
{
	if (m < n)
		return 0;
	else if (n == 0)
		return 1;
	else
		return pailie(m - 1, n) + pailie(m, n - 1);
}

int main()
{
	int m, n;
	cin >> m >> n;
	if (0 <= m&&m <= 18 && 0 <= n&&n <= 18)
	{
		cout << pailie(m, n) << endl;
	}

	system("pause");
	return 0;
}
*/