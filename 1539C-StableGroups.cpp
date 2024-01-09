//code by Vivek Reddy
#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std;

int main()
{
    ll n,k,x;
    cin >> n >> k >> x;
    ll a[n];
    for(int i = 0; i< n;i++)        
        cin >> a[i];
    sort(a,a+n);
    vector<ll> b;
    for(int i = 1;i < n;i++){
        if(a[i]-a[i-1]>x)
            b.push_back(a[i]-a[i-1]);
    }
    sort(b.begin(),b.end(),greater<ll>());
    for(int i = b.size()-1; i > -1;i--){
        if((b[i]-1)/x<=k){
            k-=(b[i]-1)/x;
            b.erase(b.begin()+i);
        }
    }
    cout << b.size()+1 << endl;
    return 0;
}
