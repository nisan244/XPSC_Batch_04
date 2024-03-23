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
        int ar[n];
        set<int> st;

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            st.insert(ar[i]);
        }
        // cout << (n - st.size()) << "\n";

        if ((n - st.size()) % 2 == 0)
        {
            cout << st.size() << "\n";
        }
        else
        {
            cout << st.size() - 1 << "\n";
        }
    }

    return 0;
}

// Accepted