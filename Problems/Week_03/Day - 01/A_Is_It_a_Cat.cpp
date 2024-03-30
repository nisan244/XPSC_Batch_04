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
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string st_2;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != s[i + 1])
            {
                st_2 += s[i];
            }
            else
            {
                continue;
            }
        }
        // cout << st_2 << "\n";
        if ("meow" == st_2)
        {
            cout << "YES" << nl;
        }
        else
        {
            cout << "NO" << nl;
        }
    }

    return 0;
}

// Accepted

