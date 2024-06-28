//code by Vivek Reddy
#include <iostream>
#include <climits>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n,sa=LONG_MAX,sb=LONG_MAX,aans=0,bans=0;
        cin >> n;
        ll a[n],b[n];
        for(int i = 0;i < n;i++){
            cin >> a[i];
            if(a[i]<sa)
                sa = a[i];
        }
        for(int i = 0;i < n;i++){
            cin >> b[i];
            if(b[i]<sb)
                sb = b[i];
        }
        for(int i =0;i < n;i++){
            aans+=sa+b[i];
            bans+=sb+a[i];
        }
        cout << min(aans,bans) << '\n';
    }
    return 0;
}
