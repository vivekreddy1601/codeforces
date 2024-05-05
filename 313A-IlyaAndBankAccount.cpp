//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    string s;
    cin >> s;
    ll n= s.size();
    if(s[0]!='-'){
        cout << s << '\n';
        return 0;
    }
    int l = s[n-1]-'0';
    int l1 = s[n-2]-'0';
    string ans = "";
    int x = -1;
    if(l > l1)
        x = n-1;
    else
        x = n-2;
    for(int i = 0; i < n;i++){
        if(i!=x)
            ans+=s[i];
    }
    if(ans == "-0")
        ans = "0";
    cout << ans << '\n';
    return 0;
}
