#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<ll> ar(n);
    ll sum = 0;
    ll mn_odd = LLONG_MAX;

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        sum += ar[i];
        if (ar[i] % 2 != 0)
        {
            mn_odd = min(mn_odd, ar[i]);
        }
    }
    if (sum % 2 != 0)
    {
        cout << sum - mn_odd << "\n";
    }
    else
    {
        cout << sum << "\n";
    }

    return 0;
}

// Accepted