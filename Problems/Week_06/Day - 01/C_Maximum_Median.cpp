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

    int n, k;
    cin >> n >> k;
    vi ar(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    sort(ar.begin(), ar.end());
    auto ok = [&](ll mid)
    {
        ll cnt = 0;
        for (int i = (n / 2); i < n; i++)
        {
            cnt += (ar[i] < mid ? (mid - ar[i]) : 0);
        }
        return cnt <= k;
    };

    ll l = 1, r = 2e9, mid, result = -1;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
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