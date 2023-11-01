//code by Vivek Reddy
#include <iostream>
#define ll long long int
using namespace std;
ll max(ll a,ll b){
    if(a > b)
        return a;
    else
        return b;
}
int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n,c=0;
        cin >> n;
        ll a[n];
        for(int i = 0; i < n;i++){
            cin >> a[i];
        }
        for(int i = 1;i < n;i++){
            c+=max(a[i-1]-a[i],0);
        }
        cout << c << endl;
    }
    return 0;
}
