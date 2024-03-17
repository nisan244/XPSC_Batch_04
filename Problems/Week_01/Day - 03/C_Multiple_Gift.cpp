#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    long long int x, y;
    cin >> x >> y;
    int count = 0;
    while (x <= y)
    {
        x *= 2;
        count++;
    }
    cout << count << "\n";

    return 0;
}

// Accepted