//code by Vivek Reddy
#include <iostream>
#define ll long long int
using namespace std;

int main()
{
    ll n,b,d,s=0,t=0;
    cin >> n >> b >> d;
    ll a[n];
    for(int i = 0; i < n;i++){
        cin >> a[i];
    }
    for(int i = 0; i < n;i++){
        if(a[i]>b){
            continue;
        }
        s+=a[i];
        if(s > d){
            s = 0;
            t++;
        }
    }
    cout << t << endl;
    return 0;
}