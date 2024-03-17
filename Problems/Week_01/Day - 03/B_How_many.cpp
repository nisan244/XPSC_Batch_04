#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int s, t;
    cin >> s >> t;
    int count = 0;
    for (int a = 0; a <= s; a++)
    {
        for (int b = 0; b <= s; b++)
        {
            for (int c = 0; c <= s; c++)
            {
                if (a + b + c <= s && a * b * c <= t)
                {
                    count++;
                }
            }
        }
    }
    cout << count << "\n";

    return 0;
}

// Accepted