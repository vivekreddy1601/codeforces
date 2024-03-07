//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;
void solve(ll n){
    if(n==1){
        cout << 1 << '\n';
        return;
    }
    if(n%2==1){
        cout << -1 << '\n';
        return ;
    }
    ll tot = 0, lim = n,i=0,j=n-1,c=0;
    while(i <=j){
        if(c%2){
            int cur = 0;
            if(j < tot)
                cur = (n+j)-tot;
            else
                cur = j- tot;
            cout << cur << ' ';
            tot = j;
            j--;
        }else{
            int cur = 0;
            if(i <= tot){
                cur = (n+i)-tot;
            }else
                cur = i-tot;
            cout << cur << ' ';
            tot = i;
            i++;
        }
        c++;
    }
    cout << '\n';
    return;
}
int main()
{
    int vt; 
    cin >> vt;
    while(vt--){
        ll n;
        cin >> n;
        solve(n);
    }
    return 0;
}
