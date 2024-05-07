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
        int n, m;
        cin >> n >> m;
        vi ar(m);
        for (int i = 0; i < m; i++)
        {
            cin >> ar[i];
        }
        sort(ar.rbegin(), ar.rend());
        ll count = 0, result = 0;
        for (int i = 0; i < m; i++)
        {
            if (count < ar[i])
            {
                count += (n - ar[i]);
                result++;
            }
            else
            {
                break;
            }
        }
        cout << result << nl;
    }

    return 0;
}

// Accepted