//Code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;
 
int main()
{
    ll n,k,m=1,c=1;
    cin >> n >> k;
    ll a[n];
    for(int i = 0; i < n;i++){
        cin >> a[i];
    }
    for(int i = 1;i < n;i++){
        if(a[i-1]!=a[i])
            c++;
        else{
            if(c > m)
                m = c;
            c = 1;
        }
    }
    if(c > m)
        m = c;
    cout << m << endl;
    return 0;
}