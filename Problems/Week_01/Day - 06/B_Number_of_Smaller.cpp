#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;

    vector<int> ar(n), vec(m);
    int L = 0, R = 0, result = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> vec[i];
    }

    while (R < m)
    {
        while (ar[L] < vec[R] && L < n)
        {
            result++;
            L++;
        }
        R++;
        cout << result << " ";
    }

    return 0;
}

// Accepted