#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"
#define nnl cout << "\n"

int main(int argc, char const *argv[])
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll result = 0, val = 1;
        while (n != 1)
        {
            result += val;
            val *= 2;
            n /= 2;
        }
        cout << result << nl;
    }

    return 0;
}

// Accepted