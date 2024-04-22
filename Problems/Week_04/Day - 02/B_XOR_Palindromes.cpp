#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"
#define nnl cout << "\n"

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string ar(n + 1, '0');
        int l = 0, r = n - 1, count = 0;
        while (l < r)
        {
            if (s[l] != s[r])
            {
                count++;
            }
            l++;
            r--;
        }
        ar[count] = '1';
        for (int i = count; i <= n - count; i += 2)
        {
            ar[i] = '1';
            if (n % 2)
            {
                ar[i + 1] = '1';
            }
        }
        cout << ar << nl;
    }

    return 0;
}

// Accepted