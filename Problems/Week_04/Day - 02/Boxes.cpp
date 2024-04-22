#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"
#define nnl cout << "\n"

int main(int argc, char const *argv[])
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> ar(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        sort(ar.begin(), ar.end());
        ll result = 0, mx_val = ar[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            if (mx_val >= ar[i])
            {
                mx_val ^= ar[i];
            }
            else
            {
                mx_val = ar[i];
                result++;
            }
        }
        cout << result + 1 << nl;
    }

    return 0;
}

// Accepted