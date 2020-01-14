// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// Codeforces - IQ Test
// Problem Statement - https://codeforces.com/contest/25/problem/A
// Main.cpp


#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;

int main()
{
	stack <int> s1, s2;
	int n;
	cin >> n;
	int arr[n];

	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];

		if (arr[i] % 2 != 0)
			s1.push(i);
		else
			s2.push(i);
	}

	if (s1.size() == 1)
		cout << s1.top() << endl;
	else
		cout << s2.top() << endl;

	return 0;
}