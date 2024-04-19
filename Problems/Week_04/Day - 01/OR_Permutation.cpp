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
        for (int i = n; i > 0; i--)
        {
            cout << i << " ";
        }
        cout << nl;
    }

    return 0;
}

// Accepted

/*

// INPUT:
3
3
4
5

// OUTPUT:
1 3 2
1 2 4 3
2 1 5 3 4

*/