#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, c;
    cin >> a >> b >> c;
    bool flag = false;

    for (int i = 0; i < c + 1; i++)
    {
        for (int j = 0; j < c + 1; j++)
        {
            if (i * a + j * b == c)
            {
                flag = true;
                break;
            }
        }
    }
    if (flag)
    {
        cout << "Yes"
             << "\n";
    }
    else
    {
        cout << "No"
             << "\n";
    }

    return 0;
}

// Accepted