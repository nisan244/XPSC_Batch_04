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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi ar(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        bool flag = false;
        int x, y, z;
        for (int i = 1; i < n - 1; i++)
        {
            if(ar[i - 1] < ar[i] && ar[i] > ar[i + 1])
            {
                flag = true;
                x = i - 1;
                y = i;
                z = i + 1;
                break;
            }
        }

        if (flag)
        {
            yes;
            cout << x + 1 << " " << y + 1 << " " << z + 1 << nl;
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
3
4
2 1 4 3
6
4 6 1 2 5 3
5
5 3 1 2 4

// OUTPUT:
YES
2 3 4
YES
3 5 6
NO

*/