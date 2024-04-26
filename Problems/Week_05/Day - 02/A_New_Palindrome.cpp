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

void palindrome(string s)
{
    for (int i = 0; i < (s.length() / 2) - 1; i++)
    {
        if (s[i] != s[i + 1])
        {
            yes;
            return;
        }
    }
    no;
}

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        palindrome(s);
    }

    return 0;
}

// Accepted