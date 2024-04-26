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
        int n, k;
        cin >> n >> k;
        vi ar(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            ar[i] += i + 1;
        }
        sort(ar.begin(), ar.end());
        ll sum = 0, count = 0;
        for (int i = 0; i < n; i++)
        {
            if (sum + ar[i] > k)
            {
                break;
            }
            else
            {
                sum += ar[i];
                count++;
            }
        }
        cout << count << nl;
    }

    return 0;
}

// Accepted