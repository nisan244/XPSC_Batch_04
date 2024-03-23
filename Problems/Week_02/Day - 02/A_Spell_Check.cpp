#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;
        sort(s.begin(), s.end());
        string name = "Timur";
        sort(name.begin(), name.end());
        if (name == s)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }

    return 0;
}

// Accepted