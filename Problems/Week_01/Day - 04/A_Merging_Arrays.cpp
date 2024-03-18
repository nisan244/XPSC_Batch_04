#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;
    vector<int> ar(n);
    vector<int> arr(m);

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    ar.insert(ar.end(), arr.begin(), arr.end());

    sort(ar.begin(), ar.end());
    for (int i : ar)
    {
        cout << i << " ";
    }
    cout << "\n";

    return 0;
}

// Accepted