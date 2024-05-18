#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
#define srt(ar) sort(ar.begin(), ar.end())
#define rsrt(ar) sort(ar.rbegin(), ar.read())
#define pi pair<int, int>
#define vi vector<int>
#define nl "\n"
#define nnl cout << "\n"

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vi ar(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        int mx_val = INT_MIN, mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (i == n - 1)
            {
                mn = min(mn, abs(ar[i] - ar[i - 1]));
            }
            else if (i == 0)
            {
                mn = min(mn, abs(ar[i] - ar[i + 1]));
            }
            else
            {
                mx_val = max(abs(ar[i] - ar[i + 1]), abs(ar[i] - ar[i - 1]));
                mn = min(mn, mx_val);
            }
        }
        cout << mn << nl;
    }

    return 0;
}


// Accepted