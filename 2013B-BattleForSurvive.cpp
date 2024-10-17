//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n,s=0;
        cin >> n;
        ll a[n];
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        for(int i = 0;i < n-2;i++)
            s+=a[i];
        cout << a[n-1] - (a[n-2]-s) << '\n';
    }
    return 0;
}
