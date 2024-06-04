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
        int n;
        cin >> n;
        vi ar(n);

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        map<int, int> count;

        for (int i = 0; i < n; i++)
        {
            for (int j = 2; j <= sqrt(ar[i]); j++)
            {
                if (ar[i] % j == 0)
                {
                    while (ar[i] % j == 0)
                    {
                        count[j]++;
                        ar[i] /= j;
                    }
                }
            }

            if (ar[i] > 1)
            {
                count[ar[i]]++;
            }
        }

        bool flag = true;
        for (auto value : count)
        {
            if (value.second % n != 0)
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            yes;
        }
        else
        {
            no;
        }
    }

    return 0;
}

// Accepted