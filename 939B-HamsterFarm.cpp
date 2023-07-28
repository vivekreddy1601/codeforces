//code by Vivek Reddy
#include <iostream>
#include <climits>
#define ll long long
using namespace std;

int main()
{
    ll n,k,ind=0;
    cin >> n >> k;
    ll a[k];
    cin >> a[0];
    ll min = n%a[0];
    for(int i = 1; i < k;i++){
        cin >> a[i];
        ll x = n%a[i];
        if(x<min){
            min=x;
            ind = i;
        }
    }
    cout << ind+1 << " " << n/a[ind]<< endl;
    return 0;
}