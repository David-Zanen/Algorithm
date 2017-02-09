/*#include<iostream>
#include<malloc.h>
#include<iomanip>
using namespace std;

struct fushu {
	double real;
	double i;
};
fushu* add(fushu a, fushu b) {
	fushu* ret = (fushu*)malloc(sizeof(fushu));
	ret->real = a.real + b.real;
	ret->i = a.i + b.i;
	return ret;
}
fushu* inus(fushu a, fushu b) {
	fushu* ret = (fushu*)malloc(sizeof(fushu));
	ret->real = a.real - b.real;
	ret->i = a.i - b.i;
	return ret;
}
fushu* multiply(fushu a, fushu b) {
	fushu* ret = (fushu*)malloc(sizeof(fushu));
	ret->real = a.real*b.real - a.i*b.i;
	ret->i = a.real*b.i + a.i*b.real;
	return ret;
}
fushu* divide(fushu a, fushu b) {
	fushu* ret = (fushu*)malloc(sizeof(fushu));
	if (b.real*b.real + b.i*b.i == 0)
		return 0;
	ret->real = (a.real*b.real + a.i*b.i) / (b.real*b.real + b.i*b.i);
	ret->i = (a.i*b.real - a.real*b.i) / (b.real*b.real + b.i*b.i);
	return ret;
}
int main()
{
	char sign;
	fushu m;
	fushu n;
	cin >> m.real >> m.i >> sign >> n.real >> n.i;
	if (sign == '+') {
		add(m, n);
		if (add(m, n)->i < 0)
		{
			cout << add(m, n)->real << add(m, n)->i << "i" << endl;
		}
		else
			cout << add(m, n)->real << "+" << add(m, n)->i << "i" << endl;
	}
	if (sign == '-') {
		inus(m, n);
		if (inus(m, n)->i < 0)
		{
			cout << inus(m, n)->real << inus(m, n)->i << "i" << endl;
		}
		else
			cout << inus(m, n)->real << "+" << inus(m, n)->i << "i" << endl;
	}
	if (sign == '*') {
		multiply(m, n);
		if (multiply(m, n)->i < 0)
		{
			cout << multiply(m, n)->real << multiply(m, n)->i << "i" << endl;
		}
		else
			cout << multiply(m, n)->real << "+" << multiply(m, n)->i << "i" << endl;
	}
	if (sign == '/') {
		if (divide(m, n) == 0)
			cout << "error" << endl;
		else
		{
			if (divide(m, n)->i < 0)
			{
				cout << divide(m, n)->real << divide(m, n)->i << "i" << endl;
			}
			else
				cout << divide(m, n)->real << "+" << divide(m, n)->i << "i" << endl;
		}
	}
	system("pause");
	return 0;
}*/
