//code by Vivek Redddy
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0;i < n;i++)
        cin >> a[i];
    sort(a,a+n);
    ll res = 0;
    for (int i = 0; i < n; ++i)
    {
        res += abs(i + 1 - a[i]);
    }
    cout << res << '\n';
    return 0;
}
