#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define yes cout << "YES" \
                 << "\n"
#define no cout << "NO" \
                << "\n"
#define pi pair<int, int>
#define vi vector<int>
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
        int mn = INT_MAX, mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            mn = min(mn, ar[i]);
            mx = max(mn, ar[i]);
        }
        for (int i = 0; i < n; i++)
        {
            mn &= ar[i];
            mx |= ar[i];
        }
        cout << max((mx - mn), mx - mn) << nl;
    }

    return 0;
}

// Accepted