// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// Codeforces - Vladik and Courtesy
// Problem Statement - http://codeforces.com/contest/811/problem/A
// Main.cpp


#include<iostream>
using namespace std;

int main()
{
	long long int a, b, i;
	cin >> a >> b;
	int j = 1;
	i = 1;

	while (a >= 0 && b >= 0)
	{
		if (j == 1)
		{
			a = a - i;
			j = 0;
			i++;
		}
		else if (j == 0)
		{
			b = b - i;
			j = 1;
			i++;
		}
	}

	if (a < 0)
		cout << "Vladik" << endl;
	else
		cout << "Valera" << endl;

	return 0;
}