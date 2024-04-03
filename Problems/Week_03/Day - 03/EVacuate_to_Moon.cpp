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
        ll n, m, h;
        cin >> n >> m >> h;
        vector<ll> ar(n), ar_2(m);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> ar_2[i];
        }
        sort(ar.rbegin(), ar.rend());
        sort(ar_2.rbegin(), ar_2.rend());
        ll sum = 0, mn_val = min(n, m);
        for (int i = 0; i < mn_val; i++)
        {
            sum += min(ar[i], (ar_2[i]) * h);
        }
        cout << sum << nl;
    }

    return 0;
}

// Accepted
