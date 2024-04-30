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
        ll n, q;
        cin >> n >> q;
        vi ar(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        sort(ar.rbegin(), ar.rend());
        vi pre(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            pre[i + 1] = pre[i] + ar[i];
        }
        // for (int i = 1; i <= n; i++)
        // {
        //     cout << pre[i] << " ";
        // }
        // nnl;
        // nnl;

        while (q--)
        {
            ll x;
            cin >> x;
            ll l = 1, r = n, mid, result = -1;
            while (l <= r)
            {
                mid = (l + r) / 2;
                if (pre[mid] >= x)
                {
                    result = mid;
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }

            cout << result << nl;
        }
    }

    return 0;
}

// Accepted

/*

// INPUT:
3
8 7
4 3 3 1 1 4 5 9
1
10
50
14
15
22
30
4 1
1 2 3 4
3
1 2
5
4
6


// OUTPUT:
1
2
-1
2
3
4
8
1
1
-1

*/