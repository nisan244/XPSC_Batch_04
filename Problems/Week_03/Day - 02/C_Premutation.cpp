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
        int n, mx_val = 0, result = 0, value = 0;
        cin >> n;
        int ar[n][n - 1];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> ar[i][j];
                mp[ar[i][0]]++;
            }
        }
        for (auto it : mp)
        {
            // cout << it.first << " -> " << it.second << " ";
            if (it.second > mx_val)
            {
                mx_val = it.second;
                value = it.first;
            }
        }
        // nnl;

        cout << value << " ";
        for (int i = 0; i < n; i++)
        {
            if (value != ar[i][0])
            {
                result = i;
                break;
            }
        }
        // cout << result << nl;
        for (int i = 0; i < n - 1; i++)
        {
            cout << ar[result][i] << " ";
        }
        nnl;
    }

    return 0;
}

// Accepted