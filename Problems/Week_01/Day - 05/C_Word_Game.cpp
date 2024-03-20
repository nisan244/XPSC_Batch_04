#include <bits/stdc++.h>
using namespace std;

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
        vector<string> v[3];
        map<string, int> mp;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string x;
                cin >> x;
                v[i].push_back(x);
                mp[x]++;
            }
        }

        for (int i = 0; i < 3; i++)
        {
            int count = 0;
            for (int j = 0; j < v[i].size(); j++)
            {
                if (mp[v[i][j]] == 1)
                {
                    count += 3;
                }
                else if (mp[v[i][j]] == 2)
                {
                    count += 1;
                }
            }
            cout << count << " ";
        }
        cout << "\n";
    }

    return 0;
}

// Accepted