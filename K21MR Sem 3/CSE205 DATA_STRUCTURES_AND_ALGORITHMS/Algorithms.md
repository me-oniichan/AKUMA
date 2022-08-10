# Programs
## Traversing an array
```cpp
#include<iostream>
using namespace std;
int main()
{
    int i,arr[5]; //declare array of size 5 and counter
    cout<<"Enter 5 elements: ";
    for(int i=0;i<5;i++) //loop for array input
    cin>>arr[i]; //if foor loop has one action then curly braces are optional
    cout<<"The array elements are: ";
    for(i=0;i<5;i++) //loop for array output
    cout<<arr[i]<<" ";
    return 0;
}
```
---
## Sum of prime numbers in an array
```cpp
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, arr[5], sum=0; //initialise counter
    cout<<"Enter array elements: ";
    for(i=0;i<5;i++) 
    {
        cin>>arr[i]; //take array input
    }
    for(i=0;i<5;i++) //iterate for prime
    {
        bool isPrime = true; 
        for(int j=2;j<arr[i];j++) //check for prime condition
        {
            if(arr[i]%j == 0)
            {
                isPrime = false; //co-prime found
                break;
            }
        }
        if(isPrime)
        sum+=arr[i]; //add prime value to sum
    }
    cout<<"The sum of all elements in the array is: "<<sum;
    return 0;
}
```
---
## Insertion of new element in an array
```cpp
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100], n, ele, k;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter element and index number: ";
    cin>>ele>>k;
    for(int i=n-1;i>=k-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[k-1]=ele;
    for(int i=0;i<n+1;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
```
---
## Deletion of an element in an array
```cpp
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100], n, k;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter index number: ";
    cin>>k;
    for(int i=k;i<n;i++) //initialise counter to given index
    {
        arr[i-1]=arr[i]; //shift leftwards
    }
    for(int i=0;i<n-1;i++)
    {
        cout<<arr[i]<<" ";
    }
	return 0;
}
```
---
## Deletion of a specific element
```cpp

```