//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n,s,t;
        cin >> n >> s >> t;
        cout << max(n-s,n-t)+1 << endl;
    }
    return 0;
}