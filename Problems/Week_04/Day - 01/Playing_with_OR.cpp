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
        int n, k;
        cin >> n >> k;
        vector<int> ar(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        int l = 0, r = 0, result = 0, count = 0;

        while (r < n)
        {
            if (ar[r] % 2 != 0)
            {
                count++;
            }
            if ((r - l) + 1 == k)
            {
                if (count >= 1)
                {
                    result++;
                }
                if (ar[l] % 2 != 0)
                {
                    count--;
                }
                l++;
            }
            r++;
        }
        cout << result << nl;
    }

    return 0;
}

// Accepted

/*

// INPUT:
2
5 2
5 7 13 4 6
4 3
2 6 7 4

// OUTPUT:
3
2

*/