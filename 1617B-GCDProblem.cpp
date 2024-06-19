//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll vt;
    cin >> vt;
    while(vt--){
        ll n;
        cin >> n;
        if(n%2==0)
            cout << n-3 << " 2 1\n";
        else{
            n--;
            n/=2;
            if(n%2==0)
                cout << n+1 << ' ' << n-1 << " 1\n";
            else
                cout << n+2 << ' ' << n-2 << " 1\n";
        }
    }
    return 0;
}
