#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(int argc, char const *argv[])
{
    ll n, s;
    cin >> n >> s;
    ll ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    ll sum = 0;
    ll l = 0, r = 0, result = INT_MAX;
    while (r < n)
    {
        sum += ar[r];
        while (sum >= s)
        {
            result = min(result, (r - l) + 1);
            sum -= ar[l];
            l++;
        }
        r++;
    }
    if (result == INT_MAX)
    {
        cout << -1 << "\n";
    }
    else
    {

        cout << result << "\n";
    }

    return 0;
}

// Accepted