//code by Vivek Reddy
#include <iostream>
#define ll long long int
using namespace std;

int main()
{
    ll n,k,m=0;
    cin >> n >> k;
    ll a[n];
    for(int i = 0; i < n;i++){
        cin >> a[i];
        if(a[i]>m)
            m = a[i];
    }
    if(k >= n)
        cout << m << endl;
    else{
        ll ma=a[0],c=0;
        for(int i = 1;i < n;i++){
            if(a[i]>ma){
                ma = a[i];
                c = 1;
            }else 
                c++;
            if(i==n-1){
                i = -1;
            }
            if(c==k){
                cout << ma << endl;
                break;
            }
        }
    }
    return 0;
}
