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
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 0)
            {
                continue;
            }
            string move;
            cin >> move;
            for (int j = 0; j < x; j++)
            {
                if (move[j] == 'D')
                {
                    ar[i]++;
                }
                else if (move[j] == 'U')
                {
                    ar[i]--;
                }
                if (ar[i] < 0)
                {
                    ar[i] += 10;
                }
                if (ar[i] > 9)
                {
                    ar[i] -= 10;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << ar[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}

// Accepted