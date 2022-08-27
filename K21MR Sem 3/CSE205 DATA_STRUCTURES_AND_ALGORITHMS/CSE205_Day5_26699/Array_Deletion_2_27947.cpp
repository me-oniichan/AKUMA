// Consider Jeevan is visiting Nehru Zoo. She has seen there are N animals standing in a row. She have written name of all animals in sequence one after the other. There are few animals which are repeating in the list. Write a program to remove these duplicate names.
// Input Format
// The first line will be containing one Integer representing a number of animals N. The second line will contain N Strings representing the names of the animals with space.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "Invalid Input";
        exit(0);
    }
    string arr[n], arr2[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j < i; j++)
            if (arr[i] == arr[j])
                break;
        if (i == j)
            cout << arr[i] << " ";
    }
    return 0;
}