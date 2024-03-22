#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, x;
    cin >> n >> x;

    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == x)
        {
            continue;
        }
        cout << ar[i] << " ";
    }

    return 0;
}

// Accepted