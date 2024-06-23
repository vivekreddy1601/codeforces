//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n;
        cin >> n;
        if((n/2)&1){
            cout << "NO\n";
        }else{
            cout << "YES\n";
            ll es=0,os=0;
            for(ll i = 0,j=2;i <n/2;i++,j+=2){
                cout << j << ' ';
                es+=j;
            }
            for(ll i = 0,j=1;i<(n/2)-1;i++,j+=2){
                cout << j << ' ';
                os+=j;
            }
            cout << es-os << '\n';
        }
    }
    return 0;
}
