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
        ll n, k, q;
        cin >> n >> k >> q;
        ll count = 0, total;
        ll result = 0;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x > q)
            {
                if (count >= k)
                {
                    total = count - k + 1;
                    result += (total * (total + 1)) / 2;
                }
                count = 0;
            }
            else
            {
                count++;
            }
        }
        if (count >= k)
        {
            total = count - k + 1;
            result += (total * (total + 1)) / 2;
        }
        cout << result << nl;
    }

    return 0;
}

// Accepted

/*

// INPUT:
7
3 1 15
-5 0 -10
5 3 -33
8 12 9 0 5
4 3 12
12 12 10 15
4 1 -5
0 -1 2 5
5 5 0
3 -1 4 -5 -3
1 1 5
5
6 1 3
0 3 -2 5 -4 -4

// OUTPUT:
6
0
1
0
0
1
9

*/