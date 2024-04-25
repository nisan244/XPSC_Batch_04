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

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s, stn;
        cin >> s;
        int temp, i = n - 1;
        while (i >= 0)
        {
            temp = s[i] - '0';
            if (temp == 0)
            {
                temp = ((s[i - 1] - '0') + (s[i - 2] - '0') * 10);
                i -= 2;
            }
            // cout << temp << " ";
            stn.push_back((temp - 1) + 'a');
            i--;

            // cout << char ((temp - 1) + 'a') << " ";
        }
        // nnl;

        reverse(stn.begin(), stn.end());
        cout << stn << nl;
    }

    return 0;
}


// Accepted