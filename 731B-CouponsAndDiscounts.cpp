//code by Vivek Reddy
#include <iostream>
#define ll long long 
using namespace std;

int main()
{
    ll n,i,c=0;
    cin >> n;
    ll a[n];
    for(int i = 0; i < n;i++)
        cin >> a[i];
    for(i = 0; i < n-1;i++){
        if(a[i]>=0){
            a[i]%=2;
            if(a[i]){
                a[i]--;
                a[i+1]--;
            }
        }
    }
    if(a[i]>=0){
            a[i]%=2;
    }
    for(int i = 0; i < n;i++){
        if(a[i]!=0){
            c=1;
            break;
        }
    }
    cout << (c?"NO":"YES") << endl;
    return 0;
}