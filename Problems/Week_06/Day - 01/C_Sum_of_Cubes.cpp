#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define yes cout << "YES" \
                 << "\n"
#define no cout << "NO" \
                << "\n"
#define pi pair<int, int>
#define vi vector<ll>
#define nl "\n"
#define nnl cout << "\n"

const int maxN = 1e4 + 9;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // O(10^4 * log N)

    vi pw;
    for (int i = 1; i <= maxN; i++)
    {
        pw.push_back(pow(i, 3));
    }

    // for (int i = 0; i < maxN; i++)
    // {
    //     cout << pw[i] << nl;
    // }

    int T;
    cin >> T;
    while (T--)
    {
        ll x;
        cin >> x;
        bool found = false;
        for (int i = 0; i < maxN; i++)
        {
            if (pw[i] >= x)
            {
                break;
            }
            ll l = 0, r = maxN - 1, mid;
            ll need = x - pw[i];
            bool ok = false;
            while (l <= r) // O(log N)
            {
                mid = l + (r - l) / 2;
                if (pw[mid] == need)
                {
                    ok = true;
                    break;
                }
                else if (pw[mid] > need)
                {
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }

            if (ok)
            {
                found = true;
                break;
            }
        }
        if (found)
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

// Accepted (Multiple Answer)