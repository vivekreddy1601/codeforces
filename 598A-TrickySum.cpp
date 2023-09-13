//code by Vivek Reddy   
#include <iostream>
#include <cmath>
#define ll long long 
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n,s=0,ts=0,c=0;
        cin >> n;
        s = (n*(n+1))/2;
        while(pow(2,c)<=n){
            ts+=pow(2,c);
            c++;
        }
        cout << s-(2*ts) << endl;
    }
    return 0;
}