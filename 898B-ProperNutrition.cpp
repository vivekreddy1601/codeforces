#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll n,a,b;
    cin >> n >> a >> b;
    for(int i = 0; n >= 0; i++){
        if((n%a)==0){
            cout << "YES" << endl;
            cout << n/a << " " << i << endl;
            return 0;
        }
        n-=b;
    }
    cout << "NO" << endl;
    return 0;
}