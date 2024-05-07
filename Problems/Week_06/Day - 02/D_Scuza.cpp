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

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--)
    {
        ll n, q;
        cin >> n >> q;
        vi ar(n + 1, 0), pre(n + 2, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> ar[i];
        }
        for (int i = 1; i <= n; i++)
        {
            pre[i] = pre[i - 1] + ar[i];
        }

        vector<pair<ll, int>> pr(q);
        for (int i = 0; i < q; i++)
        {
            cin >> pr[i].first;
            pr[i].second = i;
        }
        sort(pr.begin(), pr.end());

        int count = 0;
        vi result(q);
        for (int i = 0; i < q; i++)
        {
            while (true)
            {
                if (count == n || ar[count + 1] > pr[i].first)
                {
                    break;
                }
                count++;
            }
            result[pr[i].second] = pre[count];
        }
        for (int i = 0; i < q; i++)
        {
            cout << result[i] << " ";
        }
        nnl;
    }

    return 0;
}

// Accepted