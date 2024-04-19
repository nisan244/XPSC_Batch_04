#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"
#define nnl cout << "\n"

int main(int argc, char const *argv[])
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> ar(m + 1);
    for (int i = 0; i <= m; i++)
    {
        cin >> ar[i];
    }
    vector<vector<int>> mask;
    for (int i = 0; i <= m; i++)
    {
        vector<int> new_ar;
        for (int j = 0; j < n; j++)
        {
            if ((ar[i] >> j) & 1)
            {
                new_ar.push_back(1);
            }
            else
            {
                new_ar.push_back(0);
            }
        }
        mask.push_back(new_ar);
    }

    int result = 0;
    vector<int> fedor_mask = mask[m];
    for (int i = 0; i < mask.size(); i++)
    {
        vector<int> new_ar_2 = mask[i];
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (fedor_mask[j] != new_ar_2[j])
            {
                count++;
            }
        }
        if (count <= k)
        {
            result++;
        }
    }
    cout << result - 1 << nl;

    return 0;
}

// Accepted

/*

// INPUT:
7 3 1
8
5
111
17


// OUTPUT:
0


//--------------------

// INPUT:
3 3 3
1
2
3
4


// OUTPUT:
3

*/