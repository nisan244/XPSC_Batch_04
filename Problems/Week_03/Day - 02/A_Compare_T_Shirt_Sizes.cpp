#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"
#define nnl cout << "\n"

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        char s1_last = s1.back();
        char s2_last = s2.back();

        // cout << s1_last << " " << s2_last << nl;

        if (s1_last < s2_last)
        {
            cout << ">" << nl;
        }
        else if (s1_last > s2_last)
        {
            cout << "<" << nl;
        }
        else if (s1_last == s2_last)
        {
            if (s1.size() == s2.size())
            {
                cout << "=" << nl;
            }
            else if (s1_last == 'S')
            {
                if (s1.size() < s2.size())
                {
                    cout << ">" << nl;
                }
                else
                {
                    cout << "<" << nl;
                }
            }
            else
            {
                if (s1.size() < s2.size())
                {
                    cout << "<" << nl;
                }
                else
                {
                    cout << ">" << nl;
                }
            }
        }
    }

    return 0;
}

// Accepted