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

ll gcd(ll a, ll b)
{
    return __gcd(a, b);
}

ll lcm(ll a, ll b)
{
    return ((a / gcd(a, b)) * b);
}

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;

    ll result = 0, overlap;

    result += ((n / a) * p);
    result += ((n / b) * q);

    overlap = (n / lcm(a, b));
    // cout << overlap << nl;

    result -= (overlap * (p + q));
    result += (overlap * max(p, q));

    cout << result << nl;

    return 0;
}

// Accepted