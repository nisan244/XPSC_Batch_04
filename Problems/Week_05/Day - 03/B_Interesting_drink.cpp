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
    ll n;
    cin >> n;
    vi ar(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    sort(ar.begin(), ar.end());
    ll q;
    cin >> q;
    while (q--)
    {
        ll x;
        cin >> x;
        auto it = upper_bound(ar.begin(), ar.end(), x);
        cout << it - ar.begin() << nl;
    }

    return 0;
}

// Accepted

/*

// INPUT:
5
3 10 8 6 11
4
1
10
3
11

// OUTPUT:
0
4
1
5

*/