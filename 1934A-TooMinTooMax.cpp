//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n,mna=1e7,mnb=1e7,mxa=-1e7,mxb=-1e7;
        cin >> n;
        for(int i = 0;i < n;i++){
            ll x;
            cin >> x;
            if(x <= mna){mnb = mna; mna = x;}
            else if(x < mnb){mnb = x;}

            if(x >= mxa){mxb = mxa; mxa = x;}
            else if(x > mxb){mxb = x;}
        }
        cout << 2*(mxa+mxb-mna-mnb) << '\n';
    }
    return 0;
}
