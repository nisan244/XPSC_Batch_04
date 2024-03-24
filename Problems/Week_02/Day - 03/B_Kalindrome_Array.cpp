#include <bits/stdc++.h>
using namespace std;

bool palindrome(vector<int> vec)
{
    bool flag = true;
    int k = vec.size() - 1;
    for (int i = 0; i <= k; i++)
    {
        if (vec[i] != vec[k])
        {
            flag = false;
            break;
        }
        k--;
    }
    return flag;
}

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> ar(n);
        vector<int> ve_1, ve_2;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        int a, b, j = n - 1;
        bool flag = true;
        for (int i = 0; i < j; i++)
        {
            if (ar[i] != ar[j])
            {
                flag = false;
                a = ar[i];
                b = ar[j];
                break;
            }
            j--;
        }

        // cout <<"a - " << a << " " << "b - " << b << "\n";

        if (flag)
        {
            cout << "YES" << "\n";
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (ar[i] != a)
                {
                    ve_1.push_back(ar[i]);
                }
                if (ar[i] != b)
                {
                    ve_2.push_back(ar[i]);
                }
            }

            if (palindrome(ve_1) || palindrome(ve_2))
            {
                cout << "YES" << "\n";
            }
            else
            {
                cout << "NO" << "\n";
            }
        }

    }

    return 0;
}

// Accepted