#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(int argc, char const *argv[])
{
    int n;
    ll s;
    cin >> n >> s;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    ll sum = 0;
    int l = 0, r = 0, result = 0;
    while (r < n)
    {
        sum += ar[r];
        if (sum <= s)
        {
            result = max(result, r - l + 1);
        }
        else
        {
            sum -= ar[l];
            l++;
        }
        r++;
    }
    cout << result << "\n";

    return 0;
}

// Accepted