//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll n,d,c=2;
    cin >> n >> d;
    ll a[n];
    cin >> a[0];
    for(int i = 1;i < n;i++){
        cin >> a[i];
        if((a[i]-a[i-1])>2*d)
            c+=2;
        else if((a[i]-a[i-1])==2*d)
            c++;
    }
    cout << c << '\n';
    
    return 0;
}
