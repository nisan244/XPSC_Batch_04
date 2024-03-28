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
    ll L = 0, R = 0, result = 0;
    while (R < n)
    {
        sum += ar[R];
        while (sum >= s && L <= R)
        {
            result += n - R;
            sum -= ar[L];
            L++;
        }
        R++;
    }
    cout << result << "\n";

    return 0;
}

// Accepted