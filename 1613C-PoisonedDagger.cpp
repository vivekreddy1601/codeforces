//code by Vivek Reddy
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll vt;
    cin >> vt;
    while(vt--){
        ll n,h;
        cin >> n >> h;
        vector<ll>v(n);
        for(int i =0;i < n;i++)
            cin >> v[i];
        ll low = 1,high = h;
        while(low<=high){
            ll mid = low + (high-low)/2;
            ll cost = 0;
            for(int i = 0;i < n-1;i++){
                 cost += (v[i] + mid>v[i+1]?v[i+1]-v[i]:mid);
            }
            cost += mid;
            if(cost >= h ) high = mid-1;
            else low = mid+1;
        }
        cout << low << endl;
    }
    return 0;
}
