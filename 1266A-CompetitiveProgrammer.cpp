//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        string s;
        cin >> s;
        ll sum=0,even=0;
        bool zero=false;
        for(ll i = 0; i < s.size();i++){
            ll x = s[i]-'0';
            if(x==0)
                zero=true;
            if(x%2==0)
                even++;
            sum+=x;
        }
        if(sum%3==0 && even > 1 && zero)
            cout << "red" << endl;
        else
            cout << "cyan" << endl;
    }
    return 0;
}