#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"
#define nnl cout << "\n"

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<pair<ll, ll>> ar(n), ar_2(n), ar_3(n);
        ll result = 0;
        for (int i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            ar.push_back({a, i});
        }
        for (int i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            ar_2.push_back({a, i});
        }
        for (int i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            ar_3.push_back({a, i});
        }
        sort(ar.rbegin(), ar.rend());
        sort(ar_2.rbegin(), ar_2.rend());
        sort(ar_3.rbegin(), ar_3.rend());
       
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    if (ar[i].second != ar_2[j].second && ar_2[j].second != ar_3[k].second && ar[i].second != ar_3[k].second)
                    {
                        result = max(result, ar[i].first + ar_2[j].first + ar_3[k].first);
                    }
                }
            }
        }
        cout << result << nl;
    }

    return 0;
}

// Accepted

/*

// INPUT:
4
3
1 10 1
10 1 1
1 1 10
4
30 20 10 1
30 5 15 20
30 25 10 10
10
5 19 12 3 18 18 6 17 10 13
15 17 19 11 16 3 11 17 17 17
1 17 18 10 15 8 17 3 13 12
10
17 5 4 18 12 4 11 2 16 16
8 4 14 19 3 12 6 7 5 16
3 4 8 11 10 8 10 2 20 3

// OUTPUT:
30
75
55
56

*/