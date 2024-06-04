#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
#define srt(ar) sort(ar.begin(), ar.end())
#define rsrt(ar) sort(ar.rbegin(), ar.rend())
#define pi pair<int, int>
#define vi vector<ll>
#define nl "\n"
#define nnl cout << "\n"

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vi ar(n);

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    srt(ar);

    ll val_sum = 0, result = 0;
    for (int i = 0; i < n; i++)
    {
        ll val = ar[n - 1] - ar[i];
        val_sum += val;
    }

    for (int i = 0; i < n - 1; i++)
    {
        result = __gcd(result, ar[n - 1] - ar[i]);
    }

    cout << (val_sum / abs(result)) << " " << result << nl;

    return 0;
}

// Accepted