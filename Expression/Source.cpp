// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// CodeForces - Expression
// Problem Statement - http://codeforces.com/contest/479/problem/A
// Main.cpp


#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	int a, b, c;
	int max[8];

	cin >> a >> b >> c;
	for (int i = 0; i < 8; i++)
	{
		if (i == 0)
			max[0] = (a * b) + c;
		else if (i == 1)
			max[1] = (a + b) + c;
		else if (i == 2)
			max[2] = (a * b) * c;
		else if (i == 3)
			max[3] = (a + b) * c;
		else if (i == 4)
			max[4] = a + (b * c);
		else if (i == 5)
			max[5] = a + (b + c);
		else if (i == 6)
			max[6] = a * (b * c);
		else
			max[7] = a * (b + c);
	}
	cout << *max_element(max, max + 8);

	return 0;
}