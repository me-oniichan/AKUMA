#include <bits/stdc++.h>
using namespace std;
int main()
{
    int element, pos = -1;
    int arr[10];
    for (int i = 0; i < 10; i++)
        cin >> arr[i];
    cin >> element;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == element)
        {
            pos = i; 
            break;
        }
    }
    if (pos == -1)
    {
        cout << "ELEMENT NOT FOUND";
    }
    else
    {
        cout << pos + 1;
    }
    return 0;
}