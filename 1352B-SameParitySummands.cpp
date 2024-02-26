//code by Vivek reddy
#include <iostream>
#define ll long long
using namespace std;
bool ce(int n,int k){
    int r = n-(2*k);
    if(r < 0)
        return 0;
    if(r&1)
        return 0;
    cout << "YES\n";
    for(int i = 0; i < k-1;i++){
        cout << 2 << ' ';
    }
    cout << 2+r << '\n';
}
bool co(int n,int k){
    int r = n-k;
    if(r < 0)
        return 0;
    if(r&1)
        return 0;
    cout << "YES\n";
    for(int i = 0; i < k-1;i++){
        cout << 1 << ' ';
    }
    cout << 1+r << '\n';
}
int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n,k;
        cin >> n >> k;
        if(ce(n,k)||co(n,k))
            continue;
        else
            cout << "NO" << '\n';
    }
    return 0;
}
