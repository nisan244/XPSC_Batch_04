#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ar[n];
        map<int, int> mp;
        int mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            mp[ar[i]]++;
            mx = max(mx, mp[ar[i]]);
        }

        int k = n - mx;
        int count = 0;

        while (mx != n)
        {
            count++;
            if (mx * 2 >= n)
            {
                break;
            }
            mx = mx * 2;
        }
        cout << k + count << "\n";
    }

    return 0;
}

// Accepted