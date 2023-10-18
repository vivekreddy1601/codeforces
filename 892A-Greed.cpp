//code by Vivek Reddy
#include <iostream>
#define ll long long 
using namespace std;

int main()
{
    ll n,s=0,m1=0,m2=0;
    cin >> n;
    ll a[n],b[n];
    for(int i = 0; i <n;i++){
        cin >> a[i];
        s+=a[i];
    }
    for(int i = 0; i < n;i++){
        cin >> b[i];
        if(b[i]>m1){
            m2 = m1;
            m1 = b[i];
        }else if(b[i]>m2)
            m2 = b[i];
    }
    if(m1+m2 < s)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}