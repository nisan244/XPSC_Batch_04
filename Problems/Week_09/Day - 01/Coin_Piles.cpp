#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
#define srt(ar) sort(ar.begin(), ar.end())
#define rsrt(ar) sort(ar.rbegin(), ar.rend())
#define allsum(ar) accumulate(ar.begin(), ar.end(), 0ll)
#define pi pair<int, int>
#define vi vector<ll>
#define nl "\n"
#define nnl cout << "\n"

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll T;
    cin >> T;
    while (T--)
    {
        int x, y;
        cin >> x >> y;

        ll mx_val = max(x, y) / 2;
        ll mn_val = min(x, y);

        if (mx_val > mn_val)
        {
            no;
        }
        else if ((x + y) % 3 == 0)
        {
            yes;
        }
        else
        {
            no;
        }
    }

    return 0;
}

// Accepted