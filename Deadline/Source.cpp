// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// Codeforces - Deadline
// Problem Statement - http://codeforces.com/contest/1288/problem/A
// Main.cpp


#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	int n, d, testCases, answer, temp;

	cin >> testCases;
	for (int i = 0; i < testCases; i++)
	{
		cin >> n >> d;

		temp = sqrt(d);
		answer = (temp - 1) + ((d + temp - 1) / temp);

		if (answer <= n)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;
}