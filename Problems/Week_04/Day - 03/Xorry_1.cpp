#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define yes cout << "YES" \
                 << "\n"
#define no cout << "NO" \
                << "\n"
#define pi pair<int, int>
#define vi vector<ll>
#define nl "\n"
#define nnl cout << "\n"

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        ll result = x, count = 0;
        while (x > 1)
        {
            count++;
            x /= 2;
        }
        ll temp = pow(2, count);
        cout << (result - temp) << " " << temp << nl;
    }

    return 0;
}

// Accepted