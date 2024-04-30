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
        ll a, b, n, s;
        cin >> a >> b >> n >> s;
        if ((a * n) + b >= s && (s % n) <= b)
        {
            yes;
        }
        else
        {
            no;
        }
    }

    return 0;
}

// Accepted

/*

// INPUT:
4
1 2 3 4
1 2 3 6
5 2 6 27
3 3 5 18


// OUTPUT:
YES
NO
NO
YES

*/