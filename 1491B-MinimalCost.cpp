//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n,u,v,m=0;
        cin >> n>> u >> v;
        ll a[n];
        cin >> a[0];
        for(int i= 1;i < n;i++){
            cin >> a[i];
            if(abs(a[i]-a[i-1])>m)
                m = abs(a[i]-a[i-1]);
        }
        if(m>1)
            cout << 0 << endl;
        else if(m == 1)
            cout << min(u,v) << endl;
        else
            cout << v+min(u,v) << endl;
    }
    return 0;
}
