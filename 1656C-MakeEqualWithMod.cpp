//code by Vivek Reddy
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{
    ll vt;
    cin >> vt;
    while(vt--){
        ll n;
        cin >> n;
        ll a[n];
        bool flag = false, one = false;
        for(int i = 0; i < n;i++){
            cin >> a[i];
            if(a[i]==1)
                one = true;
        }
        if(!one){
            cout << "YES" << endl;
        }else{
            sort(a,a+n);
            for(int i = 0;i < n-1;i++){
                if(a[i+1]-a[i]==1){
                    flag = true;
                    break;
                }
            }
            if(!flag)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}
