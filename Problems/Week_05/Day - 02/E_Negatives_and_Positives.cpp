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
        int n;
        cin >> n;
        vi ar(n);
        ll count = 0, sum = 0, mn_val = LLONG_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            sum += abs(ar[i]);
            mn_val = min(mn_val, abs(ar[i]));
            if (ar[i] < 0)
            {
                count++;
            }
        }
        if (count % 2 != 0)
        {
            sum -= (2 * mn_val);
        }
        cout << sum << nl;
    }

    return 0;
}

// Accepted