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
        vi ar(n), ar_2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> ar_2[i];
        }
        srt(ar);
        srt(ar_2);
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (ar[i] > ar_2[i] || ar_2[i] - ar[i] > 1)
            {
                flag = false;
                break;
            }
        }
        if (flag)
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