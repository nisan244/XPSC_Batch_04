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
        int n;
        cin >> n;
        bool flag = true;
        for (int i = n - 1; i > 0; i--)
        {
            if (((i - 1) & i) == 0 && flag == true)
            {
                cout << i << " " << 0 << " ";
                flag = false;
            }
            else
            {
                cout << i << " ";
            }
        }
        nnl;
    }

    return 0;
}

// Accepted