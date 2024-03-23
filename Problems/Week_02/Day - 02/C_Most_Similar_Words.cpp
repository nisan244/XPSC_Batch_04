#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, tx_siz;
        cin >> n >> tx_siz;
        vector<string> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int mn_val = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int count = 0;
                for (int k = 0; k < tx_siz; k++)
                {
                    count += abs(arr[i][k] - arr[j][k]);
                }
                mn_val = min(mn_val, count);
            }
        }
        cout << mn_val << "\n";
    }

    return 0;
}

// Accepted