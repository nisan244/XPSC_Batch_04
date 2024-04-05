#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"
#define nnl cout << "\n"
const ll N = 2e5 + 10;
vector<ll> ar[N];
ll cnt[N];

void DFS(ll s, ll p)
{
    if (ar[s].size() == 1 && s != 1)
    {
        cnt[s] = 1;
    }
    for (ll child : ar[s])
    {
        if (child != p)
        {
            DFS(child, s);
            cnt[s] += cnt[child];
        }
    }
}

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cnt[i] = 0;
            ar[i].clear();
        }

        for (int i = 1; i < n; i++)
        {
            ll a, b;
            cin >> a >> b;
            ar[a].push_back(b);
            ar[b].push_back(a);
        }
        DFS(1, -1);

        ll q;
        cin >> q;
        while (q--)
        {
            ll x, y;
            cin >> x >> y;
            cout << cnt[x] * cnt[y] << nl;
        }
    }

    return 0;
}

// Accepted

/*

// INPUT:
2
5
1 2
3 4
5 3
3 2
4
3 4
5 1
4 4
1 3
3
1 2
1 3
3
1 1
2 3
3 1


// OUTPUT:
2
2
1
4
4
1
2

*/