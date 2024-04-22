#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"
#define nnl cout << "\n"

int main(int argc, char const *argv[])
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> ar(n);
        int val = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            val ^= ar[i];
        }
        if(n % 2)
        {
            cout << val << nl;
        }
        else
        {
            if(val == 0)
            {
                cout << 0 << nl;
            }
            else
            {
                cout << -1 << nl;
            }
        }
    }
    

    return 0;
}

// Accepted