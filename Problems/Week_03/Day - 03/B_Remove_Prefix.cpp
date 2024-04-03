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
        vector<ll> ar(n, 0);
        set<ll> st;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        reverse(ar.begin(), ar.end());
        for (int i = 0; i < n; i++)
        {
            if (st.find(ar[i]) == st.end())
            {
                st.insert(ar[i]);
                continue;
            }
            break;
        }

        cout << n - st.size() << nl;
    }

    return 0;
}

// Accepted