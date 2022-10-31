#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int arr[], int n, int k){
    int start = 0, end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == k)
            return mid;
        else if (arr[mid] < k)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}

int main(){
    int n;
    cin >> n;
    if (n == 1){
        int arr[5];
        arr[0] = n;
        for (int i = 1; i < 5; i++)
        {
            cin >> arr[i];
        }
        int k;
        cin>>k;
        cout<<binarySearch(arr, n, k);
    }
    else{
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int k;
        cin>>k;
        cout<<binarySearch(arr, n, k);
    }

    return 0;
}