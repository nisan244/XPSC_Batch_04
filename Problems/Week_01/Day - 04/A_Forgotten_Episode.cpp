#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<int> ar(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    sort(ar.begin(), ar.end());
    for (int i = 1; i <= n; i++)
    {
        if (i != ar[i])
        {
            cout << i << "\n";
            break;
        }
    }

    return 0;
}

// Accepted