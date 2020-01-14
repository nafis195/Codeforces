// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// Codeforces - Playing with Dice
// Problem Statement - https://codeforces.com/contest/378/problem/A
// Main.cpp


#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
	int a, b;
	int countA = 0;
	int countB = 0;
	int draw = 0;

	cin >> a >> b;
	for (int i = 1; i <= 6; i++)
	{
		if (abs(a - i) < abs(b - i))
			countA++;
		else if (abs(a - i) > abs(b - i))
			countB++;
		else
			draw++;
	}
	cout << countA << ' ' << draw << ' ' << countB << endl;

	return 0;
}