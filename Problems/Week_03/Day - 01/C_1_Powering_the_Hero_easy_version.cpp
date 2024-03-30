#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"
#define nnl cout << "\n"

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, result = 0;
        cin >> n;
        ll ar[n];
        priority_queue<ll> pq;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            if (ar[i] != 0)
            {
                pq.push(ar[i]);
                // cout << ar[i] << " ";
            }
            else
            {
                if (!pq.empty())
                {
                    result += pq.top();
                    // cout << pq.top() << " ";
                    pq.pop();
                }
                // nnl;
            }
        }
        // nnl;
        // nnl;

        cout << result << nl;
    }

    return 0;
}

// Accepted