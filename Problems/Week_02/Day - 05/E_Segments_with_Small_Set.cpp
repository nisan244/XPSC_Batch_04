#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(int argc, char const *argv[])
{
    ll n, s;
    cin >> n >> s;
    ll ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    ll result = 0;
    ll L = 0, R = 0;
    map<ll, ll> mp;
    while (R < n)
    {
        mp[ar[R]]++;
        if (mp.size() <= s)
        {
            result += (R - L) + 1;
        }
        else
        {
            while (mp.size() > s)
            {
                mp[ar[L]]--;
                if (mp[ar[L]] == 0)
                {
                    mp.erase(ar[L]);
                }
                L++;
            }
            result += (R - L) + 1;
        }
        R++;
    }
    cout << result << "\n";

    return 0;
}

// Accepted