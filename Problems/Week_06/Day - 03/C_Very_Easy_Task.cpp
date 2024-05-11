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

bool ok(int m, int n, int a, int b)
{
    if (m < min(a, b))
    {
        return false;
    }
    ll t = 1;
    m -= min(a, b);
    t += (m / a) + (m / b);
    
    return t >= n;
}

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, a, b;
    cin >> n >> a >> b;

    ll l = 0, r = max(a, b), mid;
    while (l + 1 < r)
    {
        mid = (l + r) / 2;
        if (ok(mid, n, a, b))
        {
            r = mid;
        }
        else
        {
            l = mid;
        }
    }
    cout << r << nl;

    return 0;
}

// Accepted


/*

// INPUT:
4 1 1

// OUTPUT:
3
-----------------------------
// INPUT:
5 1 2

// OUTPUT:
4

*/