/*#include<iostream>
#include<string>
using namespace std;

int main()
{
	string mes="";
	cin >> mes;
	int i = 0;
	while (mes[i] != 0)
	{
		string wei;
		for (; mes[i] != '|';)
		{
			wei = wei + mes[i];
			if (mes[i + 1] == 0)
				break;
			else
				i++;
		}
		if (wei == "*-")
			cout << "a";
		else if (wei == "-***")
			cout << "b";
		else if (wei == "-*-*")
			cout << "c";
		else if (wei == "-**")
			cout << "d";
		else if (wei == "*")
			cout << "e";
		else if (wei == "**-*")
			cout << "f";
		else if (wei == "--*")
			cout << "g";
		else if (wei == "****")
			cout << "h";
		else if (wei == "**")
			cout << "i";
		else if (wei == "*---")
			cout << "j";
		else if (wei == "-*-")
			cout << "k";
		else if (wei == "*-**")
			cout << "l";
		else if (wei == "--")
			cout << "m";
		else if (wei == "-*")
			cout << "n";
		else if (wei == "---")
			cout << "o";
		else if (wei == "*--*")
			cout << "p";
		else if (wei == "--*-")
			cout << "q";
		else if (wei == "*-*")
			cout << "r";
		else if (wei == "**")
			cout << "s";
		else if (wei == "-")
			cout << "t";
		else if (wei == "**-")
			cout << "u";
		else if (wei == "***-")
			cout << "v";
		else if (wei == "*--")
			cout << "w";
		else if (wei == "-**-")
			cout << "x";
		else if (wei == "-*--")
			cout << "y";
		else if (wei == "--**")
			cout << "z";
		i++;
	}
	cout << endl;
	system("pause");
	return 0;
}*/