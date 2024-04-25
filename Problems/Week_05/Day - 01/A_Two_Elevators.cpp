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
        int a, b, c;
        cin >> a >> b >> c;

        if (a == 1)
        {
            cout << 1 << nl;
        }
        else
        {
            int temp = abs(b - c) + (c - 1);
            // cout << temp << nl;

            if ((a - 1) < temp)
            {
                cout << 1 << nl;
            }
            else if ((a - 1) > temp)
            {
                cout << 2 << nl;
            }
            else
            {
                cout << 3 << nl;
            }
        }
    }

    return 0;
}

// Accepted