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

bool isPrime(int n)
{
    if (n == 1)
    {
        return false;
    }

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    if (isPrime(n))
    {
        cout << 1 << nl;
    }
    else if (n % 2 == 0)
    {
        cout << 2 << nl;
    }
    else
    {
        if (isPrime(n - 2))
        {
            cout << 2 << nl;
        }
        else
        {
            cout << 3 << nl;
        }
    }

    return 0;
}

// Accepted