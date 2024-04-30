#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
#define pi pair<int, int>
#define vi vector<int>
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
        int key;
        cin >> key;
        int l = 0, r = n - 1, mid, result = n;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (key <= ar[mid])
            {
                result = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << result + 1 << nl;
    }

    return 0;
}

// Accepted

/*

// INPUT:
5 5
3 3 5 8 9
2 4 8 1 10

// OUTPUT:
1
3
4
1
6

*/