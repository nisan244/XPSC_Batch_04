#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
#define pi pair<int, int>
#define vi vector<ll>
#define nl "\n"
#define nnl cout << "\n"

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;
    vi ar(n), ar_2(n), result;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> ar_2[i];
    }

    sort(ar.begin(), ar.end());
    sort(ar_2.begin(), ar_2.end());
  
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        while (count < n)
        {
            result.push_back(ar[i] + ar_2[count]);
            count++;
        }
    }
    ar.clear();
    ar_2.clear();

    sort(result.begin(), result.end());

    cout << result[m - 1] << nl;

    // for(int val : ar)
    // {
    //     cout << val << " ";
    // }
    // nnl;
    // nnl;

    // for(int val : ar_2)
    // {
    //     cout << val << " ";
    // }

    // nnl;
    // nnl;
    // for(int val : result)
    // {
    //     cout << val << " ";
    // }
    // nnl;
    // nnl;

    return 0;
}

