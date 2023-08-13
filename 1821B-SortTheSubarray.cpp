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
        ll a[n],b[n];
        for(int i = 0; i < n;i++){
            cin >> a[i];
        }
        for(int i = 0; i < n;i++){
            cin >> b[i];
        }
        ll l=0,r=n-1;
        while(a[l]==b[l])
            l++;    
        while(a[r]==b[r])
            r--;
        while(l > 0 && b[l]>=b[l-1])
            l--;
        while(r < n-1 && b[r]<=b[r+1])
            r++;
        cout << l+1 << " " << r+1 << endl;
    }
    return 0;
}
