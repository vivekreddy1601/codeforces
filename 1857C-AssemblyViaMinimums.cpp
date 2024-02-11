//code by Vivek reddy
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 1e9+7;
int main()
{
    ll vt;
    cin >> vt;
    while(vt--){
        ll n; 
        cin >> n;
        int a[(n*(n-1))/2];
        for(int i = 0; i < (n*(n-1))/2;i++)
            cin >> a[i];
        sort(a,a+(n*(n-1))/2);
        int k = n-1;
        int ind = 0;
        for(int i = 0; i < n-1;i++){
            int mini = 1e9;
            for(int j = 0;j < k;j++){
                mini = min(a[ind++],mini);
            }
            k--;
            cout << mini << ' ';
        }
        cout << mod-7 << '\n';
    }
    return 0;
}
