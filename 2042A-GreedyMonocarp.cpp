//code by Vivek Reddy
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n,k,sum=0;
        cin >> n >> k;
        ll a[n];
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        sort(a,a+n);
        for(int i = n-1;i >= 0;i--){
            sum+=a[i];
            if(sum > k){
                sum-=a[i];
                break;
            }
        }
        cout << k-sum << '\n';
    }
    return 0;
}
