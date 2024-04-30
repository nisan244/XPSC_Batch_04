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
        ll x = (n * (n - 1)) / 2;
        vi ar(x);
        for (int i = 0; i < x; i++)
        {
            cin >> ar[i];
        }
        sort(ar.begin(), ar.end());
        ll temp = -1;
        for (int i = n - 1; i >= 0; i--)
        {
            temp += i;
            cout << ar[temp] << " ";
        }
        nnl;
    }

    return 0;
}

// Accepted

/*

// INPUT:
5
3
1 3 1
2
10
4
7 5 3 5 3 3
5
2 2 2 2 2 2 2 2 2 2
5
3 0 0 -2 0 -2 0 0 -2 -2


//  OUTPUT:
1 3 3
10 10
7 5 3 12
2 2 2 2 2
0 -2 0 3 5

*/