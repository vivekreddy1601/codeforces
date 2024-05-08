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
        ll a[n];
        for(int i = 0; i < n;i++){
            cin >> a[i];
            if(a[i]==1)
                a[i]=2;
            if(i && a[i]%a[i-1]==0)
                ++a[i];
        }
        for(int i= 0;i < n;i++)
            cout << a[i] << ' ';
        cout << endl;
    }
    return 0;
}
