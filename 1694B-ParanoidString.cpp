//code by Vivek Reddy
#include <iostream>
#define ll long long 
using namespace std;

int main()
{
    ll vt;
    cin >> vt;
    while(vt--){
        ll n,a=0;
        string s;
        cin >> n >> s;
        s = "v"+s;
        for(ll i = n;i>=1;i--){
            if(s[i]!=s[i-1])
               a+=i;
            else
                a++;
        }
        cout << a << endl;
    }
    return 0;
}
