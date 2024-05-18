#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
#define srt(ar) sort(ar.begin(), ar.end())
#define rsrt(ar) sort(ar.rbegin(), ar.read())
#define pi pair<int, int>
#define vi vector<int>
#define nl "\n"
#define nnl cout << "\n"

bool solve(vi &ar, vi &ar_2, int n)
{
    int dif = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (ar_2[i] != 0)
        {
            dif = min(dif, ar[i] - ar_2[i]);
            // cout << dif << nl;
        }
    }

    if (dif < 0)
    {
        return false;
    }
    if (dif == INT_MAX)
    {
        return true;
    }
    for (int i = 0; i < n; i++)
    {
        if (ar[i] - ar_2[i] > dif)
        {
            return false;
        }
        if (ar_2[i] != 0 & ar[i] - ar_2[i] < dif)
        {
            return false;
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;

        vi ar(n), ar_2(n);

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> ar_2[i];
        }

        if (solve(ar, ar_2, n))
        {
            yes;
        }
        else
        {
            no;
        }
        // cout << (solve(ar, ar_2, n) ? "YES" : "NO") << nl;
    }

    return 0;
}

// Accepted