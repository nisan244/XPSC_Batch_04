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
        int a, b, n;
        cin >> a >> b >> n;
        vi ar(n);
        ll result = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            if (ar[i] + 1 <= a)
            {
                result += ar[i];
            }
            else
            {
                result += a - 1;
            }
        }

        // cout << result << nl;
        if (b >= a)
        {
            result += a;
        }
        else
        {
            result += b;
        }
        cout << result << nl;
    }

    return 0;
}

// Accepted

/*

// INPUT:
2
5 3 3
1 1 7
7 1 5
1 2 5 6 8

// OUTPUT:
9
21

*/
