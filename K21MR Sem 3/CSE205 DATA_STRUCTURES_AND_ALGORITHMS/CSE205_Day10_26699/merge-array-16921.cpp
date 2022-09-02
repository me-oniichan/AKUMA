#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1;
    cin >> n1;
    if ((n1 < 0 || n1 >= 20))
    {
        cout << "Invalid Array";
        return 0;
    }
    int arr1[n1];
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < n1 - 1; i++)
    {
        if (arr1[i] > arr1[i + 1])
        {
            cout << "Incorrect Array Elements";
            return 0;
        }
    }
    int n2;
    cin >> n2;
    if ((n2 < 0 || n2 >= 20))
    {
        cout << "Invalid Array";
        return 0;
    }
    int arr2[n2];
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }
    for (int i = 0; i < n1 - 1; i++)
    {
        if (arr1[i] > arr1[i + 1])
        {
            cout << "Incorrect Array Elements";
            return 0;
        }
    }
    return 0;
}