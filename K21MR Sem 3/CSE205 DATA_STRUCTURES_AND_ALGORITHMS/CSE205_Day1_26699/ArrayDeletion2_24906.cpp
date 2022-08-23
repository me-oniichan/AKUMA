#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, k;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> k;
    for (int i = k; i < n; i++)
    {
        arr[i] = arr[i+1];
    }
    for (int i = 0; i < n - 1; i++)
    {
        cout << arr[i];
    }
    return 0;
}