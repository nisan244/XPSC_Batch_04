#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
#define pi pair<int, int>
#define vi vector<ll>
#define nl "\n"
#define nnl cout << "\n"

// O(2n log n)

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s, p;
    cin >> s >> p;
    int n = s.size(), m = p.size();
    vi ar(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    auto ok = [&](int mid)      // O(mid + n)
    {
        vector<bool> dlt(n + 1);
        for (int i = 0; i < mid; i++)
        {
            dlt[ar[i]] = true;
        }
        int j = 0;
        bool found = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == p[j] && !dlt[i + 1])
            {
                j++;
            }
            if (j == m)
            {
                found = true;
                break;
            }
        }
        return found;
    };

    ll l = 0, r = n, mid, result = 0;
    while (l <= r)  //O(log n)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            result = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << result << nl;

    return 0;
}


// Accepted

/*

// INPUT:
ababcba
abb
5 3 4 1 7 6 2

// OUTPUT:
3


*/