//code by Vivek Reddy
#include <iostream>
#include <climits>
#define ll long long
using namespace std;

int main()
{
    ll n,o=0,m=INT_MAX,s=0;
    cin >> n;
    ll a[n];
    for(int i = 0;i < n;i++){
        cin >> a[i];
        s+=a[i];
        if(a[i]%2!=0){
            o++;
            if(a[i]<m)
                m = a[i];
        }
    }
    if(o%2==0)
        cout << s <<endl;
    else    
        cout << s-m << endl;
    return 0;
}
