#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(int argc, char const *argv[])
{
    ll n, k;
    cin >> n >> k;
    ll ar[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    multiset<ll> ml;
    ll l = 0, r = 0, result = 0;

    while (r < n)
    {
        ml.insert(ar[r]);
        ll mn, mx;
        mn = *ml.begin();
        mx = *ml.rbegin();
        if ((mx - mn) <= k)
        {
            result += (r - l) + 1;
        }
        else
        {
            while (l < r)
            {
                mn = *ml.begin();
                mx = *ml.rbegin();
                if ((mx - mn) <= k)
                {
                    break;
                }
                auto it = ml.find(ar[l]);
                ml.erase(it);
                l++;
            }
            mn = *ml.begin();
            mx = *ml.rbegin();
            if ((mx - mn) <= k)
            {
                result += (r - l) + 1;
            }
        }
        r++;
    }
    cout << result << "\n";

    return 0;
}

// Accepted