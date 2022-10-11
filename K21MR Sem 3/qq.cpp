#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        long long len = s.length();
        long long c1 = 0;
        long long c2 = 0;
        for (int i = 0; i < len - 1; i++)
        {
            if (s[i] == 'a' && s[i + 1] == 'b')
                c1++;
        }
        for (int i = 0; i < len - 1; i++)
        {
            if (s[i] == 'b' && s[i + 1] == 'a')
                c2++;
        }
        long long sum = 0;
        if (c1 == 0 && c2 == 0)
            sum = 1;
        else
            sum = pow(2, c1 + c2);
        sum = sum % 998244353;
        cout << sum << endl;
    }
    return 0;
}