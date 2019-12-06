// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// Codeforces Round #351 (VK Cup 2016 Round 3, Div. 2 Edition)
// Bear and Game
// Problem Statement- http://codeforces.com/contest/673/problem/A
// Main.cpp


#include<iostream>
using namespace std;

int main()
{
	int input;
	cin >> input;

	int minuteArray[91];
	minuteArray[0] = 0;
	for (int i = 1; i <= input; i++)
		cin >> minuteArray[i];

	for (int i = 0; i <= input; i++)
	{
		if (minuteArray[input] <= 15 /*&& minuteArray[1] <= 15*/)  // while the last element of the array is less 15, we only need to print the sum of last element & 15
		{
			cout << minuteArray[input] + 15 << endl;
			break;
		}
		else if (minuteArray[input] >= 75 && input >= 6)  // while the last element of the array is bigger than 75 and total element in the array is bigger than or equal to 6, then we only need to print 90 
		{
			cout << 90 << endl;
			break;
		}
		else if (minuteArray[i + 1] - minuteArray[i] <= 15 /*&& minuteArray[i + 1] < 75*/)
		{
			while (i == input)
			{
				cout << minuteArray[i] << endl;
				break;
			}
			continue;
		}
		else /*if (minuteArray[i] < 75)*/
		{
			cout << minuteArray[i] + 15 << endl;
			break;
		}
	}

	cout << endl;
	system("pause");
	return 0;
}