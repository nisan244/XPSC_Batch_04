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

    ll T;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;
        ll one_count = 0, zero_count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                one_count++;
            }
            else
            {
                zero_count++;
            }
        }

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                if (zero_count > 0)
                {
                    zero_count--;
                }
                else
                {
                    break;
                }
            }
            else
            {
                if (one_count > 0)
                {
                    one_count--;
                }
                else
                {
                    break;
                }
            }
        }
        cout << zero_count + one_count << nl;
    }

    return 0;
}

// Accepted