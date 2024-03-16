#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, t;
    cin >> a >> b >> t;

    int biscuit = (t + 0.5) / a;

    cout << biscuit * b << "\n";

    return 0;
}

// Accepted