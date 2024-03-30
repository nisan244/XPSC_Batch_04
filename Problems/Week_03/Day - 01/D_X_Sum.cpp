#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"
#define nnl cout << "\n"
ll n, m;
int ar[300][300];
vector<pair<int, int>> pi = {{-1, 1}, {1, -1}, {-1, -1}, {1, 1}};
bool valid(int x, int y)
{
    if (x < 0 || x >= n || y < 0 || y >= m)
    {
        return false;
    }
    else
    {
        return true;
    }
}

ll DFS(int x, int y)
{
    ll sum = ar[x][y];
    for (int i = 0; i < 4; i++)
    {
        ll xi = pi[i].first + x;
        ll yi = pi[i].second + y;
        while (valid(xi, yi))
        {
            sum += ar[xi][yi];
            xi += pi[i].first;
            yi += pi[i].second;
        }
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> ar[i][j];
            }
        }
        ll mx_val = LLONG_MIN, sum = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                sum = DFS(i, j);
                mx_val = max(mx_val, sum);
            }
        }
        cout << mx_val << nl;
    }

    return 0;
}

// Accepted