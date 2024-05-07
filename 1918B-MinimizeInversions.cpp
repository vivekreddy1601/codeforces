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
        ll a[n],b[n+1];
        for(int i = 0; i < n;i++)
            cin>>a[i];
        for(int i = 0; i < n;i++)
            cin>>b[a[i]];
        for(int i = 1;i <= n;i++)
            cout << i << " \n" [i==n];
        for(int i = 1;i <= n;i++)
            cout << b[i] << " \n" [i==n];
    }
    return 0;
}
