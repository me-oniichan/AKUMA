#include <bits/stdc++.h>
using namespace std;
void Merge(int a[], int b[], int c[],
           int x, int y)
{
    merge(a, a + x, b, b + y, c);
    for (int i = 0; i < x + y; i++)
    {
        cout << c[i] << endl;
    }
}
int main()
{
    int x, y;
    cin >> x;
    if ((x < 1 || x > 20))
    {
        cout << "Invalid Array";
        return 0;
    }
    int a[x];
    for (int i = 0; i < x; i++)
    {
        cin >> a[i];
    }
    if (!is_sorted(a, a + x))
    {
        cout << "Incorrect Array Elements";
        return 0;
    }
    cin >> y;
    if ((y < 1 || y > 20))
    {
        cout << "Invalid Array";
        return 0;
    }
    if (x == y)
    {
        cout << "Invalid Array";
        return 0;
    }
    int b[y];
    for (int i = 0; i < y; i++)
    {
        cin >> b[i];
    }
    if (!is_sorted(b, b + y))
    {
        cout << "Incorrect Array Elements";
        return 0;
    }
    int c[x + y];
    Merge(a, b, c, x, y);

    return 0;
}