#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
#define srt(ar) sort(ar.begin(), ar.end())
#define rsrt(ar) sort(ar.rbegin(), ar.rend())
#define allsum(ar) accumulate(ar.begin(), ar.end(), 0ll)
#define gcd(a, b) __gcd(a, b)
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
        int n;
        cin >> n;
        vi ar(n);
        map<int, int> MP;

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            MP[ar[i]]++;
        }

        ll count = 0, result = n;

        for (int i = 0; i <= n; i++)
        {
            if (MP[i] == 1)
            {
                count++;
            }
            if (count == 2 || MP[i] == false)
            {
                result = i;
                break;
            }
        }

        cout << result << nl;
    }

    return 0;
}

// Accepted