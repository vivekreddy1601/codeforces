//code by Vivek Reddy
#include <iostream>
#define ll long long 
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n,k=1,ans=0;
        cin >> n;
        ll a[n];
        for(int i = 0; i < n;i++)
            cin >> a[i];
        if(n==3 && a[1]%2==1){
            cout << -1 << endl;
            continue;
        }
        while(k<n-1&&a[k]==1)k++;
        if(k==n-1){
            cout << -1 << endl;
            continue;
        }
        for(int i = 1;i < n-1;i++)
            ans+=(a[i]+1)/2;
        cout << ans << endl;
    }
    return 0;   
}