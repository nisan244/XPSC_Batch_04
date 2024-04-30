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
    int n, l, r, k;
    cin >> n >> l >> r >> k;

    vector<int> ar(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int count = 0;
    for (int i = 0; i < (1 << n); i++)
    {
        int sum = 0, mn = INT_MAX, mx = INT_MIN;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                sum += ar[j];
                mn = min(mn, ar[j]);
                mx = max(mx, ar[j]);
            }
        }

        if (sum >= l && sum <= r && mx - mn >= k)
        {
            count++;
        }
    }
    cout << count << nl;

    return 0;
}

// Accepted

/*

// INPUT:
3 5 6 1
1 2 3

// OUTPUT:
2

-----------

// INPUT:
5 25 35 10
10 10 20 10 20

// OUTPUT:
6

*/