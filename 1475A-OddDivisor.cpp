//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll vt;
    cin >> vt;
    while(vt--){
        ll n;
        cin >> n;
        if(n%2==1)
            cout << "YES" << endl;
        else{
            ll c = 0,t = n;
            while(t>2){
                t/=2;
                if(t%2==1){
                    if(n%t==0){
                        c = 1;
                        break;
                    }
                }
            }
            if(c==1)
                cout  << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}