#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define yes cout << "YES" \
                 << "\n"
#define no cout << "NO" \
                << "\n"
#define pi pair<int, int>
#define vi vector<ll>
#define nl "\n"
#define nnl cout << "\n"

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll result = -1;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            result &= x;
        }
        cout << result << nl;
    }

    return 0;
}

// Accepted