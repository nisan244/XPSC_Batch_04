#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int freq[26] = {0};
        for (char c : s)
        {
            freq[c - 'a']++;
        }

        int count = 0;
        for (int i = 0; i < 26; i++)
        {
            // cout << frq[i] << " ";
            if (freq[i] % 2 != 0)
            {
                count++;
            }
        }
        // cout << count << "\n";

        if (count > k)
        {
            if ((count - k) == 1)
            {
                cout << "YES" << "\n";
            }
            else
            {
                cout << "NO" << "\n";
            }
        }
        else
        {
            cout << "YES" << "\n";
        }
    }

    return 0;
}

// Accepted
