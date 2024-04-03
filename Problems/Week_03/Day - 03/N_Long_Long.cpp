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
        ll n, sum = 0, count = 0;
        cin >> n;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            sum += abs(x);
            // cout << sum << " ";
            if (x > 0)
            {
                flag = false;
            }
            else if (x < 0 && !flag)
            {
                count++;
                flag = true;
            }
        }
        cout << sum << " " << count << nl;
    }

    return 0;
}

// Accepted