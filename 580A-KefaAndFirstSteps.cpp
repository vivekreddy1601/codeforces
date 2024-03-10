//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll n,c=1,m=1; cin >> n;
    ll a[n];
    for(int i = 0; i < n;i++)   
        cin >> a[i];
    for(int i = 1; i < n;i++){
        if(a[i-1]<=a[i])
            c++;
        else
            c = 1;
        if(c > m)
            m = c;
    }
    cout << m << '\n';
    return 0;
}
