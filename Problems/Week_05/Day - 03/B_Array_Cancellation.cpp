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
        ll n;
        cin >> n;
        vi ar(n);
        ll temp = 0, result = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            if (ar[i] >= 0)
            {
                temp += ar[i];
            }
            else
            {
                if (ar[i] + temp >= 0)
                {
                    temp += ar[i];
                }
                else
                {
                    ar[i] += temp;
                    temp = 0;
                    result += ar[i];
                }
            }
        }
        cout << abs(result) << nl;
    }

    return 0;
}

// Accepted

/*

// INPUT:
7
4
-3 5 -3 1
2
1 -1
4
-3 2 -3 4
4
-1 1 1 -1
7
-5 7 -6 -4 17 -13 4
6
-1000000000 -1000000000 -1000000000 1000000000 1000000000 1000000000
1
0

// OUTPUT:
3
0
4
1
8
3000000000
0

*/