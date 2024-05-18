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

    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++)
    {
        if ((i % 4 == 0) || (i % 4) == 1)
        {
            s += 'a';
        }
        else
        {
            s += 'b';
        }
    }
    cout << s << nl;

    return 0;
}

// Accepted