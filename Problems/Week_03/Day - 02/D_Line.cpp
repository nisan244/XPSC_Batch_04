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
        ll n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> vec(n, 0);
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            ll curent, mx_val;
            if (s[i] == 'L')
            {
                curent = i;
            }
            else
            {
                curent = n - i - 1;
            }

            if (i > (n - i - 1))
            {
                mx_val = i;
            }
            else
            {
                mx_val = n - i - 1;
            }
            sum += curent;
            ll deferent = mx_val - curent;
            vec[i] = deferent;
        }
        sort(vec.rbegin(), vec.rend());
        for (int i = 0; i < n; i++)
        {
            sum += vec[i];
            cout << sum << " ";
        }
        nnl;
    }

    return 0;
}

// Accepted