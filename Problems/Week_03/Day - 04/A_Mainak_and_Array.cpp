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
        int n;
        cin >> n;
        vector<int> ar(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        
        if (n == 1)
        {
            cout << 0 << nl;
            continue;
        }

        int result = (ar[n - 1] - ar[0]);

        for (int i = 1; i <= n - 1; i++)
        {
            result = max(result, ar[i] - ar[0]);
        }
        for (int i = 0; i <= n - 2; i++)
        {
            result = max(result, ar[n - 1] - ar[i]);
        }
        for (int i = 1; i <= n - 1; i++)
        {
            result = max(result, ar[i - 1] - ar[i]);
        }

        cout << result << nl;
    }

    return 0;
}

// Accepted

/*

// INPUT:
5
6
1 3 9 11 5 7
1
20
3
9 99 999
4
2 1 8 1
3
2 1 5

// OUTPUT:
10
0
990
7
4

*/