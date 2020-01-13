// Bismilahir Rahmanir Rahim
// Nafis Chowdhury
// Codeforces - Good Number
// Problem Statement - https://codeforces.com/contest/365/problem/A
// Main.cpp


#include<iostream>
#include<math.h>
#include<algorithm>
#include<set>
using namespace std;

int main()
{
	set <int> st;
	int n, k, userInput, tempSize, count = 0;
	int tempCount = 0;

	cin >> n >> k;
	tempSize = k + 1;  // this is because while k = 6 means 0 -> 6, so needs to add 1 to k value

	for (int i = 0; i < n; i++)
	{
		cin >> userInput;

		while (userInput != 0)
		{
			st.insert(userInput % 10);
			userInput = userInput / 10;
		}
		
		for (int j = 0; j <= k; j++)
		{
			if (st.count(j) == 1)  // determine true or false if 'j' is in the set or not
				tempCount++;
			else
				break;
		}

		if (tempCount == tempSize)
			count++;

		tempCount = 0;
		st.clear();
	}

	cout << count << endl;

	return 0;
}