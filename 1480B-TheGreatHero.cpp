//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

void solve()
{
	ll  A, B, n;
    cin>>A>>B>>n;
    ll mx = 0;
    ll a[n],b[n];
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        cin>>b[i];
        ll cnt = b[i]/A;
        if(b[i]%A)
        {
            cnt++;
        }
        B -= cnt*a[i];
        mx = max(mx, a[i]);
    }
    if(B+mx > 0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    int vt;
    cin >> vt;
    while(vt--)
        solve();
    return 0;
}
