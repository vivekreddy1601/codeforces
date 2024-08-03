//code by Vivek Reddy
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> v(n);
        ll sum = 0;
        for (auto& i : v) {
            cin >> i;
            sum += i;
        }
        ll avg = sum / n;
        for (int i = n - 1; i > 0; i--) {
            if (v[i] < avg) {
                v[i - 1] -= (avg - v[i]);
                v[i] = avg;
            }
        }
        bool ok = true;
        for (int i = 0; i < n; i++) {
            ok &= (v[i] == avg);
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}
