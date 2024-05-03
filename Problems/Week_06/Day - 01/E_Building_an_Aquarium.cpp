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

    int T;
    cin >> T;
    while (T--)
    {
        ll n, k;
        cin >> n >> k;
        vi ar(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        ll l = 1, r = 1e10;
        while (l < (r - 1))
        {
            ll t_w = 0, mid = l + (r - l) / 2;
            for (int i = 0; i < n; i++)
            {
                if (ar[i] < mid)
                {
                    t_w += (mid - ar[i]);
                }
            }
            if (t_w > k)
            {
                r = mid;
            }
            else
            {
                l = mid;
            }
        }
        cout << l << nl;
    }

    return 0;
}

// Accepted