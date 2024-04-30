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
    //  1 3 4 10 10
    ll k;
    cin >> k;
    while (k--)
    {
        ll l, r;
        cin >> l >> r;
        auto val = upper_bound(ar.begin(), ar.end(), r);
        auto val_2 = lower_bound(ar.begin(), ar.end(), l);

        cout << (val - ar.begin()) - (val_2 - ar.begin()) << " ";
    }

    return 0;
}

// Accepted

/*

// INPUT:
5
10 1 10 3 4
4
1 10
2 9
3 4
2 2

// OUTPUT:
5 2 2 0

*/