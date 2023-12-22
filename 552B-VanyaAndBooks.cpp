//code by Vivek Reddy
#include <iostream>
#include <cmath>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll a[13]={0};
    for(int i = 1; i < 13;i++){
        a[i]=pow(10,i)-1;
    }
    for(int i = 2; i < 13;i++){
        for(int j = 1;j <= i-1;j++){
            a[i]=a[i]-a[j];
        }
    }
    ll count = 0;
    for(int i = 1; i < 13;i++){
        if(n-a[i]>=0){
            count+=a[i]*i;
            n-=a[i];
        }
        else{
            count+=n*i;
            break;
        }
    }
    cout << count << endl;
    return 0;
}
