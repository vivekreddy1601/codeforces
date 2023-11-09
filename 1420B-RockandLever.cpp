//code by Vivek Reddy
#include <iostream>
#include <vector>
#define ll long long 
using namespace std;

int main()
{
    ll vt;
    cin >> vt;
    while(vt--){
        ll n,t=0;
        cin>>n;
        vector<ll>a(n);
        for(int i = 0; i < n;i++){
            cin >> a[i];
        }
        vector<bool>c(n,false);
        for(int i = 31;i >=0;i--){
            ll num = 0;
            for(int j = 0;j < n;j++){
                if((1<<i)&(a[j]) && !c[j]){
                    num++;
                    c[j]=true;
                }
            }
            t+=(num*(num-1))/2;
        }
        cout << t << endl;
    }
    return 0;
}
