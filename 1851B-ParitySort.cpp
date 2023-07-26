//code by Vivek Reddy
#include <iostream>
#include <algorithm>
#define ll long long 
using namespace std;
int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n,e=0,o=0;
        cin >> n;
        ll a[n],b[n];
        for(int i = 0; i < n;i++){
            cin >> a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        for(int i = 0; i < n;i++){
            if(a[i]%2!=b[i]%2){
                e = 1;
                break;
            }else{
                if(a[i]!=b[i]){
                    if(a[i]%2==1)
                        o++;
                    else
                        e++;
                }
            }
        }
        if(e==1 || o==1){
            cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }
    return 0;
}