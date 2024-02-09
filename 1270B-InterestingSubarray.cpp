//code by Vivek reddy
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
        ll a[n];
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        bool check = true;
        for(int i = 1;i<n;i++){
            if(abs(a[i]-a[i-1])>=2){
                cout << "YES" << endl;
                cout << i << ' ' << i+1 << '\n';
                check = false;
                break;
            }
        }
        if(check)
            cout << "NO" << endl;
    }
    return 0;
}
