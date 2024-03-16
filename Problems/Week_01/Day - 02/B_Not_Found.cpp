#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    cin >> s;

    vector<bool> visi(26, false);
    for (char c : s)
    {
        visi[c - 'a'] = true;
    }
    for (int i = 0; i < 26; i++)
    {
        // cout << c << " ";
        if (!visi[i])
        {
            cout << char(i + 'a') << "\n";
            return 0;
        }
    }
    cout << "None"
         << "\n";
    return 0;
}

// Accepted