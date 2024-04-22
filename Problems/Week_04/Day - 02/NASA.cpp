#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"
#define nnl cout << "\n"
const int mx_N = (1 << 15);
vector<int> all_palindrome;

void mark_palindrome()
{
    for (int i = 0; i < mx_N; i++)
    {
        string s = to_string(i);
        int len = s.length();
        bool flag = true;
        for (int i = 0; i < (len / 2); i++)
        {
            if (s[i] != s[len - i - 1])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            all_palindrome.push_back(i);
        }
    }
}

int main(int argc, char const *argv[])
{
    mark_palindrome();
    // for (auto val : all_palindrome)
    // {
    //     cout << val << nl;
    // }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> cnt(mx_N), ar;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            cnt[x]++;
            ar.push_back(x);
        }
        ll result = n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < all_palindrome.size(); j++)
            {
                ll curr = (ar[i] ^ all_palindrome[j]);
                result += cnt[curr];
            }
        }
        cout << (result / 2) << nl;
    }

    return 0;
}

// Accepted