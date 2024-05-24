//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n,k,x;
        cin >> n >> k >> x;
        ll maxi = (n*(n+1)-(n-k)*(n-k+1))/2;
        ll mini = k*(k+1)/2;
        if(x <= maxi && x>=mini)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
