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
        int n, k;
        cin >> n >> k;
        vector<int> ar(n);
        map<int, vector<int>> mp;

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            mp[ar[i]].push_back(i);
        }
        while (k--)
        {
            int ai, aj;
            cin >> ai >> aj;
            if (mp[ai].empty() || mp[aj].empty())
            {
                cout << "NO" << nl;
                continue;
            }
            if (ai == aj)
            {
                cout << "YES" << nl;
                continue;
            }
            if (mp[ai].front() < mp[aj].back())
            {
                cout << "YES" << nl;
            }
            else
            {
                cout << "NO" << nl;
            }
        }
    }

    return 0;
}

// Accepted