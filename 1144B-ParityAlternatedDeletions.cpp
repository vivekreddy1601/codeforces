//code by Vivek Reddy
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{
    ll n,e=0,o=0;
    cin >> n;
    ll a[n];
    for(int i= 0; i < n;i++){
        cin >> a[i];
        if(a[i]%2==0)
            e++;
        else
            o++;
    }
    sort(a,a+n);
    if(abs(e-o)>1){
        ll s = 0,last = abs(e-o)-1;
        ll c = 0;
        if(o > e)   
            c = 1;
        for(int i = 0; i < last;i++){
            if(c == 1){
                if(a[i]%2==1)
                    s+=a[i];
                else
                    last++;
            }
            else{
                if(a[i]%2==0)
                    s+=a[i];
                else
                    last++;
            }
        }
        cout << s << endl;
    }else
        cout << 0 << endl;
    return 0;
}
