//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n,f,a,b,x,c=0;
        cin >> n >> f >> a >> b;
        ll m[n];
        for(int i = 0; i < n;i++)
            cin >> m[i];
        x = f;
        for(int i = 0; i < n;i++){
            if(i != 0)
                x -= min(b,(m[i]-m[i-1])*a);
            else
                x -= min(b,(m[i]-0)*a);
            if(x <= 0){
                cout << "NO" << '\n';
                c = 1;
                break;
            }
        }
        if(c==0)
            cout <<"YES" << '\n';
    }
    return 0;
}
