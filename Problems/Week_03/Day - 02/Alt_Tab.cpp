#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"
#define nnl cout << "\n"

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<string> ar(n), result;
    unordered_map<string, int> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    reverse(ar.begin(), ar.end());

    // for (int i = 0; i < n; i++)
    // {
    //     cout << ar[i] << nl;
    // }

    for (int i = 0; i < n; i++)
    {
        if (mp[ar[i]] == 0)
        {
            mp[ar[i]] = 1;
            result.push_back(ar[i]);
        }
    }

    // for (auto it : result)
    // {
    //     cout << it.size() << " ";
    // }
    // nnl;
    for (auto x : result)
    {
        cout << x[x.size() - 2] << x[x.size() - 1];
    }
    // nl;

    return 0;
}

// Accepted