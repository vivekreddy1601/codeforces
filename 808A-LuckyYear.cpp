//code by Vivek Reddy
#include <iostream>
#include <cmath>
#define ll long long
using namespace std;

int main()
{
    ll n,t=0,x;
    cin >> n;
    x= n;
    while(x > 0){
        if(x>=1&&x<10)
            break;
        x/=10;
        t++;
    }
    x++;
    x*=pow(10,t);
    cout << x-n << endl;
    return 0;
}
