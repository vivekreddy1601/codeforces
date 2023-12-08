//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n,ans=0;
        cin >> n;
        ll a[n],b[n];
        for(int i = 0; i < n;i++){
            cin >> a[i];
            ans+=a[i];
        }
        for(int i = 0; i < n;i++)
            cin >> b[i];
        if(n==1){
            cout << ans << endl;
            continue;
        }
        ll s[n];
        s[n-1]=b[n-1];
        for(int i = n-2;i >= 0;i--){
            s[i]=s[i+1]+b[i];
        }
        ll pre = b[0];
        ll nxt = s[1];
        for(int i = 1; i < n-1;i++){
            nxt = min(nxt,pre+s[i+1]);
            pre += b[i];
        }
        nxt = min(nxt,pre);
        cout << ans+nxt << endl;
    }
    return 0;
}
