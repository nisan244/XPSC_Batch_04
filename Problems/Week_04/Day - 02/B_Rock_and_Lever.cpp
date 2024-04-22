// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// #define nl "\n"
// #define nnl cout << "\n"

// int main(int argc, char const *argv[])
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> ar(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> ar[i];
//         }
//         for (int i = 0; i < n; i++)
//         {
//             cout << ar[i] << " - " << __lg(ar[i]) << nl;   // O(1)
//         }
//         nnl;
//     }

//     return 0;
// }

//----------------------------------------

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
        ll n;
        cin >> n;
        map<ll, ll> cnt;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            cnt[__lg(x)]++;
        }
        ll result = 0;
        for (auto it = cnt.begin(); it != cnt.end(); it++)
        {
            result += ((it->second) * ((it->second) - 1)) / 2;
        }
        cout << result << nl;
    }

    return 0;
}

// Accepted