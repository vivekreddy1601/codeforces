//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n,m,maxi=0;
        cin >> n >> m;
        ll a[n];
        for(int i = 0;i < n;i++){
            cin >> a[i];
            maxi = max(a[i],maxi);
        }
        while(m--){
            ll x,y;
            char c;
            cin >> c >> x >> y;
            if(x<=maxi && maxi<=y){
                if(c=='+')
                    maxi++;
                else
                    maxi--;
            }
            cout << maxi << ' ';
        }
        cout << "\n";
    }
    return 0;
}
