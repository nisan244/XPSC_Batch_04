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

    ll n;
    cin >> n;
    vi ar(n);
    ll result = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    for (int i = 1; i < n; i++)
    {
        if (ar[i] < ar[i - 1])
        {
            result += (ar[i - 1] - ar[i]);
            ar[i] = ar[i - 1];
        }
    }

    cout << result << nl;

    return 0;
}

// Accepted