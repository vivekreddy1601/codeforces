//code by Vivek Reddy
#include <iostream>
#define ll long long 
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n,k;
        cin >> n>>k;
        ll x = n%k;
        if(x>(k/2))
            cout << n-(x-(k/2)) << endl;
        else
            cout << n << endl;
    }
    return 0;
}