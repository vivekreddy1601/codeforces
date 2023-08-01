//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll n,k,r=1;
    cin >> n>> k;
    ll c5=0,c2=0;
    while(n%5==0){
        n/=5;
        r*=5;
        c5++;
    }
    while(n%2==0){
        n/=2;
        r*=2;
        c2++;
    }
    while(c5<k){
        r*=5;
        c5++;
    }
    while(c2<k){
        r*=2;
        c2++;
    }
    r*=n;
    cout << r << endl;
    return 0;
}