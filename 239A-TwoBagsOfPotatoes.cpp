//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll y,k,n,c=1;
    cin >> y >> k >> n;
    for(int i = ((y/k)+1)*k;i <= n;i+=k){
        c = 0;
        cout << i-y << ' ';
    }
    if(c)
        cout << -1 << endl;
    return 0;
}
