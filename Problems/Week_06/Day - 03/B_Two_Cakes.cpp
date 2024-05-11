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
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, b;
    cin >> n >> a >> b;

    auto ok = [&](ll val)
    {
        if ((a / val) == 0 || (b / val == 0))
        {
            return false;
        }
        ll all = (a / val) + (b / val);
        return all >= n;
    };

    ll l = 1, r = max(a, b), mid, result = 0;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (ok(mid))
        {
            result = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << result << nl;

    return 0;
}

// Accepted

/*

// INPUT:
5 2 3

// OUTPUT:
1

-------------------------

// INPUT:
4 7 10

// OUTPUT:
3

*/