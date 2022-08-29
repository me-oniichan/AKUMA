#include <iostream>
using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;
    char arr[n];
    int track[n];
    track[0] = -1;
    if (n <= 4 || n >= 20)
    {
        cout << -1;
        exit(0);
    }
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
        if (arr[i] == 'W')
        {
            track[count] = i;
            count++;
        }
    if (track[0] == -1)
    {
        cout << -1 << endl;
        cout << 0;
        exit(0);
    }
    for (int j = 0; j < count; j++)
        if (j == count - 1)
            cout << track[j];
        else
            cout << track[j] << " ";
    cout << endl;
    cout << count;
    return 0;
}