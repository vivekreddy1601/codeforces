#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n;
    cin >> n;

    ll h, m;
    cin >> h >> m;

    ll time = 60 * h + m;
    ll ans = 24 * 60;

    for (int i = 0; i < n; i++)
    {
        ll h, m;
        cin >> h >> m;

        ll t = 60 * h + m - time;
        if (t < 0)
        {
            t += 24 * 60;
        }
        ans = min(ans, t);
    }

    cout << ans / 60 << " " << ans % 60 << endl;
    }
    return 0;
}