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
        char cha;
        cin >> cha;
        string st;
        cin >> st;
        st += st;
        bool flag = false;
        int result = 0;
        int mx_val = 0;
        if (cha == 'g')
        {
            cout << "0" << endl;
            continue;
        }
        for (int i = 0; i < st.size(); i++)
        {
            if (st[i] == 'g')
            {
                mx_val = max(mx_val, result);
                flag = false;
            }
            if (st[i] == cha && flag == false)
            {
                result = 0;
                flag = true;
            }
            if (flag == true)
            {
                result++;
            }
        }
        cout << mx_val << "\n";
    }

    return 0;
}

// Accepted