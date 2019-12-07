// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// Codeforces Round #351 (VK Cup 2016 Round 3, Div. 2 Edition)
// Bear and Game
// Problem Statement- http://codeforces.com/contest/673/problem/A
// Main.cpp


#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main()
{
    int input;

    cin >> input;
    int minuteArray[input];
    minuteArray[input] = 90;

    for (int i = 0; i < input; i++)
        cin >> minuteArray[i];

    for (int i = 0; i < input; i++)
    {
        if (minuteArray[0] > 15)
        {
            cout << 15 << endl;
            break;
        }
        else if (minuteArray[i + 1] - minuteArray[i] <= 15)
        {
            if (i + 1 != input)
                continue;
            else if (minuteArray[input] >= 75)
            {
                cout << 90 << endl;
                break;
            }
            else
            {
                cout << minuteArray[i] + 15 << endl;
                break;
            }
        }
        else
        {
            cout << minuteArray[i] + 15 << endl;
            break;
        }
    }

    cout << endl;
    return 0;
}