// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// Codeforces - New Year Garland
// Problem Statement - http://codeforces.com/contest/1279/problem/A
// Main.cpp


#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	long long int r, g, b, maxNum;
	int t;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> r >> g >> b;
		if (r >= g && r >= b)
			maxNum = r;
		else if (g >= r && g >= b)
			maxNum = g;
		else if(b >= r && b >= g)
			maxNum = b;

		if (r == g == b)
			cout << "Yes" << endl;
		else
		{
			if (maxNum == b && r + g == b - 1)
				cout << "Yes" << endl;
			else if (maxNum == g && r + b == g - 1)
				cout << "Yes" << endl;
			else if (maxNum == r && g + b == r - 1)
				cout << "Yes" << endl;
			else if (maxNum == b && r + g >= b)
				cout << "Yes" << endl;
			else if (maxNum == g && r + b >= g)
				cout << "Yes" << endl;
			else if (maxNum == r && g + b >= r)
				cout << "Yes" << endl;
			else if (maxNum == b && r + g < b - 1)
				cout << "No" << endl;
			else if (maxNum == g && r + b < g - 1)
				cout << "No" << endl;
			else if (maxNum == r && g + b < r - 1)
				cout << "No" << endl;
		}
	}

	return 0;
}