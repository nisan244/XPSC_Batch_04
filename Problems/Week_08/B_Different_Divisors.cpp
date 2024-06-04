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

ll divisor(ll d)
{
    bool flag = true;
    while (true)
    {
        flag = true;
        if (d == 1)
        {
            flag = false;
        }

        for (int i = 2; i <= sqrt(d); i++)
        {
            if (d % i == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            break;
        }
        else
        {
            d++;
        }
    }
    return d;
}

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll T;
    cin >> T;
    while (T--)
    {
        ll d;
        cin >> d;

        ll val = d + 1;
        val = divisor(val);
        ll val_2 = val + d;
        val_2 = divisor(val_2);

        cout << val * val_2 << nl;

        // cout << divisor(d + 1) * divisor((d + 1) + d) << nl;
    }

    return 0;
}

// Accepted