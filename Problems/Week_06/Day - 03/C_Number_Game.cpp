#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
#define pi pair<int, int>
#define vi vector<ll>
#define nl "\n"
#define nnl cout << "\n"

bool solve(vi ar, int n, int mid)
{
    multiset<ll> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(ar[i]);
    }

    for (int i = 1; i <= mid; i++)
    {
        int range = mid - i + 1;
        auto it = st.upper_bound(range);
        if (it == st.begin() || st.empty())
        {
            return false;
        }
        it--;
        st.erase(it);

        if (!st.empty())
        {
            it = st.begin();
            st.insert(*it + range);
            st.erase(it);
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll T;
    cin >> T;
    while (T--)
    {
        ll n;
        cin >> n;
        vi ar(n);

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        ll l = 0, r = n, mid, result = 0;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (solve(ar, n, mid))
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
    }

    return 0;
}

// Accepted

/*

// INPUT:
4
3
1 1 2
4
4 4 4 4
1
1
5
1 3 2 1 1

// OUTPUT:
2
0
1
3

*/