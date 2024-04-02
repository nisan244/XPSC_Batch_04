#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"
#define nnl cout << "\n"

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> ar(n);
        set<string> st;

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            st.insert(ar[i]);
        }
        // for(auto st : st)
        // {
        //     cout << st << nl;
        // }
        // nnl;
        string s_1, s_2;
        for (int i = 0; i < n; i++)
        {
            bool flag = false;
            for (int j = 1; j < ar[i].size(); j++)
            {
                s_1 = ar[i].substr(0, j);
                s_2 = ar[i].substr(j);

                // cout << s_1 << nl;
                // cout << s_2 << nl;
                // cout << s_1 << " = " << st.count(s_1) << " ," << s_2 << " = " << st.count(s_2) << nl;

                if (st.count(s_1) && st.count(s_2))
                {
                    flag = true;
                }
            }

            if (flag)
            {
                cout << 1;
            }
            else
            {
                cout << 0;
            }
        }
        nnl;
    }

    return 0;
}

// Accepted