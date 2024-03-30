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
        ll n, q;
        cin >> n >> q;
        ll sum = 0;
        vector<ll> vec(n + 1), p(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> vec[i];
            sum += vec[i];
        }
        p[0] = vec[0];
        for (int i = 1; i <= n; i++)
        {
            p[i] = vec[i] + p[i - 1];
        }
        while (q--)
        {
            ll L, R, K;
            cin >> L >> R >> K;
            ll value = (p[R] - p[L - 1]) + ((R - L + 1) * K);
            // cout << (p[R] - p[L - 1]) << " + " << ((R - L + 1) * K) << " = " << value << " , ";

            if ((sum - value) % 2 != 0)
            {
                cout << "YES" << nl;
            }
            else
            {
                cout << "NO" << nl;
            }
        }
        // nnl;
        // nnl;
    }

    return 0;
}

// Accepted