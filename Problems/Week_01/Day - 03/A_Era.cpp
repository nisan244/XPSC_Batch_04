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
        int result = 0;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            result = max(result, x - i);
        }
        cout << result << "\n";
    }

    return 0;
}
