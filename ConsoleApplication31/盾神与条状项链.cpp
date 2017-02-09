/*#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	int m, n = 0;
	cin >> n >> m;
	vector<int> a;
	int b;
	a.reserve(10000);
	for (int i = 0; i < n; i++)
	{
		b = 0;
		cin >> b;
		a.push_back(b);
	}
	string fs;
	int y, e;
	for (int o = 0; o < m; o++)
	{
		cin >> fs;
		y = 0, e = 0;
		vector<int>::iterator it;
		if (fs == "ADD")
		{
			cin >> y >> e;
			it = find(a.begin(), a.end(), y);
			a.insert(it, e);
		}
		else
		{
			cin >> y;
			it = find(a.begin(), a.end(), y);
			a.erase(it, it + 1);
		}
	}
	cout << a.size() << endl;
	for (int i = 0; i < a.size(); i++)
		cout << a[i] << " ";
	cout << endl;
	system("pause");
	return 0;
}*/