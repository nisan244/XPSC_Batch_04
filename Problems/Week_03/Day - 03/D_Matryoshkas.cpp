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
        vector<ll> ar(n);
        map<ll, ll> mp;
        ll result = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            mp[ar[i]]++;
        }
        sort(ar.begin(), ar.end());
        for (int i = 0; i < n; i++)
        {
            int temp = ar[i];
            if (mp[temp] != 0)
            {
                result++;
                while (mp[temp] > 0)
                {
                    mp[temp]--;
                    temp++;
                }
            }
        }
        cout << result << nl;
    }

    return 0;
}

// Accepted