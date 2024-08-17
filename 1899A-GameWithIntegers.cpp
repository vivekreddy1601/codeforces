//code by Vivek Reddy
#include <iostream>
using namespace std;
#define ll long long

int main()
{
    ll vt;
    cin >> vt;
    while(vt--){
        ll n;
        cin >> n;
        cout << (n%3==0?"Second\n":"First\n");
    }
    return 0;
}
