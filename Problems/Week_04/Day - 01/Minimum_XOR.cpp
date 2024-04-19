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
        int n, XOR = 0;
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            XOR ^= ar[i];
        }
        int result = XOR;
        for (int i = 0; i < n; i++)
        {
            result = min(result, (XOR ^ ar[i]));
        }
        cout << result << nl;
    }

    return 0;
}

// Accepted

/*

// INPUT:
3
4
2 4 3 6
2
4 4
5
1 3 5 17 9


// OUTPUT:
0
0
14

*/