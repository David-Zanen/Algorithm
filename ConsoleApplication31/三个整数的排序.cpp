/*#include<iostream>
using namespace std;

int main()
{
	int san[3] = { 0 };
	cin >> san[0] >> san[1] >> san[2];
	//int max = 0, min = san[0];
	int d,x,b = 0;

	if (san[0] < san[1])
	{
		x = san[0];
		san[0] = san[1];
		san[1] = x;
	}
	if (san[0] < san[2])
	{
		x = san[0];
		san[0] = san[2];
		san[2] = x;
	}
	if (san[1] < san[2])
	{
		x = san[1];
		san[1] = san[2];
		san[2] = x;
	}
	cout << endl;
	cout << san[0] << " " << san[1] << " " << san[2];
	system("pause");
	return 0;
}*/