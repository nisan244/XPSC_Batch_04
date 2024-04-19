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
        ll result = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            result |= a;
        }
        cout << result << nl;
    }

    return 0;
}

// Accepted

/*

// INPUT:
4
3
1 3 2
5
1 2 4 8 16
2
6 6
3
3 5 6


// OUTPUT:
3
31
6
7

*/