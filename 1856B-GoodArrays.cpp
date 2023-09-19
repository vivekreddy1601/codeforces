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
        for(int i= 0; i < n;i++){
            cin >> a[i];
            if(a[i]==1)
                s--;
            else
                s+=(a[i]-1);
        }
        if(n>1&&s>=0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}