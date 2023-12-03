//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll vt;
    cin >> vt;
    while(vt--){
        ll a[26]={0};
        ll n,k,o=0;
        cin >> n>> k;
        string s;
        cin >> s;
        for(int i = 0; i < n;i++){
            a[s[i]-'a']++;
        }
        for(int i = 0; i < 26;i++){
            if(a[i]%2==1)
                o++;
        }
        if(o<=(k+1))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
