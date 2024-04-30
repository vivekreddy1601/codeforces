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
        ll tot = 0,oth = 1,z=1,tot_till=0;
        while(tot_till<n){
            tot_till+=oth*(oth+1)/2;
            tot++;
            z*=2LL;
            oth+=z;
        }
        if(tot_till>n)
            tot--;
        cout << tot << '\n';
    }
    return 0;
}
