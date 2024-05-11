#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
#define pi pair<int, int>
#define tpl tuple<int, int, int>
#define vi vector<ll>
#define nl "\n"
#define nnl cout << "\n"

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int m, n;
    cin >> m >> n;
    vector<tuple<int, int, int>> ar(n);

    for (int i = 0; i < n; i++)
    {
        int t, x, y;
        cin >> t >> x >> y;
        ar[i] = make_tuple(t, x, y);
    }

    vi can(n);
    auto okh = [&](int mid)
    {
        vi may(n); 
        int has = m;
        for (int i = 0; i < n; i++)
        {
            tpl tp = ar[i];
            int time, belon, rest, total, can, remaining, curr;
            time = get<0>(tp);
            belon = get<1>(tp);
            rest = get<2>(tp);
            total = ((time * belon) + rest);
            can = mid / total;
            remaining = mid % total;
            curr = ((can * belon) + min(belon, (remaining / time)));
            curr = min(has, curr);
            has -= curr;
            may[i] = curr;
        }
        if (!has)
        {
            for (int i = 0; i < n; i++)
            {
                can[i] = may[i];
            }
        }
        return (!has);
    };

    int l = 0, r = 1e8, mid, result;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (okh(mid))
        {
            result = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << result << nl;

    for(auto val : can)
    {
        cout << val << " ";
    }
    nl;

    return 0;
}

// Accepted

/*

// INPUT:
1 2
2 1 1
1 1 2

// OUTPUT:
1
0 1

// INPUT:
9 3
2 4 2
1 2 3
3 1 1

// OUTPUT:
7
3 4 2

*/