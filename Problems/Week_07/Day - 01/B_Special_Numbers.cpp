#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
#define srt(ar) sort(ar.begin(), ar.end())
#define rsrt(ar) sort(ar.rbegin(), ar.read())
#define pi pair<int, int>
#define vi vector<ll>
#define nl "\n"
#define nnl cout << "\n"
const ll MOD = 1e9 + 7;

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
        ll val = 1, result = 0;
        for (int i = 0; i < 31; i++)
        {
            if (k & (1 << i))
            {
                result = (val + result) % MOD;
                // cout << result << " ";
                // cout << 1 << " ";
            }
            // else
            // {
            //     cout << 0 << " ";
            // }
            val *= n;
            val %= MOD;
        }
        // nnl;

        cout << result << nl;
    }

    return 0;
}

// Accepted