#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
#define srt(ar) sort(ar.begin(), ar.end())
#define rsrt(ar) sort(ar.rbegin(), ar.read())
#define pi pair<int, int>
#define vi vector<ll>
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
        string s;
        cin >> s;
        int one_count = 0, result = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                one_count++;
            }
        }
        result = min(one_count, n - one_count);
        // cout << result << nl;
        if (result % 2 == 0)
        {
            cout << "Ramos" << nl;
        }
        else
        {
            cout << "Zlatan" << nl;
        }
    }

    return 0;
}

// Accepted