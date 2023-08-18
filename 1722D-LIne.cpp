// code by Vivek Reddy
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n,ans=0;
        cin >> n;
        string s;
        cin >> s;
        ll ch[n];
        for(int i = 0; i < n;i++){
            if(s[i]=='L')
                ans+=i;
            else
                ans+=n-i-1;
            if(s[i]=='L')
                ch[i]=n-i-1-i;
            else
                ch[i]=i-(n-i-1);
        }
        sort(ch,ch+n);
        reverse(ch,ch+n);
        for(int i = 0; i < n;i++){
            if(ch[i]>0){
                ans+=ch[i];
            }
            cout << ans << " ";
        }
        cout << endl;
    }
    return 0;
}