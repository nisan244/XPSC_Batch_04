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

    ll n, k;
    cin >> n >> k;
    vi divisor;

    for (ll i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            divisor.push_back(i);
            if ((n / i) != i)
            {
                divisor.push_back(n / i);
            }
        }
    }

    srt(divisor);

    if (k <= divisor.size())
    {
        cout << divisor[k - 1] << nl;
    }
    else
    {
        cout << -1 << nl;
    }

    return 0;
}

// Accepted