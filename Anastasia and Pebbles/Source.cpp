// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// Codeforces - 407A - Anastasia and Pebbles
// Problem Statement - http://codeforces.com/contest/789/problem/A?mobile=false
// Main.cpp


#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n, w;
	long int answer;
	double day = 0;
	long double k;

	cin >> n >> k;
	int arr[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		day = day + ceil(arr[i] / k);
	}
	answer = ceil(day / 2);

	cout << answer << endl;

	return 0;
}