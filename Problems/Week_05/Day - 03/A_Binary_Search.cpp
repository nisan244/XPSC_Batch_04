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
    int n, k;
    cin >> n >> k;
    vi ar(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    while (k--)
    {
        ll x;
        cin >> x;
        ll l = 0, r = n - 1, mid, inx = -1;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (ar[mid] == x)
            {
                inx = mid;
                break;
            }
            else if (ar[mid] > x)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        if (inx != -1)
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
10 10
1 61 126 217 2876 6127 39162 98126 712687 1000000000
100 6127 1 61 200 -10000 1 217 10000 1000000000


// OUTPUT:
NO
YES
YES
YES
NO
NO
YES
YES
NO
YES

*/