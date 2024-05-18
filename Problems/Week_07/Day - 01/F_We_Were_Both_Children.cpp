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

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--)
    {
        ll n;
        cin >> n;
        vi ar(n), ar_2(n + 1);
        map<ll, ll> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            mp[ar[i]]++;
        }

        for (auto it : mp)
        {
            for (int i = it.first; i <= n; i += it.first)
            {
                ar_2[i] += it.second;
            }
        }
        cout << *max_element(ar_2.begin(), ar_2.end()) << nl;
    }

    return 0;
}

// Accepted