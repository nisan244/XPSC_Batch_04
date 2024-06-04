#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
#define srt(ar) sort(ar.begin(), ar.end())
#define rsrt(ar) sort(ar.rbegin(), ar.rend())
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
    vi ar;

    if (n % 2 != 0)
    {
        ar.push_back(3);
        n -= 3;
    }

    while (n > 0)
    {
        ar.push_back(2);
        n -= 2;
    }

    cout << ar.size() << nl;
    srt(ar);
    for (auto value : ar)
    {
        cout << value << " ";
    }
    nnl;

    return 0;
}

// Accepted